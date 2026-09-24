
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c591e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
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
  
  pcVar5 = (char *)(_UNK_02c59270 + 0x2c591f8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c59274 + 0x2c5920c));
    func_0x01438628(*(undefined4 *)(_UNK_02c59278 + 0x2c59218));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02c5927c + 0x2c5922c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x01c5144c(0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  iVar3 = **(int **)(_UNK_02c59280 + 0x2c59264);
  pcVar5 = (char *)(_UNK_01c53780 + 0x1c536a8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c53784 + 0x1c536bc),iVar3,0);
    func_0x01438628(*(undefined4 *)(_UNK_01c53788 + 0x1c536c8));
    func_0x01438628(*(undefined4 *)(_UNK_01c5378c + 0x1c536d4));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1a42,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1a42,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_0286bb58 + 0x286ba64);
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0286bb5c + 0x286ba78),iVar2,iVar3,0);
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
    func_0x01523a6c(&uStack_38,iVar2,0);
    func_0x01523a6c(&uStack_38,iVar3,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar4,0,0);
    func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0286bb60 + 0x286bb48));
    return;
  }
  uVar6 = func_0x01c5379c(iVar2);
  uVar6 = func_0x024eee28(**(undefined4 **)(_UNK_01c53790 + 0x1c53740),uVar6,
                          **(undefined4 **)(_UNK_01c53794 + 0x1c5374c),0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  (*(code *)&SUB_04f6cfdc)(iVar3,**(undefined4 **)(_UNK_01c53798 + 0x1c53774),uVar6,0);
  return;
}

