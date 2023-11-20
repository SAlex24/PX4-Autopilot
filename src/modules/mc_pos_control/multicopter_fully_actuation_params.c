/****************************************************************************
 *
 *   Copyright (c) 2023 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/**
 * Enable/Disable fully actuated position controller
 *
 * A value of 0 (default) uses the standard controller. A value of 1 enables the fully actuated position controller.
 * In case of fully actuated control, the parameter MPC_FA_MODE determines how the attitude will be controlled.
 * Set to Disabled when using an underactuated hardware.
 *
 * @boolean
 * @group Multicopter Fully Actuation
 */
PARAM_DEFINE_INT32(MPC_FA_ENABLE, 0);

/**
 * Mode of the fully actuation
 *
 * Sets how the orientation is going to be controlled. An angle that is not being controlled will constantly be zero.
 *
 * @min 0
 * @max 3
 * @bit 0 Control Roll Angle via Aux1
 * @bit 1 Control Pitch Angle via Aux2
 * @group Multicopter Fully Actuation
 */
PARAM_DEFINE_INT32(MPC_FA_MODE, 0);

/**
 * Maximum Pitch Angle for fully actuated control
 *
 * Absolute value, affects both directions the same way.
 *
 * @unit deg
 * @min 0
 * @max 180
 * @increment 1.0
 * @group Multicopter Fully Actuation
 */
PARAM_DEFINE_FLOAT(MPC_FA_P_MAX, 10.f);

/**
 * Maximum Roll Angle for fully actuated control
 *
 * Absolute value, affects both directions the same way.
 *
 * @unit deg
 * @min 0
 * @max 180
 * @increment 1.0
 * @group Multicopter Fully Actuation
 */
PARAM_DEFINE_FLOAT(MPC_FA_R_MAX, 10.f);
