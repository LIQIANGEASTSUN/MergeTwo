// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.AddItem 0x10D8708; public Item AddItem(ItemData itemData, bool isLocked, Cell targetCell, bool runtime, Transform container, Nullable<Vector2> sourcePos, bool newObject = true, int id = -1, bool isFtue = false, bool isItBubble = false, int episode = -1, bool createdByMerge = false) {
// Image base: 0x10000; Ghidra address: 010e8708; native size hint: 0x778


/* WARNING: Removing unreachable block (ram,0x010e9ed8) */
/* WARNING: Removing unreachable block (ram,0x010e9ee0) */
/* WARNING: Removing unreachable block (ram,0x010e9ee8) */
/* WARNING: Removing unreachable block (ram,0x010e9ef0) */
/* WARNING: Removing unreachable block (ram,0x010e9ef8) */
/* WARNING: Removing unreachable block (ram,0x010e9f00) */
/* WARNING: Removing unreachable block (ram,0x010e9f08) */
/* WARNING: Removing unreachable block (ram,0x010e9f10) */
/* WARNING: Removing unreachable block (ram,0x010e9f18) */
/* WARNING: Removing unreachable block (ram,0x010e9f28) */
/* WARNING: Removing unreachable block (ram,0x010e9f38) */
/* WARNING: Removing unreachable block (ram,0x010e9f34) */
/* WARNING: Removing unreachable block (ram,0x010e9f20) */
/* WARNING: Removing unreachable block (ram,0x010e9ecc) */
/* WARNING: Removing unreachable block (ram,0x010e9f3c) */
/* WARNING: Removing unreachable block (ram,0x010e9f30) */
/* WARNING: Removing unreachable block (ram,0x010e9f24) */
/* WARNING: Removing unreachable block (ram,0x010e9f1c) */
/* WARNING: Removing unreachable block (ram,0x010e9f14) */
/* WARNING: Removing unreachable block (ram,0x010e9f0c) */
/* WARNING: Removing unreachable block (ram,0x010e9f04) */
/* WARNING: Removing unreachable block (ram,0x010e9efc) */
/* WARNING: Removing unreachable block (ram,0x010e9ef4) */
/* WARNING: Removing unreachable block (ram,0x010e9eec) */
/* WARNING: Removing unreachable block (ram,0x010e9ee4) */
/* WARNING: Removing unreachable block (ram,0x010e9edc) */
/* WARNING: Removing unreachable block (ram,0x010e9ed4) */
/* WARNING: Removing unreachable block (ram,0x010e9ed0) */
/* WARNING: Removing unreachable block (ram,0x010e9f2c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int GameState_AddItem_010D8708
              (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
              undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
              undefined4 param_11,int param_12,int param_13,int param_14)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  undefined1 uVar20;
  bool bVar21;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_30;
  int iStack_28;
  
  pcVar14 = (char *)(_UNK_010e95ec + 0x10e8728);
  if (*pcVar14 == '\0') {
    func_0x00f6b160(*(undefined4 *)(_UNK_010e95f0 + 0x10e8740));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e95f4 + 0x10e874c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e95f8 + 0x10e8758));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e95fc + 0x10e8764));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9600 + 0x10e8770));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9604 + 0x10e877c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9608 + 0x10e8788));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e960c + 0x10e8794));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9610 + 0x10e87a0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9614 + 0x10e87ac));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9618 + 0x10e87b8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e961c + 0x10e87c4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97c8 + 0x10e87d0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97cc + 0x10e87dc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97d0 + 0x10e87e8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97d4 + 0x10e87f4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97d8 + 0x10e8800));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97dc + 0x10e880c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97e0 + 0x10e8818));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97e4 + 0x10e8824));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97e8 + 0x10e8830));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97ec + 0x10e883c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97f0 + 0x10e8848));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97f4 + 0x10e8854));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97f8 + 0x10e8860));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e97fc + 0x10e886c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9800 + 0x10e8878));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9804 + 0x10e8884));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9808 + 0x10e8890));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e980c + 0x10e889c));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9810 + 0x10e88a8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9814 + 0x10e88b4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e9818 + 0x10e88c0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e981c + 0x10e88cc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e98cc + 0x10e88d8));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e98d0 + 0x10e88e4));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e98d4 + 0x10e88f0));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e98d8 + 0x10e88fc));
    func_0x00f6b160(*(undefined4 *)(_UNK_010e98dc + 0x10e8908));
    *pcVar14 = '\x01';
  }
  iVar2 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e98e0 + 0x10e8920));
  func_0x01100a78(iVar2,0);
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  *(int *)(iVar2 + 0xc) = param_1;
  *(undefined4 *)(iVar2 + 0x10) = param_6;
  if (param_2 == 0) {
    uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e99b4 + 0x10e8a00));
    puVar6 = *(undefined4 **)(_UNK_010e99b8 + 0x10e8a14);
LAB_010e8a48:
    func_0x0309903c(uVar5,*puVar6,0);
    if (*(int *)(**(int **)(_UNK_010e9a58 + 0x10e8a68) + 0x74) == 0) {
      func_0x00f6b294();
    }
    func_0x0200818c(uVar5,0);
    return 0;
  }
  if (param_10 != 0) {
    if (*(int *)(**(int **)(_UNK_010e98e4 + 0x10e8964) + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar3 = func_0x02007e9c(param_4,0,0);
    if (iVar3 != 0) {
      return 0;
    }
  }
  iVar3 = func_0x011255f0(param_2,0);
  if (*(char *)(param_2 + 0x1c) == '\0') {
    iVar4 = *(int *)(param_1 + 0x34);
    bVar21 = iVar3 == 0;
    if (bVar21) {
      func_0x00f6b3d0();
    }
  }
  else {
    iVar4 = func_0x011250d0(param_2,0);
    if (iVar4 == 0) {
      uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e99bc + 0x10e8a38));
      puVar6 = *(undefined4 **)(_UNK_010e99c0 + 0x10e8a4c);
      goto LAB_010e8a48;
    }
    uVar5 = func_0x011250d0(param_2,0);
    if (iVar3 == 0) {
      func_0x00f6b3d0();
    }
    *(undefined4 *)(iVar3 + 0x20) = uVar5;
    bVar21 = false;
    iVar4 = *(int *)(param_1 + 0x34);
  }
  iVar7 = func_0x0111990c(iVar3,0);
  if (iVar7 == 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  uVar17 = *(undefined4 *)(iVar7 + 0x4c);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  piVar8 = (int *)func_0x01106374(iVar4,uVar17,uVar5,0);
  *(int **)(iVar2 + 8) = piVar8;
  if (piVar8 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*piVar8 + 0x108))(piVar8,param_4,1,*(undefined4 *)(*piVar8 + 0x10c));
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e9afc + 0x10e8b18));
  func_0x0294be70(uVar5,param_1,**(undefined4 **)(_UNK_010e9b00 + 0x10e8b34),0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0111c63c(iVar4,uVar5,0);
  iVar4 = *(int *)(iVar2 + 8);
  uVar5 = func_0x00f6b3c4(**(undefined4 **)(_UNK_010e9b34 + 0x10e8b68));
  func_0x02944968(uVar5,param_1,**(undefined4 **)(_UNK_010e9b38 + 0x10e8b84),0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0111c634(iVar4,uVar5,0);
  if (*(int *)(**(int **)(_UNK_010e9b3c + 0x10e8bb8) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar7 = func_0x020081fc(param_4,0);
  iVar4 = 0;
  if (iVar7 != 0) {
    uVar5 = *(undefined4 *)(iVar2 + 8);
    if (param_4 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010dcc80(param_4,uVar5);
    uVar5 = *(undefined4 *)(iVar2 + 8);
    iVar7 = *(int *)(param_1 + 0x54);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = *(int *)(iVar7 + 8);
    uVar18 = *(uint *)(iVar7 + 0xc);
    piVar8 = *(int **)(_UNK_010e9bfc + 0x10e8c34);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    iVar13 = *piVar8;
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    if (uVar18 < *(uint *)(iVar4 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar18 + 1;
      iVar4 = iVar4 + uVar18 * 4;
      *(undefined4 *)(iVar4 + 0x10) = uVar5;
    }
    else {
      iVar4 = func_0x02c02bbc(iVar7,uVar5,
                              *(undefined4 *)(*(int *)(*(int *)(iVar13 + 0x10) + 0x60) + 0x38));
    }
  }
  iVar4 = func_0x010f1738(iVar4,iVar3);
  if (*(int *)(**(int **)(_UNK_010e9c70 + 0x10e8c9c) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar13 = 0;
  iVar7 = func_0x02008254(0);
  if (iVar7 == 0) {
    if (iVar4 == 0) {
      func_0x00f6b3d0();
      iVar13 = 1;
    }
  }
  else {
    iVar7 = *(int *)(iVar2 + 8);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x78);
    if (bVar21) {
      func_0x00f6b3d0();
    }
    iVar13 = 0;
    puVar6 = *(undefined4 **)(_UNK_010e9c78 + 0x10e8d08);
    if (*(int *)(iVar3 + 0x4c) == 5) {
      puVar6 = *(undefined4 **)(_UNK_010e9c74 + 0x10e8d00);
    }
    uVar5 = func_0x02e99740(uVar5,*puVar6,0);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    func_0x020081f4(iVar7,uVar5,0);
  }
  uVar5 = *(undefined4 *)(iVar4 + 0xc);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  if (iVar13 != 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x78);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar3 + 0x78) = uVar5;
  if (iVar13 != 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x5c);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar3 + 0x5c) = uVar5;
  if (iVar13 != 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x7c);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar3 + 0x7c) = uVar5;
  if (iVar13 != 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x84);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  *(undefined4 *)(iVar3 + 0x84) = uVar5;
  if (param_14 == -1) {
    param_14 = func_0x010eb448();
  }
  *(int *)(iVar3 + 0x94) = param_14;
  if (iVar13 != 0) {
    func_0x00f6b3d0();
  }
  uVar5 = *(undefined4 *)(iVar4 + 0x9c);
  if (*(int *)(**(int **)(_UNK_010e9d38 + 0x10e8e10) + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar7 = func_0x02007e9c(uVar5,0,0);
  if (iVar7 == 0) {
    if (iVar13 != 0) {
      func_0x00f6b3d0();
      *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar4 + 0x9c);
      goto LAB_010e8e68;
    }
    *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar4 + 0x9c);
  }
  else {
    if (bVar21) {
      func_0x00f6b3d0();
    }
    if (iVar13 != 0) {
LAB_010e8e68:
      func_0x00f6b3d0();
    }
  }
  uStack_30 = *(undefined8 *)(iVar4 + 0xb0);
  iStack_28 = *(int *)(iVar4 + 0xb8);
  if (bVar21) {
    func_0x00f6b3d0();
  }
  uVar1 = 1;
  *(int *)(iVar3 + 0xb8) = iStack_28;
  *(undefined8 *)(iVar3 + 0xb0) = uStack_30;
  iVar7 = *(int *)(iVar2 + 8);
  if ((param_12 == 0) && (iVar9 = func_0x015343e8(0), iVar9 != 0)) {
    uVar1 = func_0x01549e08(0);
  }
  if (iVar7 == 0) {
    func_0x00f6b3d0();
  }
  iVar9 = *(int *)(iVar2 + 8);
  *(undefined1 *)(iVar7 + 0x32) = uVar1;
  if (param_10 == 0) {
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    func_0x01119ac8(iVar9,param_11,0);
    if (bVar21) {
      func_0x00f6b3d0();
    }
    *(int *)(iVar3 + 0x20) = iVar3;
  }
  else {
    uVar5 = func_0x010f181c(param_1);
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    func_0x01119ac8(iVar9,uVar5,0);
    if (bVar21) {
      func_0x00f6b3d0();
    }
    if ((*(int *)(iVar3 + 0x4c) != 5) && (param_3 == 0)) {
      iVar7 = *(int *)(param_1 + 0x58);
      if (iVar13 != 0) {
        func_0x00f6b3d0();
      }
      iVar9 = *(int *)(iVar4 + 8);
      if (iVar9 == 0) {
        func_0x00f6b3d0();
      }
      uVar5 = *(undefined4 *)(iVar9 + 0x18);
      if (iVar13 == 0) {
        uStack_4c = *(undefined4 *)(iVar4 + 0xb0);
        uStack_50 = *(undefined4 *)(iVar4 + 0xb4);
        func_0x01119de8(iVar4,0);
      }
      else {
        func_0x00f6b3d0();
        uStack_4c = *(undefined4 *)(iVar4 + 0xb0);
        uStack_50 = *(undefined4 *)(iVar4 + 0xb4);
        func_0x00f6b3d0();
        func_0x01119de8(iVar4,0);
        func_0x00f6b3d0();
        func_0x00f6b3d0();
      }
      if (iVar7 == 0) {
        func_0x00f6b3d0();
      }
      func_0x011076dc(iVar7,uVar5,uStack_4c,uStack_50);
    }
    iVar7 = *(int *)(iVar2 + 8);
    iVar9 = *(int *)(param_1 + 0x3c);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    uVar5 = *(undefined4 *)(iVar7 + 0x34);
    if (bVar21) {
      func_0x00f6b3d0();
      iVar7 = *(int *)(iVar3 + 0x4c);
      func_0x00f6b3d0();
    }
    else {
      iVar7 = *(int *)(iVar3 + 0x4c);
    }
    iVar16 = iVar3;
    if (iVar7 == 5) {
      iVar7 = *(int *)(iVar3 + 0x28);
      if (iVar7 == 0) {
        func_0x00f6b3d0();
      }
      iVar16 = *(int *)(iVar7 + 0x18);
      if (iVar16 == 0) {
        func_0x00f6b3d0();
      }
    }
    uVar17 = func_0x01119de8(iVar16,0);
    if (bVar21) {
      func_0x00f6b3d0();
    }
    if (iVar13 != 0) {
      func_0x00f6b3d0();
    }
    if (bVar21) {
      func_0x00f6b3d0();
      if (*(int *)(iVar3 + 0x4c) != 5) goto LAB_010e9178;
      func_0x00f6b3d0();
LAB_010e9148:
      iVar4 = *(int *)(iVar3 + 0x28);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      iVar4 = *(int *)(iVar4 + 0x18);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      iVar4 = *(int *)(iVar4 + 8);
    }
    else {
      if (*(int *)(iVar3 + 0x4c) == 5) goto LAB_010e9148;
LAB_010e9178:
      if (iVar13 != 0) {
        func_0x00f6b3d0();
      }
      iVar4 = *(int *)(iVar4 + 8);
    }
    uVar20 = 1;
    uVar1 = 1;
    if (iVar4 == 0) goto LAB_010e9ec4;
    if (param_4 == 0) {
      func_0x00f6b3d0();
    }
    if (param_12 == 0) {
      iVar4 = **(int **)(**(int **)(iRam010e9ec8 + 0x10e91cc) + 0x5c);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      func_0x01534d9c(iVar4,0);
    }
    if (bVar21) {
      func_0x00f6b3d0();
    }
    if (iVar9 == 0) {
      func_0x00f6b3d0();
    }
    func_0x01149020(iVar9,uVar5,uVar17,param_3);
  }
  piVar8 = *(int **)(iVar2 + 8);
  if (piVar8 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*piVar8 + 0x110))(piVar8,iVar3,*(undefined4 *)(*piVar8 + 0x114));
  piVar8 = *(int **)(iVar2 + 8);
  if (piVar8 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*piVar8 + 0x120))(piVar8,param_3,*(undefined4 *)(*piVar8 + 0x124));
  iVar4 = *(int *)(iVar2 + 8);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0111cc08(iVar4,0);
  if (param_13 != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    piVar8 = *(int **)(iVar2 + 8);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    uVar17 = *(undefined4 *)(iVar4 + 0x10);
    uVar5 = func_0x00f6b3c4(**(undefined4 **)(iRam010e9ecc + 0x10e92ec));
    func_0x02fbd344(uVar5,iVar2,**(undefined4 **)(iRam010e9ed0 + 0x10e930c),0);
    if (piVar8 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    (**(code **)(*piVar8 + 0x118))(piVar8,1,uVar17,uVar5);
    if (param_5 == 0) {
      iVar4 = *(int *)(iVar2 + 8);
      if (iVar4 == 0) {
        func_0x00f6b3d0();
      }
      func_0x0111c3dc(iVar4,0);
    }
  }
  iVar4 = func_0x00f6b3c4(**(undefined4 **)(iRam010e9ed4 + 0x10e937c));
  func_0x01101cf0(iVar4,0);
  if (iVar4 == 0) {
    func_0x00f6b3d0();
  }
  *(int *)(iVar4 + 0x10) = iVar2;
  if (bVar21) {
    func_0x00f6b3d0();
  }
  switch(*(undefined4 *)(iVar3 + 0x4c)) {
  case 1:
  case 8:
    iVar7 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    piVar8 = *(int **)(iVar7 + 8);
    if (piVar8 == (int *)0x0) {
      piVar19 = (int *)0x0;
      *(undefined4 *)(iVar4 + 8) = 0;
    }
    else {
      piVar12 = *(int **)(&UNK_010e9578 + iRam010e9ed8);
      iVar7 = *piVar12;
      uVar18 = (uint)*(byte *)(iVar7 + 0xb8);
      if ((*(byte *)(*piVar8 + 0xb8) < uVar18) ||
         (piVar19 = piVar8, *(int *)(*(int *)(*piVar8 + 100) + uVar18 * 4 + -4) != iVar7)) {
        func_0x00f6b788(piVar8);
        iVar7 = *piVar12;
        uVar18 = (uint)*(byte *)(iVar7 + 0xb8);
        piVar19 = (int *)0x0;
      }
      *(int **)(iVar4 + 8) = piVar19;
      if ((*(byte *)(*piVar8 + 0xb8) < uVar18) ||
         (*(int *)(*(int *)(*piVar8 + 100) + uVar18 * 4 + -4) != iVar7)) {
        func_0x00f6b788(piVar8);
        piVar19 = *(int **)(iVar4 + 8);
      }
    }
    uVar5 = func_0x00f6b3c4(**(undefined4 **)(&UNK_010e9a70 + iRam010e9edc));
    func_0x026a5094(uVar5,iVar4,**(undefined4 **)(&UNK_010e9a8c + iRam010e9ee0),0);
    if (piVar19 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    func_0x01120b84(piVar19,uVar5,0);
    break;
  case 2:
    iVar7 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    piVar19 = *(int **)(iVar7 + 8);
    piVar8 = (int *)0x0;
    if (piVar19 != (int *)0x0) {
      uVar18 = (uint)*(byte *)(**(int **)(&UNK_010e984c + iRam010e9ee4) + 0xb8);
      if ((uVar18 <= *(byte *)(*piVar19 + 0xb8)) &&
         (piVar8 = piVar19,
         *(int *)(*(int *)(*piVar19 + 100) + uVar18 * 4 + -4) !=
         **(int **)(&UNK_010e984c + iRam010e9ee4))) {
        piVar8 = (int *)0x0;
      }
    }
    puVar6 = *(undefined4 **)(&UNK_010e9884 + iRam010e9ee8);
    *(int **)(iVar4 + 0xc) = piVar8;
    uVar5 = func_0x00f6b3c4(*puVar6);
    func_0x025b6648(uVar5,iVar4,**(undefined4 **)(&UNK_010e98a4 + iRam010e9eec),0);
    if (piVar8 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    func_0x0111f830(piVar8,uVar5,0);
    break;
  case 3:
  case 9:
    if (*(int *)(iVar4 + 0x10) == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010f19d8(param_1,param_5,uVar5,*(undefined4 *)(iVar4 + 8));
    break;
  case 6:
    iVar7 = *(int *)(iVar4 + 0x10);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    piVar19 = *(int **)(iVar7 + 8);
    piVar8 = (int *)0x0;
    if (piVar19 != (int *)0x0) {
      uVar18 = (uint)*(byte *)(**(int **)(&UNK_010e964c + iRam010e9ef4) + 0xb8);
      if ((uVar18 <= *(byte *)(*piVar19 + 0xb8)) &&
         (piVar8 = piVar19,
         *(int *)(*(int *)(*piVar19 + 100) + uVar18 * 4 + -4) !=
         **(int **)(&UNK_010e964c + iRam010e9ef4))) {
        piVar8 = (int *)0x0;
      }
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    func_0x010f19d8(param_1,param_5,uVar5,*(undefined4 *)(iVar4 + 8));
    piVar19 = *(int **)(&UNK_010e96b0 + iRam010e9ef8);
    iVar7 = *(int *)(param_1 + 0x38);
    iVar4 = *piVar19;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x00f6b294();
      iVar4 = *piVar19;
    }
    puVar6 = *(undefined4 **)(iVar4 + 0x5c);
    iVar13 = puVar6[5];
    if (iVar13 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x00f6b294();
        puVar6 = *(undefined4 **)(*piVar19 + 0x5c);
      }
      uVar5 = *puVar6;
      iVar13 = func_0x00f6b3c4(**(undefined4 **)(&UNK_010e96fc + iRam010e9efc));
      func_0x01ddde88(iVar13,uVar5,**(undefined4 **)(&UNK_010e971c + iRam010e9f00),0);
      *(int *)(*(int *)(*piVar19 + 0x5c) + 0x14) = iVar13;
    }
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = func_0x02c03288(iVar7,iVar13,**(undefined4 **)(&UNK_010e9750 + iRam010e9f04));
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    iVar4 = *(int *)(iVar4 + 0x28);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
      func_0x00f6b3d4();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    iVar7 = *(int *)(iVar4 + 0x18);
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    uVar5 = *(undefined4 *)(iVar7 + 0x98);
    if (bVar21) {
      func_0x00f6b3d0();
      *(undefined4 *)(iVar3 + 0x98) = uVar5;
      func_0x00f6b3d0();
    }
    else {
      *(undefined4 *)(iVar3 + 0x98) = uVar5;
    }
    func_0x0112c2a8(&uStack_30,*(undefined4 *)(iVar3 + 0x94),0);
    if (piVar8 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    piVar8[0x4e] = iStack_28;
    *(undefined8 *)(piVar8 + 0x4c) = uStack_30;
    iVar4 = *(int *)(iVar4 + 0x18);
    if (iVar4 == 0) {
      func_0x00f6b3d0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x98);
    if (bVar21) {
      func_0x00f6b3d0();
    }
    func_0x0112c33c(piVar8,uVar5,*(undefined4 *)(iVar3 + 0x94),0);
    break;
  case 7:
    iVar13 = *(int *)(iVar4 + 0x10);
    iVar7 = iVar13;
    if (iVar13 == 0) {
      func_0x00f6b3d0();
      iVar7 = *(int *)(iVar4 + 0x10);
    }
    piVar8 = *(int **)(iVar13 + 8);
    uVar5 = func_0x00f6b3c4(**(undefined4 **)(&UNK_010e990c + iRam010e9f08));
    func_0x026a5094(uVar5,iVar7,**(undefined4 **)(&UNK_010e9930 + iRam010e9f0c),0);
    if (piVar8 == (int *)0x0) {
      func_0x00f6b3d0();
      piVar19 = (int *)0x0;
    }
    else {
      piVar19 = *(int **)(&UNK_010e994c + iRam010e9f10);
      iVar7 = *piVar8;
      iVar4 = *piVar19;
      uVar10 = (uint)*(byte *)(iVar7 + 0xb8);
      uVar18 = (uint)*(byte *)(iVar4 + 0xb8);
      if ((uVar10 < uVar18) || (*(int *)(*(int *)(iVar7 + 100) + uVar18 * 4 + -4) != iVar4)) {
        func_0x00f6b3d0();
        iVar4 = *piVar19;
        iVar7 = *piVar8;
        uVar18 = (uint)*(byte *)(iVar4 + 0xb8);
        uVar10 = (uint)*(byte *)(iVar7 + 0xb8);
      }
      piVar19 = (int *)0x0;
      if ((uVar18 <= uVar10) &&
         (piVar19 = piVar8, *(int *)(*(int *)(iVar7 + 100) + uVar18 * 4 + -4) != iVar4)) {
        piVar19 = (int *)0x0;
      }
    }
    func_0x01120b84(piVar19,uVar5,0);
    break;
  case 10:
  case 0xc:
  case 0xd:
    iVar13 = func_0x00f6b3c4(**(undefined4 **)(&UNK_010e9404 + iRam010e9f14));
    func_0x01102244(iVar13,0);
    if (iVar13 == 0) {
      func_0x00f6b3d0();
    }
    iVar7 = *(int *)(iVar4 + 0x10);
    *(int *)(iVar13 + 0xc) = iVar4;
    if (iVar7 == 0) {
      func_0x00f6b3d0();
    }
    piVar8 = *(int **)(iVar7 + 8);
    uVar1 = piVar8 == (int *)0x0;
    uVar20 = true;
    if (!(bool)uVar1) {
      uVar18 = **(uint **)(&UNK_010e944c + iRam010e9f18);
      uVar11 = (uint)*(byte *)(*piVar8 + 0xb8);
      uVar10 = (uint)*(byte *)(uVar18 + 0xb8);
      uVar1 = uVar11 == uVar10;
      uVar20 = false;
      if (uVar10 <= uVar11) {
        uVar10 = *(uint *)(*(int *)(*piVar8 + 100) + uVar10 * 4 + -4);
        uVar20 = uVar18 <= uVar10;
        uVar1 = false;
        if (uVar10 == uVar18) {
          *(int **)(iVar13 + 8) = piVar8;
          iVar4 = *piVar8;
          piVar19 = *(int **)(&UNK_010e9488 + iRam010e9f1c);
          uVar18 = (uint)*(ushort *)(iVar4 + 0xb6);
          iVar7 = *piVar19;
          if (uVar18 != 0) {
            piVar12 = (int *)(*(int *)(iVar4 + 0x58) + 4);
            do {
              if (piVar12[-1] == iVar7) {
                puVar6 = (undefined4 *)(iVar4 + *piVar12 * 8 + 0xc0);
                goto code_r0x010e99d0;
              }
              uVar18 = uVar18 - 1;
              piVar12 = piVar12 + 2;
            } while (uVar18 != 0);
          }
          puVar6 = (undefined4 *)func_0x00fa6e88(piVar8,iVar7,0);
code_r0x010e99d0:
          uVar5 = (*(code *)*puVar6)(piVar8,puVar6[1]);
          piVar15 = *(int **)(&UNK_010e99f0 + iRam010e9f20);
          uVar17 = func_0x00f6b3c4(*piVar15);
          func_0x02fbd344(uVar17,iVar13,**(undefined4 **)(&UNK_010e9a0c + iRam010e9f24),0);
          piVar12 = (int *)func_0x030a9538(uVar5,uVar17,0);
          iVar4 = *piVar19;
          if (piVar12 == (int *)0x0) {
code_r0x010e9a50:
            piVar12 = (int *)0x0;
          }
          else if (*piVar12 != *piVar15) {
            func_0x00f6b788();
            goto code_r0x010e9a50;
          }
          iVar7 = *piVar8;
          uVar18 = (uint)*(ushort *)(iVar7 + 0xb6);
          if (uVar18 != 0) {
            piVar19 = (int *)(*(int *)(iVar7 + 0x58) + 4);
            do {
              if (piVar19[-1] == iVar4) {
                puVar6 = (undefined4 *)(iVar7 + *piVar19 * 8 + 200);
                goto code_r0x010e9b10;
              }
              uVar18 = uVar18 - 1;
              piVar19 = piVar19 + 2;
            } while (uVar18 != 0);
          }
          puVar6 = (undefined4 *)func_0x00fa6e88(piVar8,iVar4,1);
code_r0x010e9b10:
          (*(code *)*puVar6)(piVar8,piVar12,puVar6[1]);
          if (iVar13 == 0) {
            func_0x00f6b3d0();
            iVar4 = iRam00000008;
            func_0x00f6b3d0();
          }
          else {
            iVar4 = *(int *)(iVar13 + 8);
          }
          iVar7 = *(int *)(iVar13 + 0xc);
          if (iVar7 == 0) {
            func_0x00f6b3d0();
          }
          puVar6 = *(undefined4 **)(&UNK_010e9b68 + iRam010e9f28);
          uVar17 = *(undefined4 *)(iVar7 + 0x10);
          uVar5 = func_0x00f6b3c4(*puVar6);
          func_0x026a5094(uVar5,uVar17,**(undefined4 **)(&UNK_010e9b88 + iRam010e9f2c),0);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          func_0x011153d0(iVar4,uVar5,0);
          iVar4 = *(int *)(iVar13 + 8);
          uVar5 = func_0x00f6b3c4(*puVar6);
          func_0x026a5094(uVar5,iVar13,**(undefined4 **)(&UNK_010e9bd0 + iRam010e9f30),0);
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          func_0x01115270(iVar4,uVar5,0);
          break;
        }
      }
    }
    *(undefined4 *)(iVar13 + 8) = 0;
    func_0x00f6b3d0();
LAB_010e9ec4:
    iVar2 = func_0x00f6b3d0();
                    /* WARNING: Could not recover jumptable at 0x010e9ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((bool)uVar1) {
      iVar2 = (*(code *)(0x600 - (iVar13 + (uint)!(bool)uVar20)))();
      return iVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x010e9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* WARNING: Could not recover jumptable at 0x010e9f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    *(undefined1 *)(iVar2 + 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    return iVar2;
  }
  if (param_5 == 0) {
    if (iVar2 == 0) {
      func_0x00f6b3d0();
    }
    goto LAB_010e9e48;
  }
  iVar4 = func_0x01538948(0);
  if (iVar4 != 0) {
    if (*(int *)(**(int **)(iRam010e9f34 + 0x10e9cc0) + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar4 = func_0x01034b74(param_4,0,0);
    if (iVar4 != 0) {
      if (bVar21) {
        func_0x00f6b3d0();
        if ((*(int *)(iVar3 + 0x4c) == 3) ||
           ((func_0x00f6b3d0(), *(int *)(iVar3 + 0x4c) == 9 ||
            (func_0x00f6b3d0(), *(int *)(iVar3 + 0x4c) == 6)))) {
          func_0x00f6b3d0();
LAB_010e9d58:
          if (0.0 < *(float *)(iVar3 + 0x88)) {
            iVar3 = *(int *)(*(int *)(**(int **)(iRam010e9f38 + 0x10e9d78) + 0x5c) + 4);
            if (param_4 == 0) {
              func_0x00f6b3d0();
            }
            uVar17 = *(undefined4 *)(param_4 + 0x14);
            uVar5 = *(undefined4 *)(param_4 + 0x18);
            if (iVar3 == 0) {
              func_0x00f6b3d0();
            }
            func_0x01538dac(iVar3,uVar17,uVar5,0);
            if (*(int *)(**(int **)(iRam010e9f3c + 0x10e9dbc) + 0x74) == 0) {
              func_0x00f6b294();
            }
            func_0x0134d62c(5,0);
          }
        }
      }
      else if ((*(uint *)(iVar3 + 0x4c) < 10) &&
              ((1 << (*(uint *)(iVar3 + 0x4c) & 0xff) & 0x248U) != 0)) goto LAB_010e9d58;
    }
  }
  if (iVar2 == 0) {
    func_0x00f6b3d0();
  }
  piVar8 = *(int **)(iVar2 + 8);
  if (piVar8 == (int *)0x0) {
    func_0x00f6b3d0();
  }
  (**(code **)(*piVar8 + 0x140))(piVar8,param_7,param_8,param_9);
  iVar3 = *(int *)(param_1 + 0x60);
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  func_0x011010ac(iVar3,0,0);
LAB_010e9e48:
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 == 0) {
    func_0x00f6b3d0();
  }
  func_0x0111cb28(iVar3,0);
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))
              (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar2 + 8),
               *(undefined4 *)(iVar3 + 0x14));
  }
  uVar5 = func_0x01118bf8(0);
  func_0x010efd84(param_1,uVar5);
  func_0x010f1ccc(param_1);
  return *(int *)(iVar2 + 8);
}

