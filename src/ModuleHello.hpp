/*******************************************************************************
 * Project:  NebulaDemo
 * @file     ModuleHello.hpp
 * @brief    Http请求示例
 * @author   Bwar
 * @date:    2019年1月27日
 * @note     
 * Modify history:
 ******************************************************************************/
#ifndef MODULEHELLO_HPP_
#define MODULEHELLO_HPP_

#include <string>
#include <actor/cmd/Module.hpp>

namespace demo
{

class ModuleHello: public neb::Module, public neb::DynamicCreator<ModuleHello, std::string>
{
public:
    ModuleHello(const std::string& strModulePath);
    virtual ~ModuleHello();

    virtual bool Init();

    virtual bool AnyMessage(
                    std::shared_ptr<neb::SocketChannel> pUpstreamChannel,
                    const HttpMsg& oHttpMsg);
};

} /* namespace demo */

#endif /* MODULEHELLO_HPP_ */
