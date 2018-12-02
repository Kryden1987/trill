#ifndef RULE_HPP
#define RULE_HPP


namespace trill
  {
      
      
  class Rule 
    {
        
    public:
        
        
        
    private:
        
    };
      
      
      

  template <char ... Symbol> 
  struct Terminal
    {
        
        
    };
   
  struct epsilon
    {
    };
   
   
  template <typename Char,Char ... String> constexpr auto operator""_term() 
    {
    return Terminal<String...>{};
    }; 
   
  } // end namespace trill

#endif // RULE_HPP
