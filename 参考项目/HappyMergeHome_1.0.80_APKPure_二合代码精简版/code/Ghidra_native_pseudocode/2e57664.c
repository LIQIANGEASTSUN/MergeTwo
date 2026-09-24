
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e67664(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
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
  
  iVar1 = func_0x02953fd4(0x6715,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6715,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_02907e8c + 0x2907d98);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02907e90 + 0x2907dac),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a2c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02907e94 + 0x2907e7c));
    return;
  }
  pcVar5 = (char *)(_UNK_02e67790 + 0x2e676e4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02e67794 + 0x2e676f8));
    func_0x01438628(*(undefined4 *)(_UNK_02e67798 + 0x2e67704));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6716,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x6716,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029092f8 + 0x2909204);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029092fc + 0x2909218),param_1,param_2,0);
      *pcVar5 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a2c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar4,&uStack_38,uVar2,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02909300 + 0x29092e8));
    return;
  }
  uVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02e6779c + 0x2e67768),&stack0xffffffec);
  func_0x01529a5c(**(undefined4 **)(_UNK_02e677a0 + 0x2e67784),uVar4,0);
  return;
}

