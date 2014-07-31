require 'twitter'
require 'rubygems'
client = Twitter::REST::Client.new do |config|
  config.consumer_key        = "JxGHaZvfKaQGWSqMJkrwGsqin"
  config.consumer_secret     = "WHIz2XutvbhOR0nHs7YlLfxCg7I9KdOCLYY53qyfF4pWOiVVUm"
  config.access_token        = "2349402150-gXnWsSX9X7rNR2niFqJOVq5yrkFiBkMMKn2T8PX"
  config.access_token_secret = "6lfQ1ePayTq91oNEfF2vWLEBtZAxu99eXk42mITXeHVGt"
end

client.update("oooooo")
