#include<iostream>
#include<ostream>

#include "List.h"

template <typename T>
class ListArray : public List<T> {

	    private:

	            T* arr;
	            int max;
	            int n;
	            static const int MINSIZE;
	            void resize(int new_size);

	        public:
	        ListArray();

	        ~ListArray(){
				delete[] arr;
			};

	        T operator[](int pos){
				if(pos < 0 || pos > max) {
				            throw std::out_of_range("Posición inválida");
					        }
			        else{
					            return arr[pos];
						        }
			};

	        friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list){
				for(int i = 0; i < list.n; i++){
				            out << list.arr[i] << " ";
					        }
			        return out;
			};

	        void insert(int pos, T e) override{
				if(pos < 0 || pos > max) {
				            throw std::out_of_range("Posición inválida");
					        }
			        else{
					            arr[pos] = e;
						        }
			}
            
			void append(T e) override{
				if(n == max){
				            resize(max*2);
					        }
			        arr[n++] = e;
			}

	        void prepend(T e) override{
				if(n == max){
				            resize(max*2);
					        }
			        for(int i = n; i > 0; i--){
					            arr[i] = arr[i-1];
						        }
			        arr[0] = e;
			        n++;
			}

	        T remove(int pos) override{
				if(pos < 0 || pos > max) {
				            throw std::out_of_range("Posición inválida");
					        }
			        else{
					            T aux = arr[pos];
						            for(int i = pos; i < n-1; i++){
								                arr[i] = arr[i+1];
										        }
							            n--;
								            return aux;
									        }
			}

	        T get(int pos) override{
				if(pos < 0 || pos > max) {
				            throw std::out_of_range("Posición inválida");
					        }
			        else{
					            return arr[pos];
						        }
			}

	        int search(T e) override{
				for(int i = 0; i < n; i++){
				            if(arr[i] == e){
						                return i;
								        }
					        }
			        return -1;
			}

	        bool empty() override{
				return n == 0;
			}

	        int size() override{
				return n;
			}

};
template <typename T>
ListArray<T>::ListArray(){
	    max = MINSIZE;
	    arr = new T[max];
	    n = 0;
}
template <typename T>
void ListArray<T>::resize(int new_size){
	    T* aux = new T[new_size];
	    for(int i = 0; i < n; i++){
		            aux[i] = arr[i];
			        }
	    delete[] arr;
	    arr = aux;
	    max = new_size;
}
template <typename T>
const int ListArray<T>::MINSIZE = 2;


