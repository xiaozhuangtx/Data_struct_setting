#include "../utils/common.hpp"
// 随机访问
int randomAccess(int *arr, int size){
    // 在区间[0, size)内随机选取一个索引
    int randomIndex = rand() % size;
    // 返回索引对应的元素
    return arr[size];
}
// 插入元素
void insert(int *nums,int size,int num,int index){
    if(index<0||index>size){
        cout<<"索引错误"<<endl;
        return;
    }
    //把索引index之后的元素都向后移动一位
    for(int i=size-1;i>index;i--){
        nums[i]=nums[i-1];
    }
    //把新元素放到索引index的位置
    nums[index]=num;
}
// 删除元素
void remove(int *nums,int size,int index){
    if (index<0||index>size){
        cout<<"索引错误"<<endl;
        return;
    }
    //把索引index之后的元素都向前移动一位
    for(int i=index;i<size-1;i++){
        nums[i]=nums[i+1];
    }

}
int main(){
    // 创建数组
    int arr[5] = {1, 2, 3, 4, 5};
    int nums[5]={1,2,3,4,5};
    cout << arr[0]<< endl;
    cout << nums[5] << endl;
    //申请内存
    int *arr1 = new int[5];
    int *nums1 = new int[5]{1,2,3,4,5};
    cout << arr1[0]<< endl;// 输出结果为-1163005939，因为申请的内存空间没有初始化
    cout << nums1[4] << endl;
    // 释放内存
    delete[] arr1;
    delete[] nums1;
    // 随机访问
    cout<<randomAccess(arr, 5)<<endl;
    // 插入元素
    int len = sizeof(nums)/sizeof(nums[0]);    //求出数组的长度
    insert(nums,5,len,5);
    for(int i=0;i<6;i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}