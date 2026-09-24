
void FUN_032b6498(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = param_1 + 1;
  *param_1 = 0xfffffffe;
  iVar1 = func_0x051f89e0(0,0);
  if (iVar1 != 0) {
    iVar1 = func_0x05056608(piVar3);
    if (iVar1 == 0) {
      func_0x034a8a64();
    }
    uVar2 = func_0x051ef178(iVar1,0);
    func_0x051fcde4(0,uVar2,1,0);
  }
  if (*piVar3 != 0) {
    piVar3 = (int *)*piVar3;
    if (piVar3 == (int *)0x0) {
      func_0x034a8a64();
    }
    (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
    return;
  }
  return;
}

