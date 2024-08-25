# Basic Type

star引擎中有以下几种基础类型，它们会被最基础的代码绑定在ClassDB上。
> 暂未绑定的类型请暂时不要绑定到组件属性或类属性上

- int8_t
- int16_t
- int32_t
- int64_t
- uint8_t
- uint16_t
- uint32_t
- uint64_t
- float
- double
- char8_t
- star::vec2
- star::vec3
- star::vec4
- star::mat4
- star::String
- star::U8String
- star::List\<E>(暂未绑定)
- star::SafeList\<E>(暂未绑定)

注意!!!

绑定属性时请一定要写全名例如要绑定一个字符串属性,你需要写出`star::String`,写`String`不仅没有任何作用反而可能导致程序崩溃。

不要去绑定除了上述类型及仅绑定上述类型属性的类型之外的类型,例如你不能绑定一个`int`
属性,因为引擎不提供int的绑定,只提供了`int32_t`(虽然在大多数编译器上这两者并无差别,但在c++的标准中未规定`int`
是32字节的,所以star中只提供了能够确定字节大小的`int32_t`类型的绑定而非`int`,其他数字类型也是同理)
。当然,你可以尝试参考着star内部的绑定实现来编写绑定代码来支持更多你习惯的基础类型的绑定。

star引擎更推荐你使用这些基础类型来代替原来你习惯的类型,比如使用`star::String`来代替`std::string`,用`star::List<E>`
来代替`std::vector<E>`(不要被名字误导了,`star::List<E>`的功能和`std::vector<E>`是一样的,它和`std::list<E>`
没有关系。改名是因为我很讨厌标准库的命名方式,它不符合人们的一般叫法)。