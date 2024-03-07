
class List{
    private:
        const_size_t item_size; /* size of an item in bytes. */
        size_t lengt; /* number of items in vec. */
        size_t capacity; /* number of items buffer can store. */
        void* buffer; /* heap memory storing items */

    public:
        //List value(){}
        //void drop(){}
        size_t length(){
            return this.length;
        }
        const void* items(){
            return this.buffer;
        }

        void* ref(){
            return Null;
        }
        void get(){}
        void set(){}
} 