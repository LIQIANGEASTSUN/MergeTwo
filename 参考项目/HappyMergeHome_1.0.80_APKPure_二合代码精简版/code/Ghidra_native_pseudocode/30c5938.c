
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030d5938(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_030d5b44 + 0x30d594c);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030d5b48 + 0x30d5960));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b4c + 0x30d596c));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b50 + 0x30d5978));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b54 + 0x30d5984));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b58 + 0x30d5990));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b5c + 0x30d599c));
    func_0x01438628(*(undefined4 *)(_UNK_030d5b60 + 0x30d59a8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x3b8d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x3b8d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02887764 + 0x2887694);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02887768 + 0x28876a8),0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar5 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar5 = 1;
      }
    }
    iVar7 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar7,uVar3,&uStack_30,uVar5,0,0);
    uVar5 = func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_0288776c + 0x2887754));
    return uVar5;
  }
  piVar6 = *(int **)(_UNK_030d5b64 + 0x30d5a00);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  piVar8 = *(int **)(_UNK_030d5b68 + 0x30d5a20);
  iVar7 = *piVar8;
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x014387a4(iVar7);
  }
  iVar1 = func_0x024eec50(uVar5,0,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_030d5b6c + 0x30d5a60) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_030d5b70 + 0x30d5a7c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_14 = **(undefined4 **)(_UNK_030d5b78 + 0x30d5ab0);
    uStack_18 = 0;
    uVar5 = func_0x036ac4cc(iVar1,**(undefined4 **)(_UNK_030d5b74 + 0x30d5aa4),0,1);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar5 = func_0x03680054(uVar5,**(undefined4 **)(_UNK_030d5b7c + 0x30d5ae8));
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
    *puVar2 = uVar5;
    func_0x014385cc(puVar2,uVar5);
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x014387a4();
    iVar1 = *piVar6;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 8);
}

