# This script will setup XiangShan environment variables

XS_HOME = "/home/ywq/xs-env"

export XS_PROJECT_ROOT=${XS_HOME}
export NEMU_HOME=${XS_HOME}/NEMU
export AM_HOME=${XS_HOME}/nexus-am
export NOOP_HOME=${XS_HOME}/XiangShan
export DRAMSIM3_HOME=${XS_HOME}/DRAMsim3

echo SET XS_PROJECT_ROOT: ${XS_PROJECT_ROOT}
echo SET NOOP_HOME \(XiangShan RTL Home\): ${NOOP_HOME}
echo SET NEMU_HOME: ${NEMU_HOME}
echo SET AM_HOME: ${AM_HOME}
echo SET DRAMSIM3_HOME: ${DRAMSIM3_HOME}
