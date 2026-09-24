
void FUN_02e64120(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  iVar1 = func_0x02953fd4(0x52ab,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x014388e4();
    }
    FUN_02e62afc(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_9,param_3
                 ,param_4,param_5,param_6,param_7,param_8,param_9,param_10,0);
  }
  else {
    iVar1 = func_0x029540a4(0x52ab,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028e9fb4(iVar1,param_1,param_2);
  }
  return;
}

