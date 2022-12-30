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
        "world_dim": 9,
        "min_maze_dim": 3,
        "min_keys": 1,
        "max_keys": 3,
    },
    "jumper": {
        "world_dim": 20,
        "visibility": 12,
        "compass_dim": 3,
        "jump_cooldown": 3,
        "max_jump_count": 2,
    },
    "leaper": {
        "min_car_speed": .05,
        "max_car_speed": .2,
        "min_log_speed": .05,
        "max_log_speed": .1,
        "min_log_gap": 0,
        "car_left_prob": .5,
    },
    "maze": {
        "world_dim": 15,
        "min_maze_dim": 3,
        "max_maze_dim": 15,
    },
    "miner": {
        "world_dim": 15,
        "diamond_pct": .03,
        "boulder_pct": .2,
    },
    "ninja": {
        "gravity": .2,
        "max_jump": 1.25,
        "jump_charge_inc": .25,
        "air_control": .15,
        "maxspeed": .5,
        "visibility": 16,
        "bomb_prob": .5,
        "max_num_sections": 6,
        "max_gap_inc": 1,
    },
    "plunder": {
        "target_time_reward": 0.1,
        "target_time_penalty": 0.1,
        "step_time_penalty": 0.0015,
        "fire_time_penalty": 0.02,
        "target_quota": 20,
        "spawn_prob": .06,
        "num_lanes": 5,
        "r_scale": 1.5,
        "left_prob": .5,
        "enemy_prob": .5,
        "max_speed": .25,
        "min_speed": .15,
    },
    "starpilot": {
        "maxspeed": .75,
        "max_group_size": 5,
        "can_spawn_left": False,
        "left_prob": .1,
        "min_enemy_delta_t": 10,
        "max_enemy_delta_t": 30,
        "flyer_prob_weight": 1,
        "meteor_prob_weight": 0,
        "cloud_prob_weight": 0,
        "turret_prob_weight": 0,
        "fastflyer_prob_weight": 0,
    },

}