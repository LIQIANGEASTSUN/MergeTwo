
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016c1210(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_016c1570 + 0x16c1224);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016c1574 + 0x16c1238));
    func_0x01438628(*(undefined4 *)(_UNK_016c1578 + 0x16c1244));
    func_0x01438628(*(undefined4 *)(_UNK_016c157c + 0x16c1250));
    func_0x01438628(*(undefined4 *)(_UNK_016c1580 + 0x16c125c));
    func_0x01438628(*(undefined4 *)(_UNK_016c1584 + 0x16c1268));
    func_0x01438628(*(undefined4 *)(_UNK_016c1588 + 0x16c1274));
    func_0x01438628(*(undefined4 *)(_UNK_016c158c + 0x16c1280));
    func_0x01438628(*(undefined4 *)(_UNK_016c1590 + 0x16c128c));
    func_0x01438628(*(undefined4 *)(_UNK_016c1594 + 0x16c1298));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1859,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1859,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar6,&uStack_30,uVar4,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  piVar10 = *(int **)(_UNK_016c1598 + 0x16c12f0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x016af738();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x016b0a24(iVar1);
  uVar4 = 0;
  if (iVar1 != 0) {
    piVar11 = *(int **)(_UNK_016c159c + 0x16c1334);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar12 = *(undefined4 **)(_UNK_016c15a0 + 0x16c1350);
    iVar1 = func_0x014e96a8(*puVar12);
    iVar8 = *piVar10;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar10;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar6,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_016c15a4 + 0x16c13b0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016c15a8 + 0x16c13cc));
      piVar5 = *(int **)(_UNK_016c15ac + 0x16c13e0);
      iVar8 = *piVar5;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_016c15b0 + 0x16c1400);
      iVar2 = *(int *)(iVar7 + 0x1c);
      uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x8a4);
      if (iVar2 == 0) {
        func_0x014909d8(iVar7);
        iVar2 = *(int *)(iVar7 + 0x1c);
      }
      iVar8 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar4 = 0;
      uVar6 = func_0x02b0c90c(iVar1,uVar6,uVar9,0);
      if (*(int *)(**(int **)(_UNK_016c15b4 + 0x16c1498) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x024eec50(uVar6,0,0);
      if (iVar1 == 0) {
        if (*(int *)(*piVar11 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x014e96a8(*puVar12);
        iVar8 = *piVar10;
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
          iVar8 = *piVar10;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
        if (*(int *)(**(int **)(_UNK_016c15b8 + 0x16c1504) + 0x74) == 0) {
          func_0x014387a4(**(int **)(_UNK_016c15b8 + 0x16c1504));
        }
        uStack_38 = func_0x02aed6d8(0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        func_0x02b768cc(iVar1,0,uVar4);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

