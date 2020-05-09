#include "glog/logging.h"

int main(int arg, char **argv)
{

    // 要使用下面的api，需要安装额外的gflags,以及添加上面注释的头文件
    // google::ParseCommandLineFlags(&argc, &argv, true);

    // Initialize Google's logging library.
    google::InitGoogleLogging(argv[0]);

    FLAGS_log_dir = "./log"; //log需要预先创建好
    //or  google::SetLogDestination(google::GLOG_INFO, "./log_");

    LOG(FATAL) << "hello world";
}