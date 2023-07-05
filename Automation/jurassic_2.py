import ai21
from key import AI21_API_KEY
ai21.api_key = AI21_API_KEY

def askQuestion(question):

  response = ai21.Completion.execute(
    model="j2-ultra",
    prompt= question,
    maxTokens=2048,
    temperature=0.7,
    topP = 1.0
  )

  return response['completions'][0]['data']['text']

