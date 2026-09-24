
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02c4a88c(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02c4aa0c + 0x2c4a8a4);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c4aa10 + 0x2c4a8b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c4aa14 + 0x2c4a8c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c4aa18 + 0x2c4a8d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c4aa1c + 0x2c4a8dc));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5d1c,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(_UNK_02c4aa20 + 0x2c4a938) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4aa24 + 0x2c4a954));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar1 = 0;
    iVar4 = func_0x029a6fa8(iVar2,param_2,0);
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = *(int *)(iVar4 + 0x84);
      param_2 = iVar4;
    }
    if (iVar4 != 0 && iVar2 != 0) {
      uVar1 = 0;
      iVar2 = func_0x02b53c1c(iVar2,0,0);
      if (iVar2 == 0) {
        if (*(int *)(**(int **)(_UNK_02c4aa28 + 0x2c4a9bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02c4aa2c + 0x2c4a9d8));
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02bd7af0(iVar2,param_2,0);
        uVar1 = (uint)(0 < iVar2);
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x5d1c,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a2c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar3 = 3;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar1 = func_0x024f56e0(&uStack_38,0,0);
  return uVar1;
}

