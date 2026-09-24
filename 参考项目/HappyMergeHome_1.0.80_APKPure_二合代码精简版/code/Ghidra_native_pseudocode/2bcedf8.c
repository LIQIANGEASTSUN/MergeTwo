
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bdedf8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
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
  
  pcVar6 = (char *)(_UNK_02bdef88 + 0x2bdee10);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdef8c + 0x2bdee24));
    func_0x01438628(*(undefined4 *)(_UNK_02bdef90 + 0x2bdee30));
    func_0x01438628(*(undefined4 *)(_UNK_02bdef94 + 0x2bdee3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdef98 + 0x2bdee48));
    func_0x01438628(*(undefined4 *)(_UNK_02bdef9c + 0x2bdee54));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6a9,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar7 = *(int **)(_UNK_02bdefa0 + 0x2bdeecc);
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xc);
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
        iVar1 = *piVar7;
      }
      uVar5 = **(undefined4 **)(iVar1 + 0x5c);
      iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_02bdefa4 + 0x2bdef18));
      func_0x03a062d0(iVar4,uVar5,**(undefined4 **)(_UNK_02bdefa8 + 0x2bdef38),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
      *piVar7 = iVar4;
      func_0x014385cc(piVar7,iVar4);
    }
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f0f0c(iVar3,iVar4,**(undefined4 **)(_UNK_02bdefac + 0x2bdef70));
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0x6a9,0);
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar3,uVar5,&uStack_38,uVar2,0,0);
  uVar5 = func_0x024f56f0(&uStack_38,0,0);
  return uVar5;
}

