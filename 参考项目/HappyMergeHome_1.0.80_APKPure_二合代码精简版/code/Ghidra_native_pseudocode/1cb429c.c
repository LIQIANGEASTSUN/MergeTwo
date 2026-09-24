
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01cc429c(int *param_1)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01cc43d8 + 0x1cc42b4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cc43dc + 0x1cc42c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3121,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
    fVar2 = _UNK_01cc43d4;
    if (iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01cc43e0 + 0x1cc4348) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x02c35d10(0x31,0);
      if (iVar1 != 0) {
        iVar5 = FUN_01cc4230(param_1);
        iVar1 = 0;
        if (iVar5 != 0) {
          iVar1 = param_1[0x10];
        }
        if (iVar5 != 0 && iVar1 != 0) {
          iVar1 = FUN_01cc28c8(param_1);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar5 = param_1[0x10];
          uVar6 = *(undefined4 *)(iVar1 + 0x34);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          fVar2 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
          fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar2 = fVar2 / fVar7;
        }
      }
    }
    return fVar2;
  }
  iVar1 = func_0x029540a4(0x3121,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  func_0x024f56d0(iVar5,uVar6,&uStack_30,uVar3,0,0);
  fVar2 = (float)func_0x024f5720(&uStack_30,0,0);
  return fVar2;
}

