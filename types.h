#include <iostream>


class token {
	private:
		int pos;
		type_s ty;
		std::string tok_n; 
        public:
                void set_pos(const int p){
			this->pos = p;
		}

                void set_type (const type_s t){
			this->ty = t;
		}

                void set_tokn(const std::string& oc){
			this->tok_n = oc;
		}

                int get_pos(){
                        return this->pos;
		}

                type_s get_type(){
			return this->ty;
		}

                std::string get_tokn (){
			return this->tok_n;
		}
};

