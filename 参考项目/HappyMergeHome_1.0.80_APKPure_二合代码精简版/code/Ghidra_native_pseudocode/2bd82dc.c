
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02be82dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
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
  
  pcVar3 = (char *)(_UNK_02be83f0 + 0x2be82f4);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be83f4 + 0x2be8308));
    func_0x01438628(*(undefined4 *)(_UNK_02be83f8 + 0x2be8314));
    *pcVar3 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x02953fd4(0x5d2f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5d2f,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar2,0,0);
    uVar7 = func_0x024f56e0(&uStack_38,0,0);
    return uVar7;
  }
  iVar1 = FUN_02bad050(param_1,param_2);
  if (iVar1 != 0) {
    iVar5 = 0;
    puVar8 = *(undefined4 **)(_UNK_02be83fc + 0x2be8390);
    do {
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0xc);
      uVar7 = (uint)(iVar5 < iVar4);
      if (iVar4 <= iVar5) {
        return uVar7;
      }
      iVar4 = *(int *)(iVar1 + 0x10);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar6 = func_0x03b780b0(iVar4,iVar5,*puVar8);
      iVar4 = func_0x02be8400(param_1,uVar6);
      iVar5 = iVar5 + 1;
    } while (iVar4 == 0);
  }
  return uVar7;
}

