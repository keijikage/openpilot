#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_3307893292679224287);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_6001357432987055053);
void car_H_mod_fun(double *state, double *out_6698604941463224001);
void car_f_fun(double *state, double dt, double *out_4727966728113728144);
void car_F_fun(double *state, double dt, double *out_6985378252109603664);
void car_h_25(double *state, double *unused, double *out_1759107569896847539);
void car_H_25(double *state, double *unused, double *out_8208846802942008690);
void car_h_24(double *state, double *unused, double *out_6382576662856627788);
void car_H_24(double *state, double *unused, double *out_170883007819729627);
void car_h_30(double *state, double *unused, double *out_4637493100797381955);
void car_H_30(double *state, double *unused, double *out_3819533153493876732);
void car_h_26(double *state, double *unused, double *out_1120491813196356001);
void car_H_26(double *state, double *unused, double *out_7081947745291931860);
void car_h_27(double *state, double *unused, double *out_7517092483890585495);
void car_H_27(double *state, double *unused, double *out_4647261601950982249);
void car_h_29(double *state, double *unused, double *out_1404140875136843641);
void car_H_29(double *state, double *unused, double *out_8370634557688195934);
void car_h_28(double *state, double *unused, double *out_8919056942041042463);
void car_H_28(double *state, double *unused, double *out_2397400043882984835);
void car_h_31(double *state, double *unused, double *out_7378609714787003643);
void car_H_31(double *state, double *unused, double *out_5660203173478410483);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
void car_set_steer_ratio(double x);
}