#ifndef MEDIA_MICROSERVICES_RECOMMENDERHANDLER_H
#define MEDIA_MICROSERVICES_RECOMMENDERHANDLER_H

#include <iostream>
#include <string>
#include <regex>
#include <future>

#include "../../gen-cpp/RecommenderService.h"

#include "../ClientPool.h"
#include "../ThriftClient.h"
#include "../logger.h"

namespace media_service{

class RecommenderServiceHandler : public RecommenderServiceIf {
 public:
  RecommenderServiceHandler() ;
  ~RecommenderServiceHandler() override=default;

  void GetRecommendations(std::vector<std::string>& _return, const int64_t user) override;
};

// Constructor
RecommenderServiceHandler::RecommenderServiceHandler() {

}

// Remote Procedure "GetRecommendations"
void RecommenderServiceHandler::GetRecommendations(std::vector<std::string>& _return, const int64_t user){
    std::cout << "Rec Handler !!! ..." << std::endl;
    // Get recommended movie ids for this user
   _return.push_back("Muppets Take Manhattan I");
   _return.push_back("The Lion Kingi II");

  }

} // namespace media_service


#endif //MEDIA_MICROSERVICES_RECOMMENDERHANDLER_H

