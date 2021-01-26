class Solution{
public:
    int heapHeight(int n, int arr[]){
        int child=n-1,h=0;
        while(child){
            child=(child-1)/2;
            h++;
        }
        return h;
    }
};
