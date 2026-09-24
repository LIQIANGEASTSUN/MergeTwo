
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c74c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_02c74ebc + 0x2c74ca0);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c74ec0 + 0x2c74cb4));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ec4 + 0x2c74cc0));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ec8 + 0x2c74ccc));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ecc + 0x2c74cd8));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ed0 + 0x2c74ce4));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ed4 + 0x2c74cf0));
    func_0x01438628(*(undefined4 *)(_UNK_02c74ed8 + 0x2c74cfc));
    func_0x01438628(*(undefined4 *)(_UNK_02c74edc + 0x2c74d08));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x600e,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_02c74ee0 + 0x2c74d6c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02c74ee4 + 0x2c74d88));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x029a6fa8(iVar3,param_2,0);
    if (iVar3 != 0) {
      if (*(int *)(**(int **)(_UNK_02c74ee8 + 0x2c74dc4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x0202346c(0);
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02c74eec + 0x2c74dec));
      func_0x02025440(iVar5,0);
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      uVar7 = *(undefined4 *)(iVar3 + 8);
      uVar8 = *(undefined4 *)(iVar3 + 0x2c);
      uVar6 = **(undefined4 **)(_UNK_02c74ef0 + 0x2c74e1c);
      *(undefined1 *)(iVar5 + 0x25) = 1;
      *(undefined4 *)(iVar5 + 8) = 3;
      *(undefined4 *)(iVar5 + 0xc) = uVar7;
      *(undefined4 *)(iVar5 + 0x10) = uVar8;
      iVar3 = func_0x014388d4(uVar6);
      func_0x04752f54(iVar3,**(undefined4 **)(_UNK_02c74ef4 + 0x2c74e44));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x04753a34(iVar3,**(undefined4 **)(_UNK_02c74efc + 0x2c74e74),param_3,
                      **(undefined4 **)(_UNK_02c74ef8 + 0x2c74e68));
      *(int *)(iVar5 + 0x2c) = iVar3;
      func_0x014385cc((int *)(iVar5 + 0x2c),iVar3);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      pcVar10 = (char *)(_UNK_02025110 + 0x2024d28);
      if (*pcVar10 == '\0') {
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
        *pcVar10 = '\x01';
      }
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_40 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      iVar3 = func_0x02953fd4(0x6a6,0);
      if (iVar3 == 0) {
        iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02025140 + 0x2024e38));
        func_0x0282fa2c(iVar3,0);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uVar6 = *(undefined4 *)(iVar5 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        *(undefined4 *)(iVar3 + 0xc) = uVar6;
        uVar6 = func_0x01524ffc(iVar5 + 0xc,0);
        func_0x02835c34(iVar3,uVar6,0);
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar5 + 0x10);
        uVar6 = func_0x01524ffc(iVar5 + 0x14,0);
        func_0x02835cd4(iVar3,uVar6,0);
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar5 + 0x18);
        uVar6 = func_0x01524ffc(iVar5 + 0x1c,0);
        func_0x02835d74(iVar3,uVar6,0);
        uVar6 = *(undefined4 *)(iVar5 + 0x28);
        uVar1 = *(undefined2 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(iVar5 + 0x20);
        *(undefined2 *)(iVar3 + 0x28) = uVar1;
        func_0x02835e74(iVar3,uVar6,0);
        if (*(int *)(**(int **)(_UNK_02025144 + 0x2024ef8) + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar9 = *(undefined4 **)(_UNK_02025148 + 0x2024f14);
        iVar2 = func_0x014e9518(*puVar9);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = FUN_02bd7e48(iVar2,0,0);
        uVar7 = *puVar9;
        *(undefined4 *)(iVar3 + 0x2c) = uVar6;
        iVar2 = func_0x014e9518(uVar7);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = FUN_02bde980(iVar2,0,0);
        uVar7 = *puVar9;
        *(undefined4 *)(iVar3 + 0x30) = uVar6;
        iVar2 = func_0x014e9518(uVar7);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar6 = FUN_02bdedf8(iVar2,0,0);
        iVar2 = *(int *)(iVar5 + 0x2c);
        *(undefined4 *)(iVar3 + 0x34) = uVar6;
        if ((iVar2 != 0) &&
           (iVar2 = func_0x024ef040(iVar2,**(undefined4 **)(_UNK_0202514c + 0x2024fb8)), 0 < iVar2))
        {
          iVar5 = *(int *)(iVar5 + 0x2c);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          func_0x024eee58(&uStack_40,iVar5,**(undefined4 **)(_UNK_02025150 + 0x2024fec));
          puVar9 = *(undefined4 **)(_UNK_02025154 + 0x2025004);
          puVar11 = *(undefined4 **)(_UNK_02025158 + 0x202500c);
          while (iVar5 = func_0x0151618c(&uStack_40,*puVar9), uVar7 = uStack_30, uVar6 = uStack_34,
                iVar5 != 0) {
            iVar5 = *(int *)(iVar3 + 0x48);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x024f3070(iVar5,uVar6,uVar7,*puVar11);
          }
          func_0x024eee68(&uStack_40,**(undefined4 **)(_UNK_0202515c + 0x2025058));
        }
        func_0x020240e8(iVar4,iVar3);
      }
      else {
        iVar3 = func_0x029540a4(0x6a6,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02869ba4(iVar3,iVar4,iVar5,1,0);
      }
      return;
    }
  }
  else {
    iVar3 = func_0x029540a4(0x600e,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x0286b0b0(iVar3,param_1,param_2,param_3);
  }
  return;
}

