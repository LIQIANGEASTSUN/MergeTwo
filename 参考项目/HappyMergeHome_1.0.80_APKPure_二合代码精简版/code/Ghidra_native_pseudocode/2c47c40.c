
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c57c40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_02c57dd8 + 0x2c57c60);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c57ddc + 0x2c57c74));
    func_0x01438628(*(undefined4 *)(_UNK_02c57de0 + 0x2c57c80));
    func_0x01438628(*(undefined4 *)(_UNK_02c57de4 + 0x2c57c8c));
    func_0x01438628(*(undefined4 *)(_UNK_02c57de8 + 0x2c57c98));
    func_0x01438628(*(undefined4 *)(_UNK_02c57dec + 0x2c57ca4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5b51,0);
  if (iVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(**(int **)(_UNK_02c57df0 + 0x2c57d0c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x024eec50(uVar4,0,0);
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(_UNK_02c57dfc + 0x2c57d7c);
      if (param_2 != 0) {
        puVar2 = *(undefined4 **)(_UNK_02c57df8 + 0x2c57d74);
      }
      uVar5 = *(undefined4 *)(param_1 + 100);
      uVar4 = *puVar2;
      if (*(int *)(**(int **)(_UNK_02c57df4 + 0x2c57d68) + 0x74) == 0) {
        func_0x014387a4();
      }
      uVar4 = func_0x02aee9b4(uVar5,uVar4,**(undefined4 **)(_UNK_02c57e00 + 0x2c57da8),param_3,1,0);
      (*(code *)&UNK_05d3fe88)(param_1,uVar4,0);
      return;
    }
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02c57d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0xc))(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x14));
      return;
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5b51,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286e9ac(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

