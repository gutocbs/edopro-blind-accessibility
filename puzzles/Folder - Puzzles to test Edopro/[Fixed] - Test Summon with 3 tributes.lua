--Created using senpaizuri's Puzzle Maker (updated by Naim & Larry126)
Debug.ReloadFieldBegin(DUEL_ATTACK_FIRST_TURN+DUEL_SIMPLE_AI,4)
Debug.SetPlayerInfo(0,8000,0,0)
Debug.SetPlayerInfo(1,8000,0,0)

--Main Deck
Debug.AddCard(21208154,0,0,LOCATION_DECK,0,POS_FACEDOWN)
--Hand
Debug.AddCard(31178212,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(10000080,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(94092230,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(79844764,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(69327790,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(21208154,0,0,LOCATION_HAND,0,POS_FACEDOWN)
Debug.AddCard(28053763,0,0,LOCATION_HAND,0,POS_FACEDOWN)
--Monster Zones
Debug.AddCard(21522601,1,1,LOCATION_MZONE,2,4,true)
Debug.AddCard(21522601,1,1,LOCATION_MZONE,0,4,true)
Debug.AddCard(21522601,1,1,LOCATION_MZONE,1,4,true)
Debug.AddCard(84488827,0,0,LOCATION_MZONE,2,4,true)
Debug.AddCard(84488827,0,0,LOCATION_MZONE,3,4,true)
Debug.AddCard(84488827,0,0,LOCATION_MZONE,4,4,true)
Debug.ReloadFieldEnd()
aux.BeginPuzzle()