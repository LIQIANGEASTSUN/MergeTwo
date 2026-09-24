
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02c793ec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  pcVar4 = (char *)(_UNK_02c79520 + 0x2c79404);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c79524 + 0x2c79418));
    func_0x01438628(*(undefined4 *)(_UNK_02c79528 + 0x2c79424));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar5 = *(int *)(param_1 + 0x10);
    piVar3 = *(int **)(_UNK_02c79530 + 0x2c794a0);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar7 = **(int **)(*piVar3 + 0x5c);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = FUN_02c3d868(iVar7,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar5 + 0x78);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    uVar6 = 0;
    FUN_02bee8e8(iVar7,uVar2,0,0,0,0);
    *(undefined4 *)(iVar5 + 0x88) = 0;
    func_0x014385cc((undefined4 *)(iVar5 + 0x88),0);
  }
  else {
    uVar6 = 0;
    if (*(int *)(param_1 + 8) == 0) {
      puVar1 = *(undefined4 **)(_UNK_02c7952c + 0x2c79454);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      uVar2 = func_0x014388d4(*puVar1);
      func_0x024ef218(uVar2,0x3f666666,0);
      *(undefined4 *)(param_1 + 0xc) = uVar2;
      func_0x014385cc((undefined4 *)(param_1 + 0xc),uVar2);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar6;
}

