#include <stdio.h>

int main(){
	int max_size = 100;
	int array[max_size];
	int n,choice;
	int size = 0;
	int chan = 0, le = 0;
	int temp = 0;
	while (1){
		printf("=====MENU=====\n");
		printf("1. Nhap so phan tu va gia tri cho mang.\n");
		printf("2. In ra gia tri cac phan tu trong mang.\n");
		printf("3. Dem so luong phan tu chan le trong mang.\n");
		printf("4. Tim gia tri lon thu hai trong mang.\n");
		printf("5. Them mot phan tu vao mang.\n");
		printf("6. Xoa phan tu tai vi tri cu the.\n");
		printf("7. Sap xep mang theo thu tu giam dan.(insertion sort)\n");
		printf("8. Nhap vao 1 phan tu de coi no co ton tai trong mang hay khong.(Binary search)\n");
		printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong.\n");
		printf("10. Sap xep mang theo thu tu giam dan.(Bubble sort)\n");
		printf("11. Thoat\n");
		printf("Lua chon cua ban la : ");
		scanf("%d",&choice);
		int max = array[0];
		switch (choice){
			case 1:
				printf("Nhap so phan tu cho mang : ");
				scanf("%d",&n);
				size = n;
				if (n <=0 || n > max_size){
					printf("Khong hop le.\n");
					break;
				}
				for (int i = 0; i<n;i++){
					printf("array[%d] = ",i);
					scanf("%d",&array[i]);
				}
				printf("Da cap nhat thanh cong.\n");
				break;
			case 2:
				if (size == 0){
					printf("Mang rong.\n");
					break;
				}
				printf("Gia tri cac phan tu trong mang la : \n");
				for (int i = 0; i< size;i++){
					printf("array[%d] = %d",i,array[i]);
					if (i!= (size -1)){
						printf(", ");
					} else {
						printf("\n");
					}
				}
				break;
			case 3:
				for (int i = 0; i<size;i++){
					if (array[i]%2 == 0 && array[i]!=0){
						chan++;
					} else if (array[i]==0) {
					} else {
						le++;
					}
				}
				printf("So luong phan tu chan trong mang la : %d so chan\n", chan);
				printf("So luong phan tu le trong mang la : %d so le\n", le);
				break;	
			case 4:
				for (int i = 0;i<size;i++){
					if (max < array[i]){
						max = array[i];
					}
				}
				temp = max;
				max = array[0];
				for (int j = 0;j<size;j++){
					if (array[j]==temp){
						continue;
					} 
					if (max < array[j]){
						max = array[j];
					}
			}
				printf("Gia tri lon thu 2 trong mang la : %d\n",max);
				break;
			case 5:
				if(size == max_size){
                    printf("Mang da day, ko them them nua\n");
                    break;
                }
                int addIndex, valueInput;
                printf("Hay nhap vi tri can them:");
                scanf("%d", &addIndex);
                printf("Hay nhap vao gia tri can them:");
                scanf("%d", &valueInput);
                if(addIndex < 0){
                    addIndex = 0;
                } else if(addIndex > size){
                    addIndex = size;
                }

                for(int i = size-1 ; i >= addIndex ; --i){
                    array[i+1] = array[i];
                }

                array[addIndex] = valueInput;
                size++;
                printf("Da them moi thanh cong \n");
                break;
			case 6:
				int deleteIndex;
                printf("Hay nhap vi tri can xoa:");
                scanf("%d", &deleteIndex);
                if(deleteIndex <0 || deleteIndex > size - 1){
                    printf("vi tri can xoa ko hop le \n");
                } else{
                    for (int i = deleteIndex; i < size-1; ++i) {
                        array[i] = array[i+1];
                    }
                    size--;
                    printf("Da xoa thanh cong \n");
                }
                break;
			case 7:
				for (int i =1; i < n;i++){
					int key = array[i];
					int j = i -1;
					while (j >= 0 && array[j] < key){
						array[j+1] = array[j];
						j = j - 1; 
					} 
					array[j+1] = key; 
				}
				printf("Mang sau khi sap xep la : \n");
				for (int i = 0; i< size;i++){
					printf("array[%d] = %d\n",i,array[i]);
				}
				break;
			case 8:
				int search,start,end,mid;
				printf("Hay nhap phan tu muon tim : ");
				scanf("%d",&search);
				mid = start + (end-start)/2;
				if (search == mid){
					printf("Tim duoc phan tu o vi tri %d",mid);
				} else if (search < mid){
					
				}
				break;
			case 9:
				for (int i =0;i<size;i++){
					if (array[i]);
				}
			case 10:
				for (int i = 0;i<size-1;i++){
					for (int j = 0;j< size - i - 1;j++){
						if (array[j]< array[j+1]){
							temp = array[j];
							array[j] = array[j+1];
							array[j+1] = temp;
						}
					}
				}
				printf("Mang sau khi sap xep la : \n");
				for (int i = 0; i< size;i++){
					printf("array[%d] = %d\n",i,array[i]);
				}
				break;
			case 11:
				break;
			default:
				printf("Khong hop le\n");
				printf("Hay thu lai.\n");
				break;
			}	
		if (choice == 11){
			printf("Thoat chuong trinh.\n");
			break;
		}	
		}
		return 0;	
	}

