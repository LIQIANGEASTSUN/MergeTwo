
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bdf068(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02bdf274 + 0x2bdf088);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdf278 + 0x2bdf09c));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf27c + 0x2bdf0a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf280 + 0x2bdf0b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf284 + 0x2bdf0c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf288 + 0x2bdf0cc));
    *pcVar8 = '\x01';
  }
  iVar3 = func_0x02953fd4(0xd40,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0xd40,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_28 = 0;
    func_0x028924d8(iVar3,param_1,param_2,param_3);
    return;
  }
  iVar3 = FUN_02bad050(param_1,param_3);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x03b77610(iVar3,param_2,**(undefined4 **)(_UNK_02bdf28c + 0x2bdf164));
  piVar4 = *(int **)(_UNK_02bdf290 + 0x2bdf17c);
  *(undefined1 *)(param_1 + 0x20) = 1;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bdf294 + 0x2bdf19c));
  piVar4 = *(int **)(_UNK_02bdf298 + 0x2bdf1b0);
  iVar5 = *piVar4;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar4;
  }
  iVar9 = **(int **)(_UNK_02bdf29c + 0x2bdf1d0);
  iVar6 = *(int *)(iVar9 + 0x1c);
  uVar11 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0xc);
  if (iVar6 == 0) {
    func_0x014909d8(iVar9);
    iVar6 = *(int *)(iVar9 + 0x1c);
  }
  iVar5 = *(int *)(iVar6 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = *(int *)(*(int *)(iVar9 + 0x1c) + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = func_0x0149097c();
  }
  uVar10 = **(undefined4 **)(iVar5 + 0x5c);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  func_0x02990414(iVar3,uVar11,uVar10,0);
  if (param_2 == 0) {
    func_0x014388e4();
  }
  iVar3 = *(int *)(param_2 + 8);
  pcVar8 = (char *)(_UNK_02bdf408 + 0x2bdf2b8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdf40c + 0x2bdf2cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf410 + 0x2bdf2d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf414 + 0x2bdf2e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdf418 + 0x2bdf2f0));
    *pcVar8 = '\x01';
  }
  iVar5 = func_0x02953fd4(0xd41,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0xd41,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,iVar3,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar5 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar5 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,iVar3,0);
    iVar6 = *(int *)(iVar5 + 8);
    uVar11 = *(undefined4 *)(iVar5 + 0xc);
    iVar3 = *(int *)(iVar5 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar10 = 3;
    if (iVar3 == 0) {
      uVar10 = 2;
    }
    func_0x024f56d0(iVar6,uVar11,&uStack_38,uVar10,0,0);
    return;
  }
  if (-1 < iVar3) {
    if (*(int *)(**(int **)(_UNK_02bdf41c + 0x2bdf354) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = func_0x014e9518(**(undefined4 **)(_UNK_02bdf420 + 0x2bdf370));
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029a6fa8(iVar5,iVar3,0);
    if (iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_02bdf424 + 0x2bdf3a8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x0202346c(0);
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02bdf428 + 0x2bdf3d0));
      func_0x02025440(iVar5,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      pcVar8 = (char *)(_UNK_02025110 + 0x2024d28);
      if (*pcVar8 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_02025114 + 0x2024d3c),iVar5,1,0);
        func_0x01438628(*(undefined4 *)(_UNK_02025118 + 0x2024d48));
        func_0x01438628(*(undefined4 *)(_UNK_0202511c + 0x2024d54));
        func_0x01438628(*(undefined4 *)(_UNK_02025120 + 0x2024d60));
        func_0x01438628(*(undefined4 *)(_UNK_02025124 + 0x2024d6c));
        func_0x01438628(*(undefined4 *)(_UNK_02025128 + 0x2024d78));
        func_0x01438628(*(undefined4 *)(_UNK_0202512c + 0x2024d84));
        func_0x01438628(*(undefined4 *)(_UNK_02025130 + 0x2024d90));
        func_0x01438628(*(undefined4 *)(_UNK_02025134 + 0x2024d9c));
        func_0x01438628(*(undefined4 *)(_UNK_02025138 + 0x2024da8));
        func_0x01438628(*(undefined4 *)(_UNK_0202513c + 0x2024db4));
        *pcVar8 = '\x01';
      }
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_40 = 0;
      iStack_2c = 0;
      iStack_30 = 0;
      iVar6 = func_0x02953fd4(0x6a6,0);
      if (iVar6 == 0) {
        iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_02025140 + 0x2024e38));
        func_0x0282fa2c(iVar6,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar11 = *(undefined4 *)(iVar5 + 8);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar6 + 0xc) = uVar11;
        uVar11 = func_0x01524ffc(iVar5 + 0xc,0);
        func_0x02835c34(iVar6,uVar11,0);
        *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar5 + 0x10);
        uVar11 = func_0x01524ffc(iVar5 + 0x14,0);
        func_0x02835cd4(iVar6,uVar11,0);
        *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar5 + 0x18);
        uVar11 = func_0x01524ffc(iVar5 + 0x1c,0);
        func_0x02835d74(iVar6,uVar11,0);
        uVar11 = *(undefined4 *)(iVar5 + 0x28);
        uVar1 = *(undefined2 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined2 *)(iVar6 + 0x28) = uVar1;
        func_0x02835e74(iVar6,uVar11,0);
        if (*(int *)(**(int **)(_UNK_02025144 + 0x2024ef8) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar7 = *(undefined4 **)(_UNK_02025148 + 0x2024f14);
        iVar9 = func_0x014e9518(*puVar7);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar11 = FUN_02bd7e48(iVar9,0,0);
        uVar10 = *puVar7;
        *(undefined4 *)(iVar6 + 0x2c) = uVar11;
        iVar9 = func_0x014e9518(uVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar11 = FUN_02bde980(iVar9,0,0);
        uVar10 = *puVar7;
        *(undefined4 *)(iVar6 + 0x30) = uVar11;
        iVar9 = func_0x014e9518(uVar10);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar11 = FUN_02bdedf8(iVar9,0,0);
        iVar2 = *(int *)(iVar5 + 0x2c);
        *(undefined4 *)(iVar6 + 0x34) = uVar11;
        iVar9 = 1;
        if ((iVar2 != 0) &&
           (iVar2 = func_0x024ef040(iVar2,**(undefined4 **)(_UNK_0202514c + 0x2024fb8)), 0 < iVar2))
        {
          iVar5 = *(int *)(iVar5 + 0x2c);
          iStack_48 = 1;
          iStack_44 = iVar3;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024eee58(&uStack_40,iVar5,**(undefined4 **)(_UNK_02025150 + 0x2024fec));
          puVar7 = *(undefined4 **)(_UNK_02025154 + 0x2025004);
          puVar12 = *(undefined4 **)(_UNK_02025158 + 0x202500c);
          while (iVar5 = func_0x0151618c(&uStack_40,*puVar7), iVar3 = iStack_30, uVar11 = uStack_34,
                iVar5 != 0) {
            iVar5 = *(int *)(iVar6 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f3070(iVar5,uVar11,iVar3,*puVar12);
          }
          func_0x024eee68(&uStack_40,**(undefined4 **)(_UNK_0202515c + 0x2025058));
          iVar9 = iStack_48;
          iVar3 = iStack_44;
        }
        if (iVar9 != 0) {
          func_0x020240e8(iVar3,iVar6);
        }
      }
      else {
        iVar6 = func_0x029540a4(0x6a6,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_50 = 0;
        func_0x02869ba4(iVar6,iVar3,iVar5,1);
      }
      return;
    }
  }
  return;
}

