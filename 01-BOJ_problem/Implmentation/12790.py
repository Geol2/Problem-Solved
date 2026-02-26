T = int(input())

for _ in range(T):
    ability = list(map(int, input().split()))

    charactor_ability = ability[0:4]
    equipment_ability = ability[4:]

    hp_score = charactor_ability[0] + equipment_ability[0]
    mp_score = charactor_ability[1] + equipment_ability[1]
    attack_score = charactor_ability[2] + equipment_ability[2]
    defence_score = charactor_ability[3] + equipment_ability[3]
    
    if hp_score < 1:
        hp_score = 1
    if mp_score < 1:
        mp_score = 1
    if attack_score < 0:
        attack_score = 0
    
    print(hp_score + mp_score * 5 + attack_score * 2 + defence_score * 2)