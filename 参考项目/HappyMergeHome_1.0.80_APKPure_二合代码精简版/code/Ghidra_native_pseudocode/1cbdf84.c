
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ccdf84(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined8 uVar10;
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
  
  pcVar6 = (char *)(_UNK_01cce0ac + 0x1ccdf98);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01cce0b0 + 0x1ccdfac));
    func_0x01438628(*(undefined4 *)(_UNK_01cce0b4 + 0x1ccdfb8));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1a95,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01ccc5a4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    cVar1 = *(char *)(iVar2 + 0xc);
    if (*(int *)(**(int **)(_UNK_01cce0b8 + 0x1cce028) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01cce0bc + 0x1cce048));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uVar10 = func_0x026ffbe0(iVar2,0);
    iVar7 = (int)((ulonglong)uVar10 >> 0x20);
    iVar2 = FUN_01ccc5a4(param_1);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (cVar1 == '\0') {
      puVar3 = (uint *)(iVar2 + 0x18);
    }
    else {
      puVar3 = (uint *)(iVar2 + 0x28);
    }
    uVar4 = puVar3[1];
    bVar9 = *puVar3 < (uint)uVar10;
    return (uint)((int)(uVar4 - (iVar7 + (uint)bVar9)) < 0 !=
                 (SBORROW4(uVar4,iVar7) != SBORROW4(uVar4 - iVar7,(uint)bVar9)));
  }
  iVar2 = func_0x029540a4(0x1a95,0);
  if (iVar2 == 0) {
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
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar5 = 2;
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  func_0x024f56d0(iVar7,uVar8,&uStack_30,uVar5,0,0);
  uVar4 = func_0x024f56e0(&uStack_30,0,0);
  return uVar4;
}

