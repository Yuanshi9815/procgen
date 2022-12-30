default_context_options = {
    "bigfish": {
    },
    "bossfight": {
        "completion_bonus": 10,
        "positive_reward": 1,
        
        "boss_r": 3.,
        "player_bullet_vel": 1,
        "bottom_margin": 6,

        "boss_vel_timeout": 50,
        "boss_damage_timeout": 40,

        "max_rounds_num": 5,
        "min_rounds_num": 1,
        "max_round_health": 9,
        "min_round_health": 1,

        "enable_attack_mode_0": True,
        "enable_attack_mode_1": True,
        "enable_attack_mode_2": True,
        "enable_attack_mode_3": True,

        "enable_shield": True,

        "max_barriers_num": 3,
        "min_barriers_num": 1,
    },
    "caveflyer": {
        "world_dim": 30,
        "objects_factor": 10,
        "enable_obstacle": False,
        "enable_target": False,
        "enable_enemy": True,
        "enemy_v_fast": .2,
        "enemy_v_slow": .1,
    },
    "chaser":{
        "maze_dim": 11,
        "total_enemies": 3,
        # "extra_orb_sign": 0,
        "eat_time": 75,
        "egg_time": 50,
        "total_orbs": 10,
    },
    "climber": {
        "gravity": .2,
        "max_jump": 1.5,
        "air_control": .15,
        "maxspeed": .5,
        "min_platforms": 1,
        "max_platforms": 10,
        "enemy_prob": .3,
        "coin_prob": .5,
        "max_plat_len": 11,
        "min_plat_len": 2,
        "world_width": 16,
        "margin_bottom": 5,
    },
    "coinrun": {
        "visibility": 13,
        "maxspeed": .5,
        "main_width": 64,
        "main_height": 64,
        "allow_pit": True,
        "allow_crate": True,
        "unenven_ground": True,
        "allow_lava": True,
        "allow_saw": True,
        "allow_monsters": False,
        "min_crate_height": 1,
        "max_crate_height": 3,

    },
    "dodgeball": {
        "world_dim": 20,
        "fire_interval": 20,
        "thickness": .6,
        "enemy_r": .5,
        "ball_r": .5,
        "ball_vscale": .5,
        "maxspeed": .75,
        "exit_r": 1.5,
        "enemy_v": .05,
        "num_iterations": 4,
        "max_extra_enemies": 3,
        "base_num_enemies": 3,
        "allow_left_exit": True,
        "allow_right_exit": True,
        "allow_top_exit": True,
        "allow_bottom_exit": True,
    },
    "fruitbot": {
        "main_width":10,
        "main_height":60,
        "min_sep": 4,
        "num_walls": 5,
        "object_group_size" : 6,
        "buf_h":4,
        "door_prob": .125,
        "min_pct": .1,
        "min_fruits": 10,
        "max_fruits": 19,
        "min_foods": 10,
        "max_foods": 19,
    },
    "heist": {
    },
    "jumper": {
    },
    "leaper": {
    },
    "maze": {
    },
    "miner": {
    },
    "ninja": {
    },
    "plunder": {
    },
    "starpilot": {
    },

}