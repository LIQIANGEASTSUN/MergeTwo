
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_02bd5138(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar7 = (char *)(_UNK_02bd55ac + 0x2bd5158);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd55b0 + 0x2bd516c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55b4 + 0x2bd5178));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55b8 + 0x2bd5184));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55bc + 0x2bd5190));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55c0 + 0x2bd519c));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55c4 + 0x2bd51a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55c8 + 0x2bd51b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55cc + 0x2bd51c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55d0 + 0x2bd51cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55d4 + 0x2bd51d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55d8 + 0x2bd51e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd55dc + 0x2bd51f0));
    *pcVar7 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar13 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5ce1,0);
  if (iVar1 == 0) {
    uVar2 = FUN_02bad204(param_1,param_2,param_3);
    if (uVar2 != 0) {
      if (*(int *)(**(int **)(_UNK_02bd55e0 + 0x2bd5294) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bd55e4 + 0x2bd52b0));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029ca78c(iVar1,0);
      iVar8 = *(int *)(uVar2 + 0x68);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      func_0x046c2934(&uStack_58,iVar8,**(undefined4 **)(_UNK_02bd55e8 + 0x2bd52f8));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      puVar12 = *(undefined4 **)(_UNK_02bd55ec + 0x2bd5324);
LAB_02bd5324:
      do {
        iVar8 = func_0x048a44e0(&uStack_40,*puVar12);
        uVar13 = uStack_34;
        if (iVar8 == 0) {
          uVar13 = 0;
          goto LAB_02bd54ac;
        }
        iVar8 = (int)uStack_30;
        if (*(int *)(**(int **)(_UNK_02bd55f0 + 0x2bd5344) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bd55f4 + 0x2bd536c));
        uVar11 = *(undefined4 *)(uVar2 + 8);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x029a6fa8(iVar3,uVar11,0);
      } while (iVar3 == 0);
      uVar4 = func_0x0364575c(*(undefined4 *)(iVar3 + 0x84),uVar13,
                              **(undefined4 **)(_UNK_02bd55f8 + 0x2bd53ac));
      iVar9 = *(int *)(iVar3 + 0x60);
      uVar5 = uVar4;
      if (iVar9 != 0) {
        uVar5 = *(uint *)(iVar9 + 0xc);
      }
      uVar6 = uVar5;
      if (iVar9 != 0 && uVar5 != 0) {
        iVar10 = *(int *)(iVar3 + 0x84);
        if (iVar10 == 0) {
          func_0x014388e4();
          uVar5 = *(uint *)(iVar9 + 0xc);
        }
        uVar6 = uVar2;
        if (uVar5 == *(uint *)(iVar10 + 0xc)) {
          iVar9 = *(int *)(iVar3 + 0x60);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar4) {
            func_0x014388e8();
          }
          uVar6 = *(uint *)(iVar9 + uVar4 * 4 + 0x10);
          if (iVar1 < (int)uVar6) goto LAB_02bd5324;
        }
      }
      if ((int)uVar4 < 0) goto LAB_02bd5324;
      iVar3 = *(int *)(iVar3 + 0xac);
      if (iVar3 != 0) {
        uVar6 = *(uint *)(iVar3 + 0xc);
      }
      if ((iVar3 == 0 || uVar6 == 0) || ((int)uVar6 <= (int)uVar4)) goto LAB_02bd5324;
      if (uVar6 <= uVar4) {
        func_0x014388e8();
      }
      iVar3 = *(int *)(iVar3 + uVar4 * 4 + 0x10);
      if ((iVar3 < 1) || (iVar8 < iVar3)) goto LAB_02bd5324;
      iVar1 = *(int *)(uVar2 + 0x68);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b70fe4(iVar1,uVar13,0,**(undefined4 **)(_UNK_02bd55fc + 0x2bd54e8));
LAB_02bd54ac:
      func_0x048a4620(&uStack_40,**(undefined4 **)(_UNK_02bd5604 + 0x2bd54b8));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5ce1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar13 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar13;
}

