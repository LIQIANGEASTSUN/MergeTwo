
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0164f998(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar3 = (char *)(_UNK_0164fac4 + 0x164f9b0);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164fac8 + 0x164f9c4));
    func_0x01438628(*(undefined4 *)(_UNK_0164facc + 0x164f9d0));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iVar1 = func_0x02953fd4(0x85c7,0);
  if (iVar1 == 0) {
    if (param_2 != 0) {
      iVar1 = FUN_0163bb3c(param_1);
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_01642704(param_1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar1 + 0x80);
        if (*(int *)(**(int **)(_UNK_0164fad0 + 0x164fa68) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164fad4 + 0x164fa8c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x026ffbe0(iVar1,0);
        iVar4 = iVar4 - iVar1;
      }
    }
    return iVar4;
  }
  iVar1 = func_0x029540a4(0x85c7,0);
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
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_38,uVar2,0,0);
  iVar1 = func_0x024f5770(&uStack_38,0,0);
  return iVar1;
}

