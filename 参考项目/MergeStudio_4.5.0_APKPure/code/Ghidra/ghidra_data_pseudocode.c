/* CellEntity.ctor VA=0x187FE88 | public void .ctor() { } */

void CellEntity_ctor_187FE88(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* CellEntity.ctor VA=0x187FE90 | public void .ctor(Coordinate boardIndex) { } */

void CellEntity_ctor_187FE90(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}


/* CellEntity.ctor VA=0x187FECC | public void .ctor(int unlockLevel, Coordinate boardIndex, int lockedItemLevel, int lockedItemSetID, bool isItemLocked, bool isItemBoxed) { } */

void CellEntity_ctor_187FECC
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x21) = param_8;
  *(undefined1 *)(param_1 + 0x20) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  return;
}


/* CellEntity.ToString VA=0x187FF20 | public override string ToString() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellEntity_ToString_187FF20(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined1 uStack_31;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_018901d0 + 0x188ff38);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018901d4 + 0x188ff4c));
    func_0x0165b424(*(undefined4 *)(_UNK_018901d8 + 0x188ff58));
    func_0x0165b424(*(undefined4 *)(_UNK_018901dc + 0x188ff64));
    func_0x0165b424(*(undefined4 *)(_UNK_018901e0 + 0x188ff70));
    func_0x0165b424(*(undefined4 *)(_UNK_018901e4 + 0x188ff7c));
    func_0x0165b424(*(undefined4 *)(_UNK_018901e8 + 0x188ff88));
    func_0x0165b424(*(undefined4 *)(_UNK_018901ec + 0x188ff94));
    func_0x0165b424(*(undefined4 *)(_UNK_018901f0 + 0x188ffa0));
    func_0x0165b424(*(undefined4 *)(_UNK_018901f4 + 0x188ffac));
    func_0x0165b424(*(undefined4 *)(_UNK_018901f8 + 0x188ffb8));
    *pcVar3 = '\x01';
  }
  piVar1 = (int *)func_0x0165b6d4(**(undefined4 **)(_UNK_018901fc + 0x188ffcc));
  func_0x026f778c(piVar1,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,**(undefined4 **)(_UNK_01890200 + 0x188fff8),0);
  uStack_1c = *(undefined4 *)(param_1 + 0xc);
  puVar4 = *(undefined4 **)(_UNK_01890204 + 0x1890010);
  uVar2 = func_0x0165b5ac(*puVar4,&uStack_1c);
  uVar2 = func_0x01701188(**(undefined4 **)(_UNK_01890208 + 0x1890030),uVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  uStack_28 = *(undefined4 *)(param_1 + 0x10);
  uStack_24 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = func_0x0165b5ac(**(undefined4 **)(_UNK_0189020c + 0x1890068),&uStack_28);
  uVar2 = func_0x01701188(**(undefined4 **)(_UNK_01890210 + 0x189008c),uVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  uStack_2c = *(undefined4 *)(param_1 + 0x18);
  uVar2 = func_0x0165b5ac(*puVar4,&uStack_2c);
  uVar2 = func_0x01701188(**(undefined4 **)(_UNK_01890214 + 0x18900d8),uVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  uStack_30 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = func_0x0165b5ac(*puVar4,&uStack_30);
  uVar2 = func_0x01701188(**(undefined4 **)(_UNK_01890218 + 0x1890124),uVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  uStack_31 = *(undefined1 *)(param_1 + 0x20);
  uVar2 = func_0x0165b5ac(**(undefined4 **)(_UNK_0189021c + 0x1890158),&uStack_31);
  uVar2 = func_0x01701188(**(undefined4 **)(_UNK_01890220 + 0x1890178),uVar2,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
    func_0x026f77f0(0,uVar2,0);
    func_0x0165b6e0();
  }
  else {
    func_0x026f77f0(piVar1,uVar2,0);
  }
  (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  return;
}


/* CellController.SetTutorialSortingData VA=0x188025C | public void SetTutorialSortingData(SortingData sortingData) { } */

void CellController_SetTutorialSortingData_188025C(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *piVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_lr;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7da4(iVar3,1,0);
  piVar2 = (int *)(param_1 + 0x38);
  *piVar2 = param_2;
  func_0x0165b3c0(piVar2,param_2);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0(iVar3,0,0,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  }
  uVar4 = *(undefined4 *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f9850(iVar3,uVar4,0);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == -1000) {
    return;
  }
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_057461bc)(iVar3,iVar1,0);
  return;
}


/* CellController.GetTutorialSortingData VA=0x18802D4 | public SortingData GetTutorialSortingData() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int CellController_GetTutorialSortingData_18802D4(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0189035c + 0x18902e4);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01890360 + 0x18902f8));
    func_0x0165b424(*(undefined4 *)(_UNK_01890364 + 0x1890304));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01890368 + 0x1890318));
  func_0x01aaf6b8(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar1 + 8) = **(undefined4 **)(_UNK_0189036c + 0x1890340);
  func_0x0165b3c0();
  *(undefined4 *)(iVar1 + 0xc) = 10;
  return iVar1;
}


/* CellController.SetSortingData VA=0x18802AC | private void SetSortingData(SortingData sortingData) { } */

void CellController_SetSortingData_18802AC(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)(param_1 + 0x38);
  *piVar3 = param_2;
  func_0x0165b3c0(piVar3);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *piVar3;
  if (iVar2 == 0) {
    func_0x0165b6e0(iVar1,0,0,extraout_r3,unaff_r4);
  }
  uVar4 = *(undefined4 *)(iVar2 + 8);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f9850(iVar1,uVar4,0);
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == -1000) {
    return;
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_057461bc)(iVar1,iVar2,0);
  return;
}


/* CellController.ArrangeSorting VA=0x1880370 | private void ArrangeSorting(bool moveToFront) { } */

void CellController_ArrangeSorting_1880370(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar2;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar3;
  
  iVar1 = func_0x018903b4();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 0x38);
  uVar2 = extraout_r3;
  if (iVar3 == 0) {
    func_0x0165b6e0();
    uVar2 = extraout_r3_00;
  }
  param_2 = *(int *)(iVar3 + 0xc) + param_2;
  if (iVar1 == 0) {
    func_0x0165b6e0(0,param_2,0,uVar2,unaff_r4,unaff_r5);
  }
  (*(code *)&UNK_057461bc)(iVar1,param_2,0);
  return;
}


/* CellController.Initialize VA=0x1880458 | public void Initialize(BoardController board, CellEntity cellEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_Initialize_1880458(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = (char *)(_UNK_01890724 + 0x1890478);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01890728 + 0x189048c));
    func_0x0165b424(*(undefined4 *)(_UNK_0189072c + 0x1890498));
    func_0x0165b424(*(undefined4 *)(_UNK_01890730 + 0x18904a4));
    func_0x0165b424(*(undefined4 *)(_UNK_01890734 + 0x18904b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01890738 + 0x18904bc));
    *pcVar1 = '\x01';
  }
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(param_2 + 0xb0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  if (*(int *)(**(int **)(_UNK_0189073c + 0x18904ec) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x026f7720(uVar3,0,0);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_2 + 0xb0);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uVar3 = *(undefined4 *)(iVar2 + 0x44);
  }
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  func_0x0165b3c0();
  *(int *)(param_1 + 0x40) = param_2;
  func_0x0165b3c0((int *)(param_1 + 0x40),param_2);
  *(int *)(param_1 + 0x34) = param_3;
  func_0x0165b3c0((int *)(param_1 + 0x34),param_3);
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  piVar8 = *(int **)(_UNK_01890740 + 0x1890588);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  *(byte *)(param_1 + 0x3c) =
       ~((char)*(undefined4 *)(param_3 + 0x14) + (char)*(undefined4 *)(param_3 + 0x10)) & 1;
  func_0x01890750(param_1,0);
  iVar2 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8978(iVar4,uVar3,0);
  iVar2 = *(int *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x20);
  uVar9 = *(undefined4 *)(iVar2 + 0x24);
  uVar7 = *(undefined4 *)(iVar2 + 0x28);
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7998(iVar4,uVar6,uVar9,uVar7,uVar3,0);
  func_0x018908d8(param_1,0);
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_01890744 + 0x189065c));
  func_0x01aaf6b8(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar2 + 8) = **(undefined4 **)(_UNK_01890748 + 0x1890684);
  func_0x0165b3c0();
  piVar5 = (int *)(param_1 + 0x38);
  *piVar5 = iVar2;
  *(undefined4 *)(iVar2 + 0xc) = 10;
  func_0x0165b3c0(piVar5,iVar2);
  func_0x01aafcb0(*(undefined4 *)(param_1 + 0x18),*piVar5,0);
  iVar2 = func_0x026f7960(param_1,0);
  uStack_30 = *(undefined4 *)(param_3 + 0x10);
  uStack_2c = *(undefined4 *)(param_3 + 0x14);
  uVar3 = func_0x0165b5ac(*piVar8,&uStack_30);
  uVar3 = func_0x01701188(**(undefined4 **)(_UNK_0189074c + 0x18906f8),uVar3,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8b84(iVar2,uVar3,0);
  return;
}


/* CellController.ArrangeBackground VA=0x1880750 | public void ArrangeBackground(bool customTutorialEnabled) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_ArrangeBackground_1880750(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  pcVar4 = (char *)(_UNK_018908c8 + 0x189076c);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018908cc + 0x1890780));
    *pcVar4 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x48);
  cVar1 = *(char *)(param_1 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  if (param_2 == 0) {
    iVar2 = 0x10;
    if (cVar1 == '\0') {
      iVar2 = 0xc;
    }
    uVar7 = *(undefined4 *)(iVar9 + iVar2);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f8978(iVar5,uVar7,0);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = func_0x026f7c90(iVar5,0);
    piVar6 = *(int **)(_UNK_018908d4 + 0x189087c);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar9 = *piVar6;
    }
    puVar3 = *(undefined4 **)(iVar9 + 0x5c);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar10 = puVar3[2];
  }
  else {
    iVar2 = 0x1c;
    if (cVar1 == '\0') {
      iVar2 = 0x18;
    }
    uVar7 = *(undefined4 *)(iVar9 + iVar2);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f8978(iVar5,uVar7,0);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = func_0x026f7c90(iVar5,0);
    piVar6 = *(int **)(_UNK_018908d0 + 0x1890800);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar9 = *piVar6;
    }
    iVar9 = *(int *)(iVar9 + 0x5c);
    uVar7 = *(undefined4 *)(iVar9 + 0xc);
    uVar8 = *(undefined4 *)(iVar9 + 0x10);
    uVar10 = *(undefined4 *)(iVar9 + 0x14);
  }
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8230(iVar5,uVar7,uVar8,uVar10,0);
  return;
}


/* CellController.Deselect VA=0x1880980 | public void Deselect() { } */

void CellController_Deselect_1880980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  
  func_0x018908d8(param_1,0);
  iVar1 = func_0x018903b4();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x38);
  uVar3 = extraout_r3;
  if (iVar4 == 0) {
    func_0x0165b6e0();
    uVar3 = extraout_r3_00;
  }
  uVar2 = *(undefined4 *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    func_0x0165b6e0(0,uVar2,0,uVar3,unaff_r4,unaff_r5);
  }
  (*(code *)&UNK_057461bc)(iVar1,uVar2,0);
  return;
}


/* CellController.Select VA=0x18809A0 | public void Select() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_Select_18809A0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  pcVar1 = (char *)(_UNK_01890a84 + 0x18909b4);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01890a88 + 0x18909c8));
    *pcVar1 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  uVar5 = *(undefined4 *)(iVar4 + 0x14);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018f24e8(iVar2,uVar3,uVar5,0);
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar4 + 8) != '\0') {
    return;
  }
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x14);
  if (*(int *)(**(int **)(_UNK_01890a8c + 0x1890a44) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x026f7930(uVar3,0,0);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = func_0x026f7c90(iVar2,0);
  func_0x01a1bac8(uVar3,0x3f87ae14,0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x026f7960(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7d50(iVar2,1,0);
  uVar3 = func_0x01890f4c(param_1);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_0571a6a4)(iVar2,uVar3,0);
  return;
}


/* CellController.SelectWithAnimation VA=0x1880A90 | public void SelectWithAnimation() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_SelectWithAnimation_1880A90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  pcVar3 = (char *)(_UNK_01890f00 + 0x1890ab0);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01890f04 + 0x1890ac4));
    func_0x0165b424(*(undefined4 *)(_UNK_01890f08 + 0x1890ad0));
    func_0x0165b424(*(undefined4 *)(_UNK_01890f0c + 0x1890adc));
    func_0x0165b424(*(undefined4 *)(_UNK_01890f10 + 0x1890ae8));
    func_0x0165b424(*(undefined4 *)(_UNK_01890f14 + 0x1890af4));
    func_0x0165b424(*(undefined4 *)(_UNK_01890f18 + 0x1890b00));
    *pcVar3 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x34);
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(iVar9 + 0x10);
  uVar10 = *(undefined4 *)(iVar9 + 0x14);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x018f24e8(iVar4,uVar6,uVar10,0);
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  if (*(char *)(iVar9 + 8) == '\0') {
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0x14);
    if (*(int *)(**(int **)(_UNK_01890f1c + 0x1890b7c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar4 = func_0x026f7930(uVar6,0,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x28);
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      func_0x01ae20b4(iVar4,uVar6,0,0,0,0);
      iVar4 = *(int *)(param_1 + 0x18);
      pcVar3 = (char *)(_UNK_01890f20 + 0x1890bfc);
      if (*pcVar3 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_01890f24 + 0x1890c10));
        *pcVar3 = '\x01';
      }
      iVar9 = **(int **)(**(int **)(_UNK_01890f28 + 0x1890c24) + 0x5c);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = func_0x0177da70(iVar9,0);
      iVar9 = iVar4;
      if (iVar1 != 0) {
        iVar9 = 0;
      }
      uVar7 = 1;
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        if (*(int *)(iVar1 + 0x6c) == 0) {
          uVar7 = 0;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x40);
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          iVar4 = *(int *)(iVar4 + 0x6c);
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          uVar7 = 0;
          iVar1 = func_0x01a6aca4(iVar4,1,0);
          iVar4 = iVar9;
          if (iVar1 != 0) {
            iVar9 = *(int *)(param_1 + 0x40);
            if (iVar9 == 0) {
              func_0x0165b6e0();
            }
            iVar9 = *(int *)(iVar9 + 0x6c);
            if (iVar9 == 0) {
              func_0x0165b6e0();
            }
            uVar7 = func_0x01a6aca4(iVar9,2,0);
            uVar7 = uVar7 ^ 1;
          }
        }
      }
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7da4(iVar4,uVar7,0);
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = func_0x026a3a68(iVar4,**(undefined4 **)(_UNK_01890f30 + 0x1890d34),
                              **(undefined4 **)(_UNK_01890f2c + 0x1890d28));
      iVar9 = *(int *)(param_1 + 0x20);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      uVar6 = func_0x026f7c90(iVar9,0);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      func_0x01a1bb70(uVar6,*(undefined4 *)(iVar4 + 0x2c),*(undefined4 *)(iVar4 + 0x30),
                      *(undefined4 *)(iVar4 + 0x34),0);
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = func_0x026a3a68(iVar4,**(undefined4 **)(_UNK_01890f38 + 0x1890dac),
                              **(undefined4 **)(_UNK_01890f34 + 0x1890da0));
      uVar6 = *(undefined4 *)(param_1 + 0x20);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      uVar10 = *(undefined4 *)(iVar4 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01890f3c + 0x1890dd4) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      func_0x018c6324(uVar6,uVar10,0);
      iVar4 = *(int *)(param_1 + 0x20);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = func_0x026f7960(iVar4,0);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      func_0x026f7d50(iVar4,1,0);
      iVar4 = *(int *)(param_1 + 0x20);
      iVar9 = *(int *)(param_1 + 0x28);
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      uVar10 = func_0x026f7c90(iVar4,0);
      uVar12 = *(undefined4 *)(param_1 + 0x20);
      pcVar3 = (char *)(_UNK_01890f40 + 0x1890e6c);
      if (*pcVar3 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_01890f44 + 0x1890e80));
        *pcVar3 = '\x01';
      }
      puVar2 = *(undefined4 **)(**(int **)(_UNK_01890f48 + 0x1890e98) + 0x5c);
      uVar11 = *puVar2;
      uVar8 = puVar2[1];
      uVar5 = puVar2[2];
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      func_0x01ae12cc(iVar9,uVar6,uVar10,uVar12,0,uVar11,uVar8,uVar5,uVar11,uVar8,uVar5,0);
      iVar4 = func_0x018903b4();
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x18);
        iVar9 = *(int *)(param_1 + 0x38);
        if (iVar9 == 0) {
          func_0x0165b6e0();
        }
        iVar9 = *(int *)(iVar9 + 0xc) + 1;
        if (iVar4 == 0) {
          func_0x0165b6e0(0,iVar9,0);
        }
        (*(code *)&UNK_057461bc)(iVar4,iVar9,0);
        return;
      }
      return;
    }
  }
  return;
}


/* CellController.ArrangeSelectedImage VA=0x18808D8 | public void ArrangeSelectedImage(bool isActive) { } */

void CellController_ArrangeSelectedImage_18808D8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x026f7c90(iVar3,0);
  func_0x01a1bac8(uVar1,0x3f87ae14,0);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f7960(iVar3,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7d50(iVar3,param_2,0);
  uVar2 = func_0x01890f4c(param_1);
  iVar3 = *(int *)(param_1 + 0x18);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_0571a6a4)(iVar3,uVar2 | param_2 ^ 1,0);
  return;
}


/* CellController.DisableTrigger VA=0x1880FD0 | public void DisableTrigger(bool disabled) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_DisableTrigger_1880FD0(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01891060 + 0x1890fe8);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01891064 + 0x1890ffc));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01891068 + 0x1891010) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x026f7930(uVar3,0,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_0578b30c)(iVar1,param_2 ^ 1,0);
  return;
}


/* CellController.SetDoneableBackground VA=0x188106C | public void SetDoneableBackground(bool enable) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_SetDoneableBackground_188106C(int param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_018911f4 + 0x1891084);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018911f8 + 0x1891098));
    func_0x0165b424(*(undefined4 *)(_UNK_018911fc + 0x18910a4));
    func_0x0165b424(*(undefined4 *)(_UNK_01891200 + 0x18910b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01891204 + 0x18910bc));
    func_0x0165b424(*(undefined4 *)(_UNK_01891208 + 0x18910c8));
    func_0x0165b424(*(undefined4 *)(_UNK_0189120c + 0x18910d4));
    *pcVar6 = '\x01';
  }
  if (*(byte *)(param_1 + 0x44) == param_2) {
    return;
  }
  piVar7 = (int *)(param_1 + 0x4c);
  *(char *)(param_1 + 0x44) = (char)param_2;
  if (*piVar7 != 0) {
    func_0x0207e2f8(*piVar7,0,0);
  }
  piVar3 = (int *)func_0x01891228(param_1,param_2);
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_01891210 + 0x1891128));
  if (param_2 == 0) {
    func_0x020767e4(uVar4,param_1,**(undefined4 **)(_UNK_0189121c + 0x1891184),0);
    func_0x025dfd3c(piVar3,uVar4,**(undefined4 **)(_UNK_01891220 + 0x189119c));
  }
  else {
    func_0x020767e4(uVar4,param_1,**(undefined4 **)(_UNK_01891214 + 0x189114c),0);
    func_0x025dfe18(piVar3,uVar4,**(undefined4 **)(_UNK_01891218 + 0x1891164));
  }
  if (piVar3 == (int *)0x0) {
    *piVar7 = 0;
  }
  else {
    piVar5 = (int *)0x0;
    if (*piVar3 == **(int **)(_UNK_01891224 + 0x18911bc)) {
      piVar5 = piVar3;
    }
    *piVar7 = (int)piVar5;
  }
  if (*(int *)(_UNK_01621600 + 0x16215c0) == 0) {
    return;
  }
  puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)piVar7 >> 0x11) * 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
  return;
}


/* CellController.DisableDoneableBackground VA=0x188130C | public void DisableDoneableBackground() { } */

/* WARNING: Removing unreachable block (ram,0x01891138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_DisableDoneableBackground_188130C(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_018911f4 + 0x1891084);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018911f8 + 0x1891098));
    func_0x0165b424(*(undefined4 *)(_UNK_018911fc + 0x18910a4));
    func_0x0165b424(*(undefined4 *)(_UNK_01891200 + 0x18910b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01891204 + 0x18910bc));
    func_0x0165b424(*(undefined4 *)(_UNK_01891208 + 0x18910c8));
    func_0x0165b424(*(undefined4 *)(_UNK_0189120c + 0x18910d4));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x44) == '\0') {
    return;
  }
  piVar7 = (int *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x44) = 0;
  if (*piVar7 != 0) {
    func_0x0207e2f8(*piVar7,0,0);
  }
  piVar3 = (int *)func_0x01891228(param_1,0);
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_01891210 + 0x1891128));
  func_0x020767e4(uVar4,param_1,**(undefined4 **)(_UNK_0189121c + 0x1891184),0);
  func_0x025dfd3c(piVar3,uVar4,**(undefined4 **)(_UNK_01891220 + 0x189119c));
  if (piVar3 == (int *)0x0) {
    *piVar7 = 0;
  }
  else {
    piVar5 = (int *)0x0;
    if (*piVar3 == **(int **)(_UNK_01891224 + 0x18911bc)) {
      piVar5 = piVar3;
    }
    *piVar7 = (int)piVar5;
  }
  if (*(int *)(_UNK_01621600 + 0x16215c0) == 0) {
    return;
  }
  puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)piVar7 >> 0x11) * 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
  return;
}


/* CellController.EnableDoneableBackground VA=0x1881314 | public void EnableDoneableBackground() { } */

/* WARNING: Removing unreachable block (ram,0x01891170) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_EnableDoneableBackground_1881314(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  pcVar6 = (char *)(_UNK_018911f4 + 0x1891084);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018911f8 + 0x1891098));
    func_0x0165b424(*(undefined4 *)(_UNK_018911fc + 0x18910a4));
    func_0x0165b424(*(undefined4 *)(_UNK_01891200 + 0x18910b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01891204 + 0x18910bc));
    func_0x0165b424(*(undefined4 *)(_UNK_01891208 + 0x18910c8));
    func_0x0165b424(*(undefined4 *)(_UNK_0189120c + 0x18910d4));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x44) == '\x01') {
    return;
  }
  piVar7 = (int *)(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x44) = 1;
  if (*piVar7 != 0) {
    func_0x0207e2f8(*piVar7,0,0);
  }
  piVar3 = (int *)func_0x01891228(param_1,1);
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_01891210 + 0x1891128));
  func_0x020767e4(uVar4,param_1,**(undefined4 **)(_UNK_01891214 + 0x189114c),0);
  func_0x025dfe18(piVar3,uVar4,**(undefined4 **)(_UNK_01891218 + 0x1891164));
  if (piVar3 == (int *)0x0) {
    *piVar7 = 0;
  }
  else {
    piVar5 = (int *)0x0;
    if (*piVar3 == **(int **)(_UNK_01891224 + 0x18911bc)) {
      piVar5 = piVar3;
    }
    *piVar7 = (int)piVar5;
  }
  if (*(int *)(_UNK_01621600 + 0x16215c0) == 0) {
    return;
  }
  puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)piVar7 >> 0x11) * 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1 << (((uint)piVar7 & 0x1ffff) >> 0xc);
  return;
}


/* CellController.DODoneableBackground VA=0x1881228 | public Tween DODoneableBackground(bool fadeIn) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_DODoneableBackground_1881228(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  
  pcVar5 = (char *)(_UNK_018912f8 + 0x1891244);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018912fc + 0x1891258));
    func_0x0165b424(*(undefined4 *)(_UNK_01891300 + 0x1891264));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x30);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = func_0x026a3a68(iVar6,**(undefined4 **)(_UNK_01891308 + 0x1891294),
                          **(undefined4 **)(_UNK_01891304 + 0x1891288));
  uVar1 = _UNK_018912f4;
  if (param_2 != 0) {
    uVar1 = 0x3f800000;
  }
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar6 + 0x2c) = uVar1;
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x026f7c90(iVar4,0);
  pcVar5 = (char *)(_UNK_01ae190c + 0x1ae18a8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01ae1910 + 0x1ae18bc));
    *pcVar5 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_01ae1914 + 0x1ae18d4) + 0x5c);
  func_0x01ae12cc(iVar7,uVar3,uVar1,iVar4,0,*puVar2,puVar2[1],puVar2[2],*puVar2,puVar2[1],puVar2[2])
  ;
  return;
}


/* CellController.GetCornerPosition VA=0x188131C | public Vector3 GetCornerPosition(Transform referenceTransform) { } */

void CellController_GetCornerPosition_188131C
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  func_0x01891350(&uStack_18,param_2,param_3,0x3ecccccd);
  *(undefined4 *)(param_1 + 1) = uStack_10;
  *param_1 = uStack_18;
  return;
}


/* CellController.GetCornerPosition VA=0x1881350 | public Vector3 GetCornerPosition(Transform referenceTransform, float coef) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_GetCornerPosition_1881350
               (float *param_1,undefined4 param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  iVar4 = func_0x026f7c90(param_2,0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7a00(&fStack_5c,iVar4,0);
  fVar3 = fStack_54;
  fVar2 = fStack_58;
  fVar1 = fStack_5c;
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f7a00(&fStack_5c,param_3,0);
  pcVar6 = (char *)(_UNK_018914b8 + 0x18913d4);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018914bc + 0x18913e8));
    *pcVar6 = '\x01';
  }
  fVar10 = fStack_54 - fVar3;
  fVar9 = fStack_58 - fVar2;
  fVar8 = fStack_5c - fVar1;
  if (*(int *)(**(int **)(_UNK_018914c0 + 0x1891408) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  fVar7 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
  if (fVar7 <= _UNK_018914b4) {
    pcVar6 = (char *)(_UNK_018914c4 + 0x1891458);
    if (*pcVar6 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_018914c8 + 0x189146c));
      *pcVar6 = '\x01';
    }
    pfVar5 = *(float **)(**(int **)(_UNK_018914cc + 0x1891480) + 0x5c);
    fVar8 = *pfVar5;
    fVar9 = pfVar5[1];
    fVar10 = pfVar5[2];
  }
  else {
    fVar10 = fVar10 / fVar7;
    fVar9 = fVar9 / fVar7;
    fVar8 = fVar8 / fVar7;
  }
  param_1[2] = fVar3 + fVar10 * param_4;
  param_1[1] = fVar2 + fVar9 * param_4;
  *param_1 = fVar1 + fVar8 * param_4;
  return;
}


/* CellController.ArrangeSortingJelly VA=0x18814D0 | public void ArrangeSortingJelly() { } */

void CellController_ArrangeSortingJelly_18814D0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x0165b6e0(0,7,0);
  }
  (*(code *)&UNK_056ed178)(iVar1,7,0);
  return;
}


/* CellController.RestoreSorting VA=0x18814E0 | public void RestoreSorting() { } */

void CellController_RestoreSorting_18814E0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    func_0x0165b6e0(0,3,0);
  }
  (*(code *)&UNK_056ed178)(iVar1,3,0);
  return;
}


/* CellController.StartMergeHintSorting VA=0x18814F0 | public void StartMergeHintSorting(int offset) { } */

void CellController_StartMergeHintSorting_18814F0(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x026f8ba4(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0(0,iVar1 + param_2,0,extraout_r3,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  }
  (*(code *)&UNK_056ed178)(iVar2,iVar1 + param_2,0);
  return;
}


/* CellController.IsTutorialActive VA=0x1880F4C | private bool IsTutorialActive() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint CellController_IsTutorialActive_1880F4C(int param_1)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar1;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  uint uVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01890fc4 + 0x1890f60);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01890fc8 + 0x1890f74));
    *pcVar3 = '\x01';
  }
  iVar4 = **(int **)(**(int **)(_UNK_01890fcc + 0x1890f88) + 0x5c);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x0177da70(iVar4,0);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = *(int *)(param_1 + 0x40);
  uVar1 = extraout_r3_02;
  if (iVar4 == 0) {
    func_0x0165b6e0();
    uVar1 = extraout_r3;
  }
  if (*(int *)(iVar4 + 0x6c) == 0) {
    uVar2 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x40);
    if (iVar4 == 0) {
      func_0x0165b6e0();
      uVar1 = extraout_r3_00;
    }
    iVar4 = *(int *)(iVar4 + 0x6c);
    if (iVar4 == 0) {
      func_0x0165b6e0();
      uVar1 = extraout_r3_01;
    }
    uVar2 = 0;
    iVar4 = func_0x01a6aca4(iVar4,1,0,uVar1,unaff_r4,unaff_r5);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x40);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = *(int *)(iVar4 + 0x6c);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      uVar2 = func_0x01a6aca4(iVar4,2,0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}


/* CellController.IsStepOneTransition VA=0x18803B4 | private bool IsStepOneTransition() { } */

uint CellController_IsStepOneTransition_18803B4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar1 + 0x6c) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x6c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = 0;
    iVar1 = func_0x01a6aca4(iVar1,1,0);
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x40);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = *(int *)(iVar1 + 0x6c);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      uVar2 = func_0x01a6aca4(iVar1,2,0);
      uVar2 = uVar2 ^ 1;
    }
  }
  return uVar2;
}


/* CellController.OnDestroy VA=0x1881528 | private void OnDestroy() { } */

void CellController_OnDestroy_1881528(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01ae20b4(iVar1,0,0,0,0,0);
  return;
}


/* CellController.ctor VA=0x1881568 | public void .ctor() { } */

void CellController_ctor_1881568(undefined4 param_1)

{
  (*(code *)&UNK_057217d8)(param_1,0);
  return;
}


/* CellController.cctor VA=0x1881570 | private static void .cctor() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CellController_cctor_1881570(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_018915d8 + 0x1891580);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018915dc + 0x1891594));
    *pcVar4 = '\x01';
  }
  piVar1 = *(int **)(_UNK_018915e0 + 0x18915b4);
  puVar3 = *(undefined4 **)(*piVar1 + 0x5c);
  puVar3[1] = 0x3f7ae148;
  puVar3[2] = 0x3f800000;
  *puVar3 = 0x3f7ae148;
  iVar2 = *(int *)(*piVar1 + 0x5c);
  *(undefined4 *)(iVar2 + 0xc) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x10) = 0x3f800000;
  *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  return;
}


/* CellController.SetDoneableBackground>b__38_0 VA=0x18815E4 | private void <SetDoneableBackground>b__38_0() { } */

void CellController_SetDoneableBackground>b__38_0_18815E4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x026f7960(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_0571f420)(iVar1,1,0);
  return;
}


/* CellController.SetDoneableBackground>b__38_1 VA=0x1881628 | private void <SetDoneableBackground>b__38_1() { } */

void CellController_SetDoneableBackground>b__38_1_1881628(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x026f7960(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  (*(code *)&UNK_0571f420)(iVar1,0,0);
  return;
}


/* ItemEntity.IsSameLevelAndSet VA=0x1882C78 | public bool IsSameLevelAndSet(IItemEntity item) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ItemEntity_IsSameLevelAndSet_1882C78(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  
  pcVar7 = (char *)(_UNK_01892db4 + 0x1892c90);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01892db8 + 0x1892ca4));
    *pcVar7 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 0x10);
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar2 = *param_2;
  piVar9 = *(int **)(_UNK_01892dbc + 0x1892ccc);
  uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
  iVar4 = *piVar9;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar4) {
        puVar3 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
        goto LAB_01892d14;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x016cc99c(param_2,iVar4,0);
LAB_01892d14:
  iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
  bVar1 = false;
  if (iVar8 == iVar2) {
    iVar8 = *(int *)(param_1 + 0x14);
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0(0);
    }
    iVar2 = *param_2;
    iVar4 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar4) {
          puVar3 = (undefined4 *)(iVar2 + *piVar9 * 8 + 200);
          goto LAB_01892d94;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(param_2,iVar4,1);
LAB_01892d94:
    iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    bVar1 = iVar8 == iVar2;
  }
  return bVar1;
}


/* ItemEntity.SetCurrentCapacity VA=0x1882DC0 | public void SetCurrentCapacity(float capacity) { } */

void ItemEntity_SetCurrentCapacity_1882DC0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


/* ItemEntity.SetChargingFinishAtTick VA=0x1882DC8 | public void SetChargingFinishAtTick(long chargingFinishAtTick) { } */

void ItemEntity_SetChargingFinishAtTick_1882DC8
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  return;
}


/* ItemEntity.SetSkippedState VA=0x1882DD8 | public void SetSkippedState(SpawnerState state) { } */

void ItemEntity_SetSkippedState_1882DD8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}


/* ItemEntity.CalculateNextChargingTime VA=0x1882DE0 | public void CalculateNextChargingTime(BoardItemSpawnerData data) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_CalculateNextChargingTime_1882DE0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  longlong lVar13;
  int iStack_38;
  int iStack_34;
  double dStack_30;
  
  pcVar6 = (char *)(_UNK_018930fc + 0x1892e00);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01893100 + 0x1892e14));
    func_0x0165b424(*(undefined4 *)(_UNK_01893104 + 0x1892e20));
    func_0x0165b424(*(undefined4 *)(_UNK_01893108 + 0x1892e2c));
    func_0x0165b424(*(undefined4 *)(_UNK_0189310c + 0x1892e38));
    *pcVar6 = '\x01';
  }
  iStack_34 = 0;
  iStack_38 = 0;
  iVar2 = func_0x01bbac8c(0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x01bba670(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  cVar1 = *(char *)(iVar2 + 9);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018d6300(param_2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
    uVar3 = func_0x018d0924(0,0);
    uVar4 = uVar3;
    if (cVar1 == '\0') {
      func_0x0165b6e0();
      goto LAB_01892eec;
    }
  }
  else {
    uVar3 = func_0x018d0924(iVar2,0);
    uVar4 = uVar3;
    if (cVar1 == '\0') {
LAB_01892eec:
      uVar3 = func_0x018d0908(iVar2,0);
    }
  }
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  if (*(int *)(**(int **)(_UNK_01893110 + 0x1892f0c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  lVar13 = func_0x018b98a8(0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = func_0x018d0940(iVar2,0);
  fVar11 = _UNK_018930f8;
  fVar7 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  pcVar6 = (char *)(_UNK_01893114 + 0x1892f68);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01893118 + 0x1892f80));
    *pcVar6 = '\x01';
  }
  fVar11 = (fVar7 / (fVar10 / fVar8)) * fVar11;
  if (*(int *)(**(int **)(_UNK_0189311c + 0x1892f98) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  dVar9 = (double)fVar11;
  dVar12 = (double)func_0x0172e430(SUB84(dVar9,0),(int)((ulonglong)dVar9 >> 0x20),&dStack_30);
  if (0.0 <= fVar11) {
    if (dVar12 != 0.5) {
      dVar9 = (double)func_0x026f8730(SUB84(dVar9 + 0.5,0),(int)((ulonglong)(dVar9 + 0.5) >> 0x20));
      goto LAB_01893034;
    }
    dVar9 = 1.0;
  }
  else {
    if (dVar12 != -0.5) {
      dVar9 = (double)func_0x0172e240(SUB84(dVar9 + -0.5,0),(int)((ulonglong)(dVar9 + -0.5) >> 0x20)
                                     );
      goto LAB_01893034;
    }
    dVar9 = -1.0;
  }
  uVar5 = func_0x016fddc4(SUB84(dStack_30,0),(int)((ulonglong)dStack_30 >> 0x20));
  dVar9 = dStack_30 + dVar9;
  if ((uVar5 & 1) == 0) {
    dVar9 = dStack_30;
  }
LAB_01893034:
  iStack_38 = (int)(longlong)dVar9;
  iVar2 = iStack_38 >> 0x1f;
  if (dVar9 == _UNK_018930f0) {
    iStack_38 = -0x80000000;
    iVar2 = -1;
  }
  *(longlong *)(param_1 + 0x30) = lVar13 + CONCAT44(iVar2,iStack_38);
  iStack_38 = iStack_38 / 1000;
  iStack_34 = iStack_38 >> 0x1f;
  uVar4 = func_0x01720214(&iStack_38,0);
  uVar4 = func_0x01701168(**(undefined4 **)(_UNK_01893120 + 0x18930a8),uVar4,
                          **(undefined4 **)(_UNK_01893124 + 0x18930b4),0);
  if (*(int *)(**(int **)(_UNK_01893128 + 0x18930c8) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018b4544(uVar4,0);
  return;
}


/* ItemEntity.SetChestState VA=0x188312C | public void SetChestState(IItemController item, ChestState chestState, BoardItemChestSpawner chestSpawner, bool animateClockDisappear = False, bool init = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_SetChestState_188312C
               (int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,int param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  
  pcVar9 = (char *)(_UNK_01893580 + 0x189314c);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01893584 + 0x189316c));
    func_0x0165b424(*(undefined4 *)(_UNK_01893588 + 0x1893178));
    func_0x0165b424(*(undefined4 *)(_UNK_0189358c + 0x1893184));
    func_0x0165b424(*(undefined4 *)(_UNK_01893590 + 0x1893190));
    func_0x0165b424(*(undefined4 *)(_UNK_01893594 + 0x189319c));
    *pcVar9 = '\x01';
  }
  iVar10 = *(int *)(param_1 + 0x38);
  if (param_3 == 2) {
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar4 = *param_2;
    piVar7 = *(int **)(_UNK_018935a4 + 0x18932c0);
    uVar1 = (uint)*(ushort *)(iVar4 + 0xb6);
    iVar3 = *piVar7;
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar4 + *piVar8 * 8 + 0xe0);
          goto LAB_01893308;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(param_2,iVar3,4);
LAB_01893308:
    (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar10 == 2) goto LAB_01893494;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar10 = *param_2;
    iVar4 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_018933fc;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(param_2,iVar4,0);
LAB_018933fc:
    piVar7 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar7 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar10 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
    iVar4 = **(int **)(_UNK_018935a8 + 0x189342c);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar10 + *piVar8 * 8 + 200);
          goto LAB_01893484;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    uVar6 = 1;
  }
  else {
    if (((param_3 != 1) || (iVar10 == 1)) || (param_6 != 0)) goto LAB_01893494;
    if (*(int *)(**(int **)(_UNK_01893598 + 0x18931d8) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar12 = func_0x018b98a8(0);
    if (param_4 == 0) {
      func_0x0165b6e0();
    }
    iVar10 = func_0x018d66fc(param_4,0);
    if (iVar10 == 0) {
      func_0x0165b6e0();
    }
    iVar10 = *(int *)(iVar10 + 0xc);
    if (iVar10 == 0) {
      func_0x0165b6e0();
    }
    uVar1 = *(int *)(iVar10 + 0x10) * 1000;
    *(uint *)(param_1 + 0x30) = (uint)uVar12 + uVar1;
    *(uint *)(param_1 + 0x34) =
         (int)((ulonglong)uVar12 >> 0x20) + ((int)uVar1 >> 0x1f) + (uint)CARRY4((uint)uVar12,uVar1);
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar10 = *param_2;
    uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar1 != 0) {
      piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0189359c + 0x1893268)) {
          puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xc0);
          goto LAB_01893388;
        }
        uVar1 = uVar1 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_0189359c + 0x1893268),0);
LAB_01893388:
    piVar7 = (int *)(*(code *)*puVar2)(param_2,puVar2[1]);
    if (piVar7 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar10 = *piVar7;
    uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
    iVar4 = **(int **)(_UNK_018935a0 + 0x18933b8);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar4) {
          puVar2 = (undefined4 *)(iVar10 + *piVar8 * 8 + 0xc0);
          goto LAB_01893484;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar1 != 0);
    }
    uVar6 = 0;
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar7,iVar4,uVar6);
LAB_01893484:
  (*(code *)*puVar2)(piVar7,puVar2[1]);
LAB_01893494:
  *(int *)(param_1 + 0x38) = param_3;
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar10 = *param_2;
  uVar1 = (uint)*(ushort *)(iVar10 + 0xb6);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(int *)(iVar10 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_018935ac + 0x18934b4)) {
        puVar2 = (undefined4 *)(iVar10 + *piVar7 * 8 + 0xe8);
        goto LAB_018934fc;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_018935ac + 0x18934b4),5);
LAB_018934fc:
  (*(code *)*puVar2)(param_2,param_5,puVar2[1]);
  if (param_4 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(param_4 + 0x18) == 0x70) {
    iVar10 = 0x70;
    if (param_3 == 2) {
      iVar10 = *(int *)(param_4 + 0x1c);
    }
    if (param_3 == 2 && iVar10 == 1) {
      if (*(int *)(**(int **)(_UNK_018935b0 + 0x189354c) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar10 = **(int **)(_UNK_018935b4 + 0x1893570);
      pcVar9 = (char *)(_UNK_0442c2d8 + 0x442be24);
      if (*pcVar9 == '\0') {
        func_0x027026c8(*(undefined4 *)(_UNK_0442c2dc + 0x442be3c));
        func_0x027026c8(*(undefined4 *)(_UNK_0442c2e0 + 0x442be48));
        func_0x027026c8(*(undefined4 *)(_UNK_0442c2e4 + 0x442be54));
        func_0x027026c8(*(undefined4 *)(_UNK_0442c2e8 + 0x442be60));
        func_0x027026c8(*(undefined4 *)(_UNK_0442c2ec + 0x442be6c));
        *pcVar9 = '\x01';
      }
      iVar4 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x027026e4();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x027026e4();
      }
      if (*(int *)(iVar4 + 0x74) == 0) {
        func_0x027026cc();
      }
      iVar4 = *(int *)(iVar10 + 0x10);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x027026e4();
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = func_0x027026e4();
      }
      if (*(int *)(*(int *)(iVar4 + 0x5c) + 4) != 0) {
        if (*(int *)(**(int **)(_UNK_0442c2f0 + 0x442bef8) + 0x74) == 0) {
          func_0x027026cc();
        }
        uVar1 = 0;
        iVar4 = func_0x02702a50(0);
        if (iVar4 != 0) {
          iVar4 = **(int **)(**(int **)(_UNK_0442c2f4 + 0x442bf28) + 0x5c);
          if (iVar4 == 0) {
            func_0x027026bc();
          }
          iVar3 = *(int *)(iVar10 + 0x10);
          iVar4 = *(int *)(iVar4 + 0x14);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = func_0x027026e4();
          }
          piVar7 = *(int **)(_UNK_0442c2f8 + 0x442bf60);
          iVar5 = *piVar7;
          uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x38);
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x027026cc(iVar5);
          }
          piVar8 = (int *)func_0x048c2f0c(uVar6,0);
          if (piVar8 == (int *)0x0) {
            func_0x027026bc();
          }
          uVar6 = (**(code **)(*piVar8 + 0x1a0))(piVar8,*(undefined4 *)(*piVar8 + 0x1a4));
          if (iVar4 == 0) {
            func_0x027026bc();
          }
          iVar4 = func_0x02b0b63c(iVar4,uVar6,**(undefined4 **)(_UNK_0442c2fc + 0x442bfcc));
          if (iVar4 == 0) {
            iVar4 = **(int **)(**(int **)(_UNK_0442c300 + 0x442bfe8) + 0x5c);
            if (iVar4 == 0) {
              func_0x027026bc();
            }
            iVar3 = *(int *)(iVar10 + 0x10);
            iVar4 = *(int *)(iVar4 + 0x10);
            if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
              iVar3 = func_0x027026e4();
            }
            iVar5 = *piVar7;
            uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x38);
            if (*(int *)(iVar5 + 0x74) == 0) {
              func_0x027026cc(iVar5);
            }
            piVar7 = (int *)func_0x048c2f0c(uVar6,0);
            if (piVar7 == (int *)0x0) {
              func_0x027026bc();
            }
            uVar6 = (**(code **)(*piVar7 + 0x1a0))(piVar7,*(undefined4 *)(*piVar7 + 0x1a4));
            if (iVar4 == 0) {
              func_0x027026bc();
            }
            iVar5 = *(int *)(iVar4 + 8);
            uVar11 = *(uint *)(iVar4 + 0xc);
            piVar7 = *(int **)(_UNK_0442c304 + 0x442c09c);
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
            iVar3 = *piVar7;
            if (iVar5 == 0) {
              func_0x027026bc();
            }
            if (uVar11 < *(uint *)(iVar5 + 0xc)) {
              *(uint *)(iVar4 + 0xc) = uVar11 + 1;
              puVar2 = (undefined4 *)(iVar5 + uVar11 * 4 + 0x10);
              *puVar2 = uVar6;
              func_0x027026d4(puVar2,uVar6);
            }
            else {
              func_0x02b0b274(iVar4,uVar6,
                              *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
            }
          }
        }
        while( true ) {
          iVar4 = *(int *)(iVar10 + 0x10);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x027026cc();
          }
          iVar4 = *(int *)(iVar10 + 0x10);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
          if (iVar4 == 0) {
            func_0x027026bc();
          }
          if ((*(ushort *)(*(int *)(iVar10 + 0x10) + 0xbd) & 1) == 0) {
            func_0x027026e4();
          }
          if (*(int *)(iVar4 + 0x10) <= (int)uVar1) break;
          iVar4 = *(int *)(iVar10 + 0x10);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          if (*(int *)(iVar4 + 0x74) == 0) {
            func_0x027026cc();
          }
          iVar4 = *(int *)(iVar10 + 0x10);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0xc);
          if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
            iVar4 = func_0x027026e4();
          }
          iVar4 = **(int **)(iVar4 + 0x5c);
          if (iVar4 == 0) {
            func_0x027026bc();
          }
          if (*(uint *)(iVar4 + 0xc) <= uVar1) {
            func_0x027026d8();
          }
          piVar7 = *(int **)(iVar4 + uVar1 * 4 + 0x10);
          if (piVar7 != (int *)0x0) {
            iVar4 = *(int *)(iVar10 + 0x10);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x027026e4();
            }
            iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x1c);
            if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
              iVar4 = func_0x027026e4(iVar4);
            }
            iVar3 = *piVar7;
            uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar11 != 0) {
              piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar8[-1] == iVar4) {
                  puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
                  goto LAB_0442c210;
                }
                uVar11 = uVar11 - 1;
                piVar8 = piVar8 + 2;
              } while (uVar11 != 0);
            }
            puVar2 = (undefined4 *)func_0x027026e8(piVar7,iVar4,0);
LAB_0442c210:
            (*(code *)*puVar2)(piVar7,0x4e,0,0,puVar2[1]);
          }
          uVar1 = uVar1 + 1;
        }
      }
      return;
    }
  }
  return;
}


/* ItemEntity.ctor VA=0x18835D4 | public void .ctor(int level, int setID, bool isJelly, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord) { } */

void ItemEntity_ctor_18835D4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int *piVar2;
  
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar1 = func_0x01fc44c8(0);
  piVar2 = (int *)(param_1 + 0x74);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01fc40ec(iVar1,param_7,param_8,param_9,param_10,0);
  return;
}


/* ItemEntity.ctor VA=0x188366C | public void .ctor(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord) { } */

void ItemEntity_ctor_188366C
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  int *piVar2;
  
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar1 = func_0x01fc44c8(0);
  piVar2 = (int *)(param_1 + 0x74);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01fc40ec(iVar1,param_7,param_8,param_9,param_10,0);
  return;
}


/* ItemEntity.ctor VA=0x1883700 | public void .ctor(int level, int setID, bool isJelly, Coordinate boardIndex, RewardHistoryEntity rewardHistoryEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_ctor_1883700
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,int param_7)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar5 = func_0x01fc44c8(0);
  piVar10 = (int *)(param_1 + 0x74);
  *piVar10 = iVar5;
  func_0x0165b3c0(piVar10,iVar5);
  iVar5 = *piVar10;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  pcVar8 = (char *)(_UNK_01fc4498 + 0x1fc4328);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01fc449c + 0x1fc433c),param_7,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a0 + 0x1fc4348));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a4 + 0x1fc4354));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a8 + 0x1fc4360));
    *pcVar8 = '\x01';
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  puVar7 = &uStack_24;
  uStack_24 = (ulonglong)uStack_2c << 0x20;
  _uStack_1c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_28);
  if (param_7 != 0) {
    puVar7 = *(undefined8 **)(param_7 + 8);
  }
  if (param_7 != 0 && puVar7 != (undefined8 *)0x0) {
    func_0x02b3f5b0(&uStack_50,puVar7,**(undefined4 **)(_UNK_01fc44ac + 0x1fc43a0));
    uStack_24._0_4_ = uStack_44;
    uStack_24._4_4_ = uStack_40;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    _uStack_1c = uStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01fc44b0 + 0x1fc43cc);
    while (iVar6 = func_0x01711144(&uStack_30,*puVar9), uVar2 = _uStack_1c, iVar6 != 0) {
      uVar1 = (ulonglong)_uStack_1c >> 0x20;
      uVar3 = (int)uVar1;
      uStack_1c = (undefined4)uVar2;
      uVar4 = uStack_1c;
      _uStack_1c = uVar2;
      func_0x01fc40ec(iVar5,(undefined4)uStack_24,uStack_24._4_4_,uVar4,uVar3);
    }
    func_0x026fbdec(&uStack_30,**(undefined4 **)(_UNK_01fc44b4 + 0x1fc4404));
  }
  return;
}


/* ItemEntity.ctor VA=0x1883780 | public void .ctor(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, bool isBoxed, int unboxLevel, RewardHistoryRecord record) { } */

void ItemEntity_ctor_1883780
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int *piVar2;
  
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x68) = param_8;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  iVar1 = func_0x01fc44c8(0);
  piVar2 = (int *)(param_1 + 0x74);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01fc40ec(iVar1,param_9,param_10,param_11,param_12,0);
  return;
}


/* ItemEntity.ctor VA=0x1883828 | public void .ctor(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, bool isBoxed, int unboxLevel, RewardHistoryEntity rewardHistoryEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_ctor_1883828
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
               int param_9)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x68) = param_8;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 8) = param_5;
  iVar5 = func_0x01fc44c8(0);
  piVar10 = (int *)(param_1 + 0x74);
  *piVar10 = iVar5;
  func_0x0165b3c0(piVar10,iVar5);
  iVar5 = *piVar10;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  pcVar8 = (char *)(_UNK_01fc4498 + 0x1fc4328);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01fc449c + 0x1fc433c),param_9,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a0 + 0x1fc4348));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a4 + 0x1fc4354));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a8 + 0x1fc4360));
    *pcVar8 = '\x01';
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  puVar7 = &uStack_24;
  uStack_24 = (ulonglong)uStack_2c << 0x20;
  _uStack_1c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_28);
  if (param_9 != 0) {
    puVar7 = *(undefined8 **)(param_9 + 8);
  }
  if (param_9 != 0 && puVar7 != (undefined8 *)0x0) {
    func_0x02b3f5b0(&uStack_50,puVar7,**(undefined4 **)(_UNK_01fc44ac + 0x1fc43a0));
    uStack_24._0_4_ = uStack_44;
    uStack_24._4_4_ = uStack_40;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    _uStack_1c = uStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01fc44b0 + 0x1fc43cc);
    while (iVar6 = func_0x01711144(&uStack_30,*puVar9), uVar2 = _uStack_1c, iVar6 != 0) {
      uVar1 = (ulonglong)_uStack_1c >> 0x20;
      uVar3 = (int)uVar1;
      uStack_1c = (undefined4)uVar2;
      uVar4 = uStack_1c;
      _uStack_1c = uVar2;
      func_0x01fc40ec(iVar5,(undefined4)uStack_24,uStack_24._4_4_,uVar4,uVar3);
    }
    func_0x026fbdec(&uStack_30,**(undefined4 **)(_UNK_01fc44b4 + 0x1fc4404));
  }
  return;
}


/* ItemEntity.ctor VA=0x18838B4 | public void .ctor(int level, int setID, bool isJelly, Coordinate boardIndex, int currentTaskIndex, RewardHistoryEntity rewardHistoryEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_ctor_18838B4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x60) = param_7;
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar5 = func_0x01fc44c8(0);
  piVar10 = (int *)(param_1 + 0x74);
  *piVar10 = iVar5;
  func_0x0165b3c0(piVar10,iVar5);
  iVar5 = *piVar10;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  pcVar8 = (char *)(_UNK_01fc4498 + 0x1fc4328);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01fc449c + 0x1fc433c),param_8,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a0 + 0x1fc4348));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a4 + 0x1fc4354));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a8 + 0x1fc4360));
    *pcVar8 = '\x01';
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  puVar7 = &uStack_24;
  uStack_24 = (ulonglong)uStack_2c << 0x20;
  _uStack_1c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_28);
  if (param_8 != 0) {
    puVar7 = *(undefined8 **)(param_8 + 8);
  }
  if (param_8 != 0 && puVar7 != (undefined8 *)0x0) {
    func_0x02b3f5b0(&uStack_50,puVar7,**(undefined4 **)(_UNK_01fc44ac + 0x1fc43a0));
    uStack_24._0_4_ = uStack_44;
    uStack_24._4_4_ = uStack_40;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    _uStack_1c = uStack_3c;
    puVar9 = *(undefined4 **)(_UNK_01fc44b0 + 0x1fc43cc);
    while (iVar6 = func_0x01711144(&uStack_30,*puVar9), uVar2 = _uStack_1c, iVar6 != 0) {
      uVar1 = (ulonglong)_uStack_1c >> 0x20;
      uVar3 = (int)uVar1;
      uStack_1c = (undefined4)uVar2;
      uVar4 = uStack_1c;
      _uStack_1c = uVar2;
      func_0x01fc40ec(iVar5,(undefined4)uStack_24,uStack_24._4_4_,uVar4,uVar3);
    }
    func_0x026fbdec(&uStack_30,**(undefined4 **)(_UNK_01fc44b4 + 0x1fc4404));
  }
  return;
}


/* ItemEntity.ctor VA=0x1883934 | public void .ctor(ItemInfo itemInfo, bool isJelly, Coordinate boardIndex, int currentTaskIndex, RewardHistoryRecord record) { } */

void ItemEntity_ctor_1883934
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int *piVar2;
  
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_6;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x60) = param_7;
  iVar1 = func_0x01fc44c8(0);
  piVar2 = (int *)(param_1 + 0x74);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01fc40ec(iVar1,param_8,param_9,param_10,param_11,0);
  return;
}


/* ItemEntity.ctor VA=0x18839D0 | public void .ctor(int level, int setID, bool isJelly, bool isBubbled, Coordinate boardIndex, RewardHistoryRecord rewardHistoryRecord) { } */

void ItemEntity_ctor_18839D0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
               undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  int *piVar2;
  
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 0x19) = param_5;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(undefined4 *)(param_1 + 0xc) = param_7;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar1 = func_0x01fc44c8(0);
  piVar2 = (int *)(param_1 + 0x74);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01fc40ec(iVar1,param_8,param_9,param_10,param_11,0);
  return;
}


/* ItemEntity.ctor VA=0x1883A74 | public void .ctor(int level, int setID, bool isJelly, RewardHistoryEntity rewardHistoryEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_ctor_1883A74
               (int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,int param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  func_0x026f769c(param_1,0);
  *(undefined1 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  iVar5 = func_0x01fc44c8(0);
  piVar8 = (int *)(param_1 + 0x74);
  *piVar8 = iVar5;
  func_0x0165b3c0(piVar8,iVar5);
  iVar5 = *piVar8;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  pcVar9 = (char *)(_UNK_01fc4498 + 0x1fc4328);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01fc449c + 0x1fc433c),param_5,0);
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a0 + 0x1fc4348));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a4 + 0x1fc4354));
    func_0x0165b424(*(undefined4 *)(_UNK_01fc44a8 + 0x1fc4360));
    *pcVar9 = '\x01';
  }
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  puVar7 = &uStack_24;
  uStack_24 = (ulonglong)uStack_2c << 0x20;
  _uStack_1c = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),uStack_28);
  if (param_5 != 0) {
    puVar7 = *(undefined8 **)(param_5 + 8);
  }
  if (param_5 != 0 && puVar7 != (undefined8 *)0x0) {
    func_0x02b3f5b0(&uStack_50,puVar7,**(undefined4 **)(_UNK_01fc44ac + 0x1fc43a0));
    uStack_24._0_4_ = uStack_44;
    uStack_24._4_4_ = uStack_40;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    _uStack_1c = uStack_3c;
    puVar10 = *(undefined4 **)(_UNK_01fc44b0 + 0x1fc43cc);
    while (iVar6 = func_0x01711144(&uStack_30,*puVar10), uVar2 = _uStack_1c, iVar6 != 0) {
      uVar1 = (ulonglong)_uStack_1c >> 0x20;
      uVar3 = (int)uVar1;
      uStack_1c = (undefined4)uVar2;
      uVar4 = uStack_1c;
      _uStack_1c = uVar2;
      func_0x01fc40ec(iVar5,(undefined4)uStack_24,uStack_24._4_4_,uVar4,uVar3);
    }
    func_0x026fbdec(&uStack_30,**(undefined4 **)(_UNK_01fc44b4 + 0x1fc4404));
  }
  return;
}


/* ItemEntity.ctor VA=0x1883AD8 | public void .ctor(RewardEntity rewardEntity) { } */

void ItemEntity_ctor_1883AD8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x026f769c(param_1,0);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}


/* ItemEntity.ctor VA=0x1883B10 | public void .ctor() { } */

void ItemEntity_ctor_1883B10(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* ItemEntity.RemoveBubble VA=0x1883B18 | public void RemoveBubble() { } */

void ItemEntity_RemoveBubble_1883B18(int param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 0;
  return;
}


/* ItemEntity.IsInactiveItem VA=0x1883B24 | public bool IsInactiveItem() { } */

bool ItemEntity_IsInactiveItem_1883B24(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0x18);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x19);
  }
  if (bVar2 && cVar1 == '\0') {
    return *(char *)(param_1 + 100) != '\0';
  }
  return true;
}


/* ItemEntity.IsInActiveAndNonMergeableItem VA=0x1883B54 | public bool IsInActiveAndNonMergeableItem() { } */

bool ItemEntity_IsInActiveAndNonMergeableItem_1883B54(int param_1)

{
  if (*(char *)(param_1 + 0x19) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 100) != '\0';
}


/* ItemEntity.IsJellyOrBoxedItem VA=0x1883B78 | public bool IsJellyOrBoxedItem() { } */

bool ItemEntity_IsJellyOrBoxedItem_1883B78(int param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    return true;
  }
  return *(char *)(param_1 + 100) != '\0';
}


/* ItemEntity.IsOnlyJelly VA=0x1883B9C | public bool IsOnlyJelly() { } */

bool ItemEntity_IsOnlyJelly_1883B9C(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 100) == '\0';
  }
  return bVar1;
}


/* ItemEntity.IsMovable VA=0x1883BB8 | public bool IsMovable() { } */

bool ItemEntity_IsMovable_1883BB8(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x18) == '\0') {
    bVar1 = *(char *)(param_1 + 100) == '\0';
  }
  return bVar1;
}


/* ItemEntity.IsSpecialTaskItem VA=0x1883BD8 | public bool IsSpecialTaskItem(BoardData boardData) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte ItemEntity_IsSpecialTaskItem_1883BD8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x01923b78(param_2,iVar5,0);
  if ((iVar4 != 0) || (iVar4 = *(int *)(param_2 + 0xe0), iVar4 == 0)) {
    return 0;
  }
  pcVar6 = (char *)(_UNK_018717f4 + 0x1871670);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018717f8 + 0x1871684),iVar5,0);
    func_0x0165b424(*(undefined4 *)(_UNK_018717fc + 0x1871690));
    func_0x0165b424(*(undefined4 *)(_UNK_01871800 + 0x187169c));
    func_0x0165b424(*(undefined4 *)(_UNK_01871804 + 0x18716a8));
    *pcVar6 = '\x01';
  }
  iVar4 = *(int *)(iVar4 + 8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (iVar4 == 0) {
    bVar2 = 0;
  }
  else {
    func_0x02b0bf88(&uStack_30,iVar4,**(undefined4 **)(_UNK_01871808 + 0x18716d8));
    bVar2 = 1;
    iVar4 = 6;
    puVar7 = *(undefined4 **)(_UNK_0187180c + 0x18716f4);
    do {
      iVar3 = func_0x01710964(&uStack_30,*puVar7);
      iVar1 = iStack_24;
      if (iVar3 == 0) {
        bVar2 = 0;
        iVar4 = 7;
        break;
      }
      if (iStack_24 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = *(int *)(iVar1 + 0x10);
      bVar8 = iVar3 != iVar5;
      if (bVar8) {
        iVar3 = *(int *)(iVar1 + 0x14);
      }
    } while (bVar8 && iVar3 != iVar5);
    func_0x0172cd54(&uStack_30,**(undefined4 **)(_UNK_01871810 + 0x1871734));
    bVar2 = bVar2 & iVar4 == 6;
  }
  return bVar2;
}


/* ItemEntity.ActivateTutorialState VA=0x1883C04 | public void ActivateTutorialState() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_ActivateTutorialState_1883C04(int param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint extraout_r1;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01893c88 + 0x1893c18);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01893c8c + 0x1893c2c));
    *pcVar5 = '\x01';
    param_2 = extraout_r1;
  }
  piVar4 = (int *)(param_1 + 0x48);
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    param_2 = (uint)*(byte *)(iVar3 + 0xc);
  }
  if ((iVar3 != 0 && param_2 != 0) && (*(uint *)(iVar3 + 8) < 0x80000000)) {
    return;
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01893c90 + 0x1893c60));
  func_0x01a6c488(iVar3,1,0);
  *piVar4 = iVar3;
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)piVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemEntity.IsInTutorialState VA=0x1883C94 | public bool IsInTutorialState() { } */

bool ItemEntity_IsInTutorialState_1883C94(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    param_3 = (uint)*(byte *)(iVar1 + 0xc);
  }
  if (iVar1 != 0 && param_3 != 0) {
    return *(uint *)(iVar1 + 8) < 0x80000000;
  }
  return false;
}


/* ItemEntity.SetSpawnerState VA=0x1883CC4 | public void SetSpawnerState(IItemController item, BoardItemSpawnerData data, SpawnerState spawnerState, string label, bool animateClockDisappear = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_SetSpawnerState_1883CC4
               (int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
               undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01894034 + 0x1893ce4);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01894038 + 0x1893cfc));
    func_0x0165b424(*(undefined4 *)(_UNK_0189403c + 0x1893d08));
    func_0x0165b424(*(undefined4 *)(_UNK_01894040 + 0x1893d14));
    func_0x0165b424(*(undefined4 *)(_UNK_01894044 + 0x1893d20));
    func_0x0165b424(*(undefined4 *)(_UNK_01894048 + 0x1893d2c));
    func_0x0165b424(*(undefined4 *)(_UNK_0189404c + 0x1893d38));
    func_0x0165b424(*(undefined4 *)(_UNK_01894050 + 0x1893d44));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x3c) == param_4) {
    *(int *)(param_1 + 0x3c) = param_4;
  }
  else {
    if (param_4 == 0) {
      iVar6 = *(int *)(param_1 + 0x44);
      if (*(int *)(**(int **)(_UNK_01894054 + 0x1893d74) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      uVar1 = func_0x0172aff4(0,iVar6 + -1,0);
      *(undefined4 *)(param_1 + 0x44) = uVar1;
    }
    piVar2 = (int *)func_0x0165b4f0(**(undefined4 **)(_UNK_01894058 + 0x1893dac),4);
    if (param_3 == 0) {
      func_0x0165b6e0();
    }
    uStack_24 = *(undefined4 *)(param_3 + 0x18);
    puVar7 = *(undefined4 **)(_UNK_0189405c + 0x1893dd0);
    iVar6 = func_0x0165b5ac(*puVar7,&uStack_24);
    if (piVar2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    if ((iVar6 != 0) && (iVar3 = func_0x0165b5a8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x0165b700();
      func_0x0165b590(uVar1,0);
    }
    if (piVar2[3] == 0) {
      func_0x0165b6e4();
    }
    piVar2[4] = iVar6;
    func_0x0165b3c0(piVar2 + 4,iVar6);
    uStack_28 = *(undefined4 *)(param_3 + 0x1c);
    iVar6 = func_0x0165b5ac(*puVar7,&uStack_28);
    if ((iVar6 != 0) && (iVar3 = func_0x0165b5a8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x0165b700();
      func_0x0165b590(uVar1,0);
    }
    if ((uint)piVar2[3] < 2) {
      func_0x0165b6e4();
    }
    piVar2[5] = iVar6;
    func_0x0165b3c0(piVar2 + 5,iVar6);
    uStack_2c = *(undefined4 *)(param_1 + 0x3c);
    puVar7 = *(undefined4 **)(_UNK_01894060 + 0x1893eac);
    iVar6 = func_0x0165b5ac(*puVar7,&uStack_2c);
    if ((iVar6 != 0) && (iVar3 = func_0x0165b5a8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x0165b700();
      func_0x0165b590(uVar1,0);
    }
    if ((uint)piVar2[3] < 3) {
      func_0x0165b6e4();
    }
    piVar2[6] = iVar6;
    func_0x0165b3c0(piVar2 + 6,iVar6);
    iStack_30 = param_4;
    iVar6 = func_0x0165b5ac(*puVar7,&iStack_30);
    if ((iVar6 != 0) && (iVar3 = func_0x0165b5a8(iVar6,*(undefined4 *)(*piVar2 + 0x20)), iVar3 == 0)
       ) {
      uVar1 = func_0x0165b700();
      func_0x0165b590(uVar1,0);
    }
    if ((uint)piVar2[3] < 4) {
      func_0x0165b6e4();
    }
    piVar2[7] = iVar6;
    func_0x0165b3c0(piVar2 + 7,iVar6);
    uVar1 = func_0x026f8110(**(undefined4 **)(_UNK_01894064 + 0x1893f7c),piVar2,0);
    if (*(int *)(**(int **)(_UNK_01894068 + 0x1893f90) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x018b4544(uVar1,0);
    *(int *)(param_1 + 0x3c) = param_4;
    if (param_2 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar6 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar2[-1] == **(int **)(_UNK_0189406c + 0x1893fd0)) {
          puVar7 = (undefined4 *)(iVar6 + *piVar2 * 8 + 0xe8);
          goto LAB_01894018;
        }
        uVar4 = uVar4 - 1;
        piVar2 = piVar2 + 2;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_0189406c + 0x1893fd0),5);
LAB_01894018:
    (*(code *)*puVar7)(param_2,param_6,puVar7[1]);
  }
  return;
}


/* ItemEntity.IsInvalid VA=0x1884070 | public bool IsInvalid() { } */

bool ItemEntity_IsInvalid_1884070(int param_1)

{
  if (0 < *(int *)(param_1 + 0x10)) {
    return false;
  }
  return *(int *)(param_1 + 0x14) < 1;
}


/* ItemEntity.SetBubbleData VA=0x1884098 | public void SetBubbleData(bool isBubbled, long bubbleDeactivationTime, string spawnTrigger) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_SetBubbleData_1884098
               (int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x70);
  *puVar3 = param_5;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x19) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemEntity.IsSameLevelAndSet VA=0x18840C0 | public bool IsSameLevelAndSet(ItemEntity item) { } */

bool ItemEntity_IsSameLevelAndSet_18840C0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  bVar1 = false;
  if (iVar2 == *(int *)(param_2 + 0x10)) {
    bVar1 = *(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14);
  }
  return bVar1;
}


/* ItemEntity.IsSameLevelAndSet VA=0x1884104 | public bool IsSameLevelAndSet(BoardTaskGoal goal, bool useCurrentID = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ItemEntity_IsSameLevelAndSet_1884104(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_01894224 + 0x1894120);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01894228 + 0x1894134));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0189422c + 0x1894148);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar3 = (char *)(_UNK_01894230 + 0x1894164);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01894234 + 0x1894178));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x194);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  uVar5 = *(undefined4 *)(param_2 + 8);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (param_3 == 0) {
    iVar1 = func_0x01918c40(iVar1,uVar5,0);
  }
  else {
    iVar1 = func_0x01918918();
  }
  bVar2 = false;
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0xc)) {
    bVar2 = *(int *)(param_1 + 0x14) == iVar1;
  }
  return bVar2;
}


/* ItemEntity.CreateEmptyHistoryEntityIfNull VA=0x1884238 | public void CreateEmptyHistoryEntityIfNull() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemEntity_CreateEmptyHistoryEntityIfNull_1884238(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_01894308 + 0x1894250);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0189430c + 0x1894264));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = func_0x01fc44c8(0);
    *(undefined4 *)(param_1 + 0x74) = uVar1;
    func_0x0165b3c0((int *)(param_1 + 0x74),uVar1);
    iVar3 = *(int *)(param_1 + 0x74);
    func_0x018dcb18(&uStack_30,param_1,0,0);
    func_0x01fc4668(&uStack_30,uStack_30,uStack_2c,**(undefined4 **)(_UNK_01894310 + 0x18942c4),0);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x01fc40ec(iVar3,uStack_30,uStack_2c,uStack_28,uStack_24,0);
  }
  return;
}


/* SpawnerConfig.ctor VA=0x18C0878 | public void .ctor() { } */

void SpawnerConfig_ctor_18C0878(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* ItemMovableInputManager.ResetStatus VA=0x18C5DC4 | public static void ResetStatus() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_018d5dc8(void)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d5e20 + 0x18d5dd8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5e24 + 0x18d5dec));
    *pcVar5 = '\x01';
  }
  piVar3 = *(int **)(_UNK_018d5e28 + 0x18d5e04);
  **(undefined4 **)(*piVar3 + 0x5c) = 0;
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemMovableInputManager.OnBeginDrag VA=0x18C5E2C | public static void OnBeginDrag(Movable movable) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemMovableInputManager_OnBeginDrag_18C5E2C(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d5e88 + 0x18d5e40);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5e8c + 0x18d5e54));
    *pcVar5 = '\x01';
  }
  func_0x018d5e94();
  piVar3 = *(int **)(_UNK_018d5e90 + 0x18d5e6c);
  **(undefined4 **)(*piVar3 + 0x5c) = param_1;
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemMovableInputManager.OnDragEnded VA=0x18C5F54 | public static void OnDragEnded(Movable movable) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemMovableInputManager_OnDragEnded_18C5F54(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  pcVar6 = (char *)(_UNK_018d5fe0 + 0x18d5f68);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5fe4 + 0x18d5f7c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d5fe8 + 0x18d5f88));
    *pcVar6 = '\x01';
  }
  uVar7 = **(undefined4 **)(**(int **)(_UNK_018d5fec + 0x18d5f9c) + 0x5c);
  if (*(int *)(**(int **)(_UNK_018d5ff0 + 0x18d5fa8) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar5 = func_0x026f7930(uVar7,param_1,0);
  if (iVar5 == 0) {
    return;
  }
  pcVar6 = (char *)(_UNK_018d5e20 + 0x18d5dd8);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5e24 + 0x18d5dec));
    *pcVar6 = '\x01';
  }
  piVar3 = *(int **)(_UNK_018d5e28 + 0x18d5e04);
  **(undefined4 **)(*piVar3 + 0x5c) = 0;
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemMovableInputManager.HandleLastDraggedItem VA=0x18C5E94 | private static void HandleLastDraggedItem() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemMovableInputManager_HandleLastDraggedItem_18C5E94(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_018d5f40 + 0x18d5ea4);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5f44 + 0x18d5eb8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d5f48 + 0x18d5ec4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_018d5f4c + 0x18d5ed8);
  uVar6 = **(undefined4 **)(*piVar7 + 0x5c);
  if (*(int *)(**(int **)(_UNK_018d5f50 + 0x18d5ee4) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar4 = func_0x026f7720(uVar6,0,0);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = **(int **)(*piVar7 + 0x5c);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x018c9310(iVar4,0);
  pcVar5 = (char *)(_UNK_018d5e20 + 0x18d5dd8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5e24 + 0x18d5dec));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_018d5e28 + 0x18d5e04);
  **(undefined4 **)(*piVar7 + 0x5c) = 0;
  uVar3 = *(uint *)(*piVar7 + 0x5c);
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemMovableInputManager.ClearLastDraggedItem VA=0x18C5DC8 | private static void ClearLastDraggedItem() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018d5dc8(void)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d5e20 + 0x18d5dd8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5e24 + 0x18d5dec));
    *pcVar5 = '\x01';
  }
  piVar3 = *(int **)(_UNK_018d5e28 + 0x18d5e04);
  **(undefined4 **)(*piVar3 + 0x5c) = 0;
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar4 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemMovableInputManager.Update VA=0x18C5FF4 | private void Update() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemMovableInputManager_Update_18C5FF4(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  iVar4 = func_0x026f9380(0,0);
  if (iVar4 != 0) {
    ItemMovableInputManager_HandleLastDraggedItem_18C5E94();
  }
  iVar4 = func_0x026f996c(0,0);
  if (iVar4 == 0) {
    return;
  }
  pcVar5 = (char *)(_UNK_018d5f40 + 0x18d5ea4);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d5f44 + 0x18d5eb8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d5f48 + 0x18d5ec4));
    *pcVar5 = '\x01';
  }
  piVar7 = *(int **)(_UNK_018d5f4c + 0x18d5ed8);
  uVar6 = **(undefined4 **)(*piVar7 + 0x5c);
  if (*(int *)(**(int **)(_UNK_018d5f50 + 0x18d5ee4) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar4 = func_0x026f7720(uVar6,0,0);
  if (iVar4 != 0) {
    iVar4 = **(int **)(*piVar7 + 0x5c);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    func_0x018c9310(iVar4,0);
    pcVar5 = (char *)(_UNK_018d5e20 + 0x18d5dd8);
    if (*pcVar5 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_018d5e24 + 0x18d5dec));
      *pcVar5 = '\x01';
    }
    piVar7 = *(int **)(_UNK_018d5e28 + 0x18d5e04);
    **(undefined4 **)(*piVar7 + 0x5c) = 0;
    uVar3 = *(uint *)(*piVar7 + 0x5c);
    if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
      puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + (uVar3 >> 0x11) * 4);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((uVar3 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}


/* ItemMovableInputManager.ctor VA=0x18C6028 | public void .ctor() { } */

void ItemMovableInputManager_ctor_18C6028(undefined4 param_1)

{
  (*(code *)&UNK_057217d8)(param_1,0);
  return;
}


/* BoardItemChestSpawner.GetNonProbabilisticItem VA=0x18C657C | public virtual SpawnedItem GetNonProbabilisticItem(int currentCapacity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemChestSpawner_GetNonProbabilisticItem_18C657C(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d66dc + 0x18d6594);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d66e0 + 0x18d65a8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d66e4 + 0x18d65b4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d66e8 + 0x18d65c0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d66ec + 0x18d65cc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x018d66fc(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x0189610c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  param_2 = iVar1 - param_2;
  if ((iVar1 < param_2) || (param_2 < 1)) {
    if (*(int *)(**(int **)(_UNK_018d66f0 + 0x18d6668) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x018b45f0(**(undefined4 **)(_UNK_018d66f4 + 0x18d6688),0);
    iVar2 = func_0x018d66fc(param_1);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x0189610c(iVar2,0);
    param_2 = iVar1;
    uVar4 = extraout_r3_01;
    if (iVar2 == 0) {
      func_0x0165b6e0();
      uVar4 = extraout_r3_02;
    }
  }
  else {
    iVar1 = func_0x018d66fc(param_1);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x0189610c(iVar1,0);
    uVar4 = extraout_r3;
    if (iVar2 == 0) {
      func_0x0165b6e0();
      uVar4 = extraout_r3_00;
    }
  }
  uVar3 = param_2 - 1;
  if (*(uint *)(iVar2 + 0xc) <= uVar3) {
    func_0x048d8a1c(0,uVar3,**(undefined4 **)(_UNK_018d66f8 + 0x18d66d0),uVar4,unaff_r4,unaff_r5);
  }
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x0165b6e4();
  }
  return *(undefined4 *)(iVar1 + uVar3 * 4 + 0x10);
}


/* BoardItemChestSpawner.Initialize VA=0x18C6904 | public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemChestSpawner_Initialize_18C6904(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  code *pcVar14;
  int *piVar15;
  bool bVar16;
  uint in_fpscr;
  undefined8 uVar17;
  undefined8 uVar18;
  int in_stack_00000008;
  undefined4 uVar19;
  
  pcVar13 = (char *)(_UNK_018d72ac + 0x18d6928);
  if (*pcVar13 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d72b0 + 0x18d693c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72b4 + 0x18d6948));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72b8 + 0x18d6954));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72bc + 0x18d6960));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72c0 + 0x18d696c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72c4 + 0x18d6978));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72c8 + 0x18d6984));
    func_0x0165b424(*(undefined4 *)(_UNK_018d72cc + 0x18d6990));
    *pcVar13 = '\x01';
  }
  if (param_3 == (int *)0x0) {
LAB_018d6ac8:
    if (*(int *)(**(int **)(_UNK_018d72d8 + 0x18d6ad4) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x018b45f0(**(undefined4 **)(_UNK_018d72dc + 0x18d6af8),0);
    return false;
  }
  iVar1 = *param_3;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == **(int **)(_UNK_018d72d0 + 0x18d69b0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 200);
        goto LAB_018d69f8;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_3,**(int **)(_UNK_018d72d0 + 0x18d69b0),1);
LAB_018d69f8:
  piVar10 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
  if (piVar10 == (int *)0x0) goto LAB_018d6ac8;
  iVar1 = *piVar10;
  piVar15 = *(int **)(_UNK_018d72d4 + 0x18d6a24);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == *piVar15) {
        puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
        goto LAB_018d6a6c;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar15,0);
LAB_018d6a6c:
  iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
  if (iVar1 == 0) goto LAB_018d6ac8;
  iVar1 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar11[-1] == *piVar15) {
        puVar2 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
        goto LAB_018d6b0c;
      }
      uVar7 = uVar7 - 1;
      piVar11 = piVar11 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar15,0);
LAB_018d6b0c:
  piVar11 = (int *)(*(code *)*puVar2)(piVar10,puVar2[1]);
  uVar3 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  iVar1 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar12[-1] == *piVar15) {
        puVar2 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xd8);
        goto LAB_018d6b88;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar15,3);
LAB_018d6b88:
  (*(code *)*puVar2)(piVar10,uVar3,puVar2[1]);
  iVar1 = func_0x018d66fc(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x018935b8(iVar1,0);
  iVar8 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar8 + 0xb6);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(int *)(iVar8 + 0x58) + 4);
    do {
      if (piVar12[-1] == *piVar15) {
        puVar2 = (undefined4 *)(iVar8 + *piVar12 * 8 + 0xd0);
        goto LAB_018d6c18;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar15,2);
LAB_018d6c18:
  (*(code *)*puVar2)(piVar10,iVar1 * 1000,puVar2[1]);
  iVar1 = func_0x018d66fc(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  uVar3 = func_0x018960b8(iVar1,0);
  iVar1 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar12[-1] == *piVar15) {
        puVar2 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xf0);
        goto LAB_018d6ca8;
      }
      uVar7 = uVar7 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar15,6);
LAB_018d6ca8:
  (*(code *)*puVar2)(piVar10,uVar3,puVar2[1]);
  if (in_stack_00000008 == 0) {
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar11;
    piVar10 = *(int **)(_UNK_018d72e0 + 0x18d6ce0);
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xd8);
          goto LAB_018d6d28;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,3);
LAB_018d6d28:
    fVar4 = (float)(*(code *)*puVar2)(piVar11,puVar2[1]);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar4 == 0.0) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) goto LAB_018d6d48;
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar11;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xe8);
          goto LAB_018d70bc;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,5);
LAB_018d70bc:
    iVar1 = (*(code *)*puVar2)(piVar11,puVar2[1]);
    if (iVar1 != 1) goto LAB_018d6ef0;
    if (*(int *)(**(int **)(_UNK_018d72e8 + 0x18d70e0) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar17 = func_0x018b98a8(0);
    iVar1 = (int)((ulonglong)uVar17 >> 0x20);
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar8 = *piVar11;
    uVar7 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar8 + *piVar15 * 8 + 0xe0);
          goto LAB_018d715c;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,4);
LAB_018d715c:
    uVar18 = (*(code *)*puVar2)(piVar11,puVar2[1]);
    iVar8 = (int)((ulonglong)uVar18 >> 0x20);
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar5 = *piVar11;
    bVar16 = (uint)uVar17 < (uint)uVar18;
    iVar6 = *piVar10;
    uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
    if ((int)(iVar1 - (iVar8 + (uint)bVar16)) < 0 ==
        (SBORROW4(iVar1,iVar8) != SBORROW4(iVar1 - iVar8,(uint)bVar16))) {
      if (uVar7 != 0) {
        piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar6) {
            puVar2 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0x118);
            goto LAB_018d724c;
          }
          uVar7 = uVar7 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar11,iVar6,0xb);
LAB_018d724c:
      (*(code *)*puVar2)(piVar11,param_3,2,param_1,0,0,puVar2[1]);
      if (*(int *)(**(int **)(_UNK_018d72ec + 0x18d7284) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      func_0x026f92d0(0,**(undefined4 **)(_UNK_018d72f0 + 0x18d72a0));
      goto LAB_018d6ef0;
    }
    if (uVar7 != 0) {
      piVar10 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar10[-1] == iVar6) {
          puVar2 = (undefined4 *)(iVar5 + *piVar10 * 8 + 0x118);
          goto LAB_018d7214;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,iVar6,0xb);
LAB_018d7214:
    pcVar14 = (code *)*puVar2;
    uVar3 = puVar2[1];
    uVar9 = 1;
    uVar19 = 1;
  }
  else {
LAB_018d6d48:
    iVar1 = func_0x018d66fc(param_1);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar3 = func_0x01896024(iVar1,0);
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar11;
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    piVar10 = *(int **)(_UNK_018d72e4 + 0x18d6d94);
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xf8);
          goto LAB_018d6ddc;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,7);
LAB_018d6ddc:
    (*(code *)*puVar2)(piVar11,uVar3,puVar2[1]);
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar11;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0x100);
          goto LAB_018d6e4c;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,8);
LAB_018d6e4c:
    (*(code *)*puVar2)(piVar11,(code *)*puVar2,0xffffffff,0xffffffff,puVar2[1]);
    if (piVar11 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar11;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0x118);
          goto LAB_018d6ec4;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar11,*piVar10,0xb);
LAB_018d6ec4:
    pcVar14 = (code *)*puVar2;
    uVar3 = puVar2[1];
    uVar9 = 0;
    uVar19 = 0;
  }
  (*pcVar14)(piVar11,param_3,uVar9,param_1,0,uVar19,uVar3);
LAB_018d6ef0:
  if (piVar11 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar11;
  piVar10 = *(int **)(_UNK_018d72f4 + 0x18d6f0c);
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar8 = *piVar10;
  if (uVar7 != 0) {
    piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar15[-1] == iVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xe8);
        goto LAB_018d6f54;
      }
      uVar7 = uVar7 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar11,iVar8,5);
LAB_018d6f54:
  iVar1 = (*(code *)*puVar2)(piVar11,puVar2[1]);
  if (iVar1 == 2) {
    iVar1 = *param_3;
    uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar7 != 0) {
      piVar15 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(_UNK_018d72f8 + 0x18d6f7c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar15 * 8 + 0xe0);
          goto LAB_018d7014;
        }
        uVar7 = uVar7 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(param_3,**(int **)(_UNK_018d72f8 + 0x18d6f7c),4);
LAB_018d7014:
    (*(code *)*puVar2)(param_3,puVar2[1]);
  }
  if (piVar11 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar11;
  iVar8 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar8) {
        puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xe8);
        goto LAB_018d7080;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar11,iVar8,5);
LAB_018d7080:
  iVar1 = (*(code *)*puVar2)(piVar11,puVar2[1]);
  return iVar1 == 1;
}


/* BoardItemChestSpawner.GetTimeRequiredToExitCharging VA=0x18C72FC | public override int GetTimeRequiredToExitCharging() { } */

int BoardItemChestSpawner_GetTimeRequiredToExitCharging_18C72FC(void)

{
  int iVar1;
  
  iVar1 = func_0x018d66fc();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x018935b8(iVar1,0);
  return iVar1 * 1000;
}


/* BoardItemChestSpawner.GetConfigAdaptor VA=0x18C66FC | public ChestSpawnerConfigAdaptor GetConfigAdaptor() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemChestSpawner_GetConfigAdaptor_18C66FC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_018d67ac + 0x18d6714);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d67b0 + 0x18d6728));
    func_0x0165b424(*(undefined4 *)(_UNK_018d67b4 + 0x18d6734));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_018d67b8 + 0x18d674c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x018d0ac8();
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x024fb924(iVar1,uVar4,uVar2,&uStack_14,**(undefined4 **)(_UNK_018d67bc + 0x18d6794));
  return uStack_14;
}


/* BoardItemChestSpawner.ConvertFromLocal VA=0x18C7850 | public AdaptorBase ConvertFromLocal() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemChestSpawner_ConvertFromLocal_18C7850(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_018d78a8 + 0x18d7864);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d78ac + 0x18d7878));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d78b0 + 0x18d788c));
  func_0x01895fa4(uVar1,param_1,0);
  return uVar1;
}


/* BoardItemChestSpawner.PreventStoreToInventory VA=0x18C78B4 | public override bool PreventStoreToInventory(IItemEntity itemEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemChestSpawner_PreventStoreToInventory_18C78B4(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_018d7968 + 0x18d78c8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d796c + 0x18d78dc));
    *pcVar5 = '\x01';
  }
  if (param_2 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_2;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_018d7970 + 0x18d7900)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xe8);
        goto LAB_018d7948;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_2,**(int **)(_UNK_018d7970 + 0x18d7900),5);
LAB_018d7948:
  iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
  return iVar1 == 1;
}


/* BoardItemChestSpawner.ctor VA=0x18C7974 | public void .ctor() { } */

void BoardItemChestSpawner_ctor_18C7974(undefined4 param_1)

{
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* BoardItemSpawnerData.GetConfigAdaptor VA=0x18C6300 | public SpawnerConfigAdaptor GetConfigAdaptor() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemSpawnerData_GetConfigAdaptor_18C6300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_018d63b0 + 0x18d6318);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d63b4 + 0x18d632c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d63b8 + 0x18d6338));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_018d63bc + 0x18d6350) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x018d0ac8();
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x024fb924(iVar1,uVar4,uVar2,&uStack_14,**(undefined4 **)(_UNK_018d63c0 + 0x18d6398));
  return uStack_14;
}


/* BoardItemSpawnerData.GetTimeRequiredToExitCharging VA=0x18C7D24 | public override int GetTimeRequiredToExitCharging() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardItemSpawnerData_GetTimeRequiredToExitCharging_18C7D24(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar2 = func_0x01bbac8c(0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x01bba670(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  cVar1 = *(char *)(iVar2 + 9);
  iVar2 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x14);
  if (cVar1 != '\0') {
    return iVar2 * 1000;
  }
  iVar3 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  fVar5 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  fVar4 = (fVar5 / fVar4) * _UNK_018d7e34;
  iVar2 = (int)fVar4;
  if (fVar4 == _UNK_018d7e38) {
    iVar2 = -0x80000000;
  }
  iVar3 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0xc);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  return *(int *)(iVar3 + 0xc) * iVar2;
}


/* BoardItemSpawnerData.GetTimeBetweenSmallAndBigCapacity VA=0x18C7E3C | public int GetTimeBetweenSmallAndBigCapacity() { } */

int BoardItemSpawnerData_GetTimeBetweenSmallAndBigCapacity_18C7E3C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar1 + 0x14);
  iVar1 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return iVar2 * 1000 - iVar1;
}


/* BoardItemSpawnerData.GetTutorialItem VA=0x18C7FD0 | public SpawnedItem GetTutorialItem(ItemEntity itemEntity, TutorialIndex activeTutorialStep) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemSpawnerData_GetTutorialItem_18C7FD0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  
  pbVar3 = (byte *)(_UNK_018d8140 + 0x18d7fec);
  uVar1 = (uint)*pbVar3;
  if (uVar1 == 0) {
    func_0x0165b424(*(undefined4 *)(_UNK_018d8144 + 0x18d8000));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8148 + 0x18d800c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d814c + 0x18d8018));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8150 + 0x18d8024));
    uVar1 = 1;
    *pbVar3 = 1;
  }
  if (param_2 == 0) {
    uVar1 = func_0x0165b6e0();
  }
  iVar4 = *(int *)(param_2 + 0x48);
  uVar5 = 0;
  if (iVar4 != 0) {
    uVar1 = (uint)*(byte *)(iVar4 + 0xc);
  }
  if (iVar4 != 0 && uVar1 != 0) {
    iVar2 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0xc);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar4 + 8) < *(int *)(iVar2 + 0xc)) {
      uVar5 = func_0x02b0af9c(iVar2,*(int *)(iVar4 + 8),**(undefined4 **)(_UNK_018d8154 + 0x18d80ac)
                             );
      if (param_3 == 0x14) {
        if (8 < *(int *)(iVar4 + 8)) {
          return 0;
        }
      }
      else if (param_3 == 0xb) {
        if (7 < *(int *)(iVar4 + 8)) {
          return 0;
        }
      }
      else if ((param_3 == 7) && (3 < *(int *)(iVar4 + 8))) {
        return 0;
      }
      func_0x018d8160(param_1,param_2);
      if (*(int *)(**(int **)(_UNK_018d8158 + 0x18d8114) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      func_0x018b4544(**(undefined4 **)(_UNK_018d815c + 0x18d8134),0);
    }
  }
  return uVar5;
}


/* BoardItemSpawnerData.ConsumeTutorialItem VA=0x18C8160 | public void ConsumeTutorialItem(ItemEntity itemEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardItemSpawnerData_ConsumeTutorialItem_18C8160(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  float fVar8;
  
  pbVar6 = (byte *)(_UNK_018d8278 + 0x18d8178);
  uVar1 = (uint)*pbVar6;
  if (uVar1 == 0) {
    func_0x0165b424(*(undefined4 *)(_UNK_018d827c + 0x18d818c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8280 + 0x18d8198));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8284 + 0x18d81a4));
    uVar1 = 1;
    *pbVar6 = 1;
  }
  if (param_2 == 0) {
    uVar1 = func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_2 + 0x48);
  if (iVar7 != 0) {
    uVar1 = (uint)*(byte *)(iVar7 + 0xc);
  }
  if (iVar7 == 0 || uVar1 == 0) {
    return;
  }
  fVar8 = *(float *)(param_2 + 0x28);
  *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1;
  *(float *)(param_2 + 0x28) = fVar8 + 1.0;
  iVar2 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x28);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar2 + 0xc) <= *(int *)(iVar7 + 8)) {
    piVar3 = *(int **)(_UNK_018d8288 + 0x18d8248);
    *(undefined4 *)(iVar7 + 8) = 0xffffffff;
    *(undefined1 *)(iVar7 + 0xc) = 0;
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar4 = **(undefined4 **)(_UNK_018d828c + 0x18d8270);
    pcVar5 = (char *)(_UNK_018b4538 + 0x18b44b0);
    if (*pcVar5 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_018b453c + 0x18b44c4),0);
      *pcVar5 = '\x01';
    }
    piVar3 = *(int **)(_UNK_018b4540 + 0x18b44d8);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar7 = func_0x018b3dac();
    if (iVar7 != 0) {
      iVar7 = *piVar3;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar7 = *piVar3;
      }
      iVar2 = **(int **)(iVar7 + 0x5c);
      iVar7 = (*(int **)(iVar7 + 0x5c))[1];
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      (*(code *)&UNK_0570a634)(iVar2,iVar7,uVar4,0);
      return;
    }
    return;
  }
  return;
}


/* BoardItemSpawnerData.Initialize VA=0x18C8290 | public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardItemSpawnerData_Initialize_18C8290
          (int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  
  pcVar10 = (char *)(_UNK_018d8968 + 0x18d82b4);
  if (*pcVar10 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d896c + 0x18d82c8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8970 + 0x18d82d4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8974 + 0x18d82e0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8978 + 0x18d82ec));
    func_0x0165b424(*(undefined4 *)(_UNK_018d897c + 0x18d82f8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8980 + 0x18d8304));
    func_0x0165b424(*(undefined4 *)(_UNK_018d8984 + 0x18d8310));
    *pcVar10 = '\x01';
  }
  if (param_3 == (int *)0x0) {
    if (*(int *)(**(int **)(_UNK_018d8988 + 0x18d8378) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar12 = 0;
    func_0x018b45f0(**(undefined4 **)(_UNK_018d898c + 0x18d839c),0);
  }
  else {
    iVar1 = *param_3;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_018d8990 + 0x18d8330)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
          goto LAB_018d83b0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(param_3,**(int **)(_UNK_018d8990 + 0x18d8330),1);
LAB_018d83b0:
    piVar6 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
    uVar12 = 0;
    if (piVar6 != (int *)0x0) {
      iVar1 = *piVar6;
      piVar13 = *(int **)(_UNK_018d8994 + 0x18d83e0);
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar7[-1] == *piVar13) {
            puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
            goto LAB_018d8428;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,0);
LAB_018d8428:
      piVar7 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      if (piVar7 != (int *)0x0) {
        if (*(int *)(**(int **)(_UNK_018d8998 + 0x18d8450) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        uVar17 = func_0x018b98a8(0);
        iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar7;
        uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
        uVar12 = *(undefined4 *)(iVar1 + 0x30);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == **(int **)(_UNK_018d899c + 0x18d84a8)) {
              puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0x108);
              goto LAB_018d84f4;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_018d899c + 0x18d84a8),9);
LAB_018d84f4:
        (*(code *)*puVar2)(piVar7,uVar12,puVar2[1]);
        iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        uVar12 = *(undefined4 *)(iVar1 + 0x14);
        iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        fVar15 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
        fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x10),
                                            (byte)(in_fpscr >> 0x16) & 3);
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        fVar14 = (fVar15 / fVar14) * _UNK_018d8960;
        uVar4 = in_fpscr & 0xfffffff | (uint)(fVar14 == _UNK_018d8964) << 0x1e;
        iVar1 = (int)fVar14;
        if (SUB41(uVar4 >> 0x1e,0)) {
          iVar1 = -0x80000000;
        }
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xd0);
              goto LAB_018d85e0;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,2);
LAB_018d85e0:
        (*(code *)*puVar2)(piVar6,iVar1,puVar2[1]);
        uVar12 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xd8);
              goto LAB_018d865c;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,3);
LAB_018d865c:
        (*(code *)*puVar2)(piVar6,uVar12,puVar2[1]);
        iVar1 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 200);
              goto LAB_018d86c4;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,1);
LAB_018d86c4:
        uVar5 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        iVar1 = *piVar6;
        uVar9 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar9 != 0) {
          piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xe0);
              goto LAB_018d872c;
            }
            uVar9 = uVar9 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar9 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,4);
LAB_018d872c:
        (*(code *)*puVar2)(piVar6,(code *)*puVar2,(uint)uVar17 + uVar5,
                           (int)((ulonglong)uVar17 >> 0x20) + ((int)uVar5 >> 0x1f) +
                           (uint)CARRY4((uint)uVar17,uVar5),puVar2[1]);
        iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        uVar12 = *(undefined4 *)(iVar1 + 0x18);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar8[-1] == *piVar13) {
              puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xf0);
              goto LAB_018d87c8;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 2;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(piVar6,*piVar13,6);
LAB_018d87c8:
        piVar13 = *(int **)(_UNK_018d89a0 + 0x18d87d8);
        (*(code *)*puVar2)(piVar6,uVar12,puVar2[1]);
        if (param_7 == 0) {
          BoardItemSpawnerData_ProcessOfflineCapacity_18C8A80(param_1,param_3,param_5,param_6,0);
          uVar12 = 1;
        }
        else {
          iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar1 = func_0x018d89ac(param_1,*(undefined4 *)(iVar1 + 0x2c));
          if (iVar1 == 0) {
            iVar3 = *piVar7;
            uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
              do {
                if (piVar6[-1] == **(int **)(_UNK_018d89a4 + 0x18d883c)) {
                  puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0x110);
                  goto LAB_018d88a8;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar5 != 0);
            }
            puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_018d89a4 + 0x18d883c),10);
LAB_018d88a8:
            (*(code *)*puVar2)(piVar7,param_1,puVar2[1]);
          }
          iVar3 = *param_3;
          uVar16 = VectorSignedToFloat(iVar1,(byte)(uVar4 >> 0x16) & 3);
          uVar4 = (uint)*(ushort *)(iVar3 + 0xb6);
          uVar11 = **(undefined4 **)(_UNK_018d89a8 + 0x18d88d4);
          if (uVar4 != 0) {
            piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
            do {
              if (piVar6[-1] == *piVar13) {
                puVar2 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
                goto LAB_018d8920;
              }
              uVar4 = uVar4 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined4 *)func_0x016cc99c(param_3,*piVar13,2);
LAB_018d8920:
          uVar12 = 1;
          (*(code *)*puVar2)(param_3,param_1,uVar16,0,0,uVar11,1,puVar2[1]);
        }
      }
    }
  }
  return uVar12;
}


/* BoardItemSpawnerData.GetStartCapacity VA=0x18C89AC | public int GetStartCapacity(SpawnerState startState) { } */

undefined4 BoardItemSpawnerData_GetStartCapacity_18C89AC(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = func_0x01bbac8c(0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x01bba670(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = param_2;
  if (*(char *)(iVar1 + 9) != '\0') {
    iVar2 = 2;
  }
  if (param_2 != 1) {
    iVar2 = param_2;
  }
  if (iVar2 == 2) {
    iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    puVar3 = (undefined4 *)(iVar1 + 0x10);
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    puVar3 = (undefined4 *)(iVar1 + 0xc);
  }
  return *puVar3;
}


/* BoardItemSpawnerData.IsUseEnergySprite VA=0x18C8EB4 | public bool IsUseEnergySprite() { } */

undefined1 BoardItemSpawnerData_IsUseEnergySprite_18C8EB4(void)

{
  int iVar1;
  
  iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  return *(undefined1 *)(iVar1 + 8);
}


/* BoardItemSpawnerData.ConvertFromLocal VA=0x18C8EE4 | public AdaptorBase ConvertFromLocal() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemSpawnerData_ConvertFromLocal_18C8EE4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_018d8f38 + 0x18d8ef8);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d8f3c + 0x18d8f0c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d8f40 + 0x18d8f20));
  func_0x018d0888(uVar1,param_1);
  return uVar1;
}


/* BoardItemSpawnerData.ctor VA=0x18C63CC | protected void .ctor() { } */

void BoardItemSpawnerData_ctor_18C63CC(undefined4 param_1)

{
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* BoardItemData.Initialize VA=0x18C8F8C | public virtual bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated, float capacity) { } */

undefined4 BoardItemData_Initialize_18C8F8C(void)

{
  return 0;
}


/* BoardItemData.OverrideImage VA=0x18C8F94 | public void OverrideImage(Sprite image) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardItemData_OverrideImage_18C8F94(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  *puVar3 = param_2;
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* BoardItemData.GetStringValue VA=0x18BD150 | public string GetStringValue() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardItemData_GetStringValue_18BD150(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_018cd1d4 + 0x18cd168);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018cd1d8 + 0x18cd17c));
    *pcVar3 = '\x01';
  }
  uStack_14 = func_0x01918650(*(undefined4 *)(param_1 + 0x18),0);
  uVar1 = func_0x017200c4(&uStack_14,0);
  uVar2 = func_0x017200c4(param_1 + 0x1c,0);
  func_0x01701168(uVar1,**(undefined4 **)(_UNK_018cd1dc + 0x18cd1c4),uVar2,0);
  return;
}


/* BoardItemData.GetSpawnedItems VA=0x18C8F9C | public List<SpawnedItem> GetSpawnedItems(bool useOriginalSetID = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardItemData_GetSpawnedItems_18C8F9C(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r4;
  int *piVar7;
  undefined4 uVar8;
  int unaff_r5;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_1c;
  int in_stack_ffffffe8;
  
  pcVar9 = (char *)(_UNK_018d915c + 0x18d8fb4);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9160 + 0x18d8fc8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9164 + 0x18d8fd4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9168 + 0x18d8fe0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d916c + 0x18d8fec));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9170 + 0x18d8ff8));
    *pcVar9 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar5 = (uint)*(byte *)(**(int **)(_UNK_018d9174 + 0x18d9014) + 0xb8);
  uVar4 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar4 < uVar5) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_018d9174 + 0x18d9014))) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_018d9178 + 0x18d9048) + 0xb8);
    if ((uVar4 < uVar5) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_018d9178 + 0x18d9048)))
    {
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_018d917c + 0x18d9074) + 0xb8);
      if ((uVar5 <= uVar4) &&
         (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_018d917c + 0x18d9074))
         ) {
        pcVar9 = (char *)(_UNK_018d953c + 0x18d91a4);
        if (*pcVar9 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_018d9540 + 0x18d91b8));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9544 + 0x18d91c4));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9548 + 0x18d91d0));
          func_0x0165b424(*(undefined4 *)(_UNK_018d954c + 0x18d91dc));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9550 + 0x18d91e8));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9554 + 0x18d91f4));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9558 + 0x18d9200));
          func_0x0165b424(*(undefined4 *)(_UNK_018d955c + 0x18d920c));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9560 + 0x18d9218));
          *pcVar9 = '\x01';
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d9564 + 0x18d9234));
        func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_018d9568 + 0x18d924c));
        if (param_1 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar6 = func_0x018da050(param_1);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = func_0x018cf02c(iVar6,param_2);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        func_0x02b0bf88(&uStack_48,iVar6,**(undefined4 **)(_UNK_018d956c + 0x18d92ac));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar10 = *(undefined4 **)(_UNK_018d9570 + 0x18d92c8);
        piVar7 = *(int **)(_UNK_018d9574 + 0x18d92d0);
        while (iVar6 = func_0x01710964(&uStack_38,*puVar10), uVar8 = uStack_2c, iVar6 != 0) {
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar6 = *(int *)(iVar1 + 8);
          uVar4 = *(uint *)(iVar1 + 0xc);
          iVar11 = *piVar7;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (iVar6 == 0) {
            func_0x0165b6e0();
          }
          if (uVar4 < *(uint *)(iVar6 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar4 + 1;
            puVar2 = (undefined4 *)(iVar6 + uVar4 * 4 + 0x10);
            *puVar2 = uVar8;
            func_0x0165b3c0(puVar2,uVar8);
          }
          else {
            func_0x02b0b274(iVar1,uVar8,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_018d9578 + 0x18d9364));
        if (param_1 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar6 = func_0x018da050(param_1);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        uVar8 = *(undefined4 *)(iVar6 + 0x10);
        if (*(int *)(**(int **)(_UNK_018d9580 + 0x18d93a0) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar6 = func_0x026f7720(uVar8,0,0);
        if (iVar6 != 0) {
          iVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d9584 + 0x18d93d8));
          func_0x026f769c(iVar6,0);
          if (iVar6 == 0) {
            func_0x0165b6e0();
          }
          *(undefined1 *)(iVar6 + 0x10) = 0;
          if (param_1 == (int *)0x0) {
            func_0x0165b6e0();
          }
          iVar11 = func_0x018da050(param_1);
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar11 + 0x10);
          func_0x0165b3c0((undefined4 *)(iVar6 + 8));
          *(undefined4 *)(iVar6 + 0xc) = 0;
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar11 = *(int *)(iVar1 + 8);
          uVar4 = *(uint *)(iVar1 + 0xc);
          iVar12 = *piVar7;
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          if (iVar11 == 0) {
            func_0x0165b6e0();
          }
          if (uVar4 < *(uint *)(iVar11 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar4 + 1;
            piVar7 = (int *)(iVar11 + uVar4 * 4 + 0x10);
            *piVar7 = iVar6;
            func_0x0165b3c0(piVar7,iVar6);
          }
          else {
            func_0x02b0b274(iVar1,iVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
          }
        }
        return iVar1;
      }
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_018d9180 + 0x18d90a0) + 0xb8);
      if ((uVar5 <= uVar4) &&
         (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) == **(int **)(_UNK_018d9180 + 0x18d90a0))
         ) {
        pcVar9 = (char *)(_UNK_018d9804 + 0x18d95a4);
        if (*pcVar9 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_018d9808 + 0x18d95b8));
          func_0x0165b424(*(undefined4 *)(_UNK_018d980c + 0x18d95c4));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9810 + 0x18d95d0));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9814 + 0x18d95dc));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9818 + 0x18d95e8));
          func_0x0165b424(*(undefined4 *)(_UNK_018d981c + 0x18d95f4));
          func_0x0165b424(*(undefined4 *)(_UNK_018d9820 + 0x18d9600));
          *pcVar9 = '\x01';
        }
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_30 = 0;
        iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d9824 + 0x18d961c));
        func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_018d9828 + 0x18d9634));
        piVar7 = *(int **)(_UNK_018d982c + 0x18d9648);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          func_0x0165b5a4();
        }
        pcVar9 = (char *)(_UNK_018d9830 + 0x18d9664);
        if (*pcVar9 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_018d9834 + 0x18d9678));
          *pcVar9 = '\x01';
        }
        iVar6 = *piVar7;
        if (*(int *)(iVar6 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar6 = *piVar7;
        }
        iVar6 = **(int **)(iVar6 + 0x5c);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *(int *)(iVar6 + 0x9c);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *(int *)(iVar6 + 0x10);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar11 = *(int *)(iVar6 + 0x1c);
        iVar6 = func_0x018dc560(param_1);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *(int *)(iVar6 + 0x14);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        func_0x02b0bf88(&uStack_30,iVar6,**(undefined4 **)(_UNK_018d9838 + 0x18d970c));
        puVar10 = *(undefined4 **)(_UNK_018d983c + 0x18d9724);
        iVar6 = 0;
        while (iVar3 = func_0x01710964(&uStack_30,*puVar10), iVar12 = iStack_24, iVar3 != 0) {
          if (iStack_24 == 0) {
            func_0x0165b6e0();
          }
          iVar3 = *(int *)(iVar12 + 8);
          if ((iVar3 <= iVar11) && (iVar6 < iVar3)) {
            iVar1 = *(int *)(iVar12 + 0xc);
            iVar6 = iVar3;
          }
        }
        func_0x0172cd54(&uStack_30,**(undefined4 **)(_UNK_018d9840 + 0x18d976c));
        return iVar1;
      }
      uVar5 = (uint)*(byte *)(**(int **)(_UNK_018d9184 + 0x18d90cc) + 0xb8);
      if (uVar4 < uVar5) {
        return 0;
      }
      if (*(int *)(*(int *)(iVar1 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_018d9184 + 0x18d90cc))
      {
        return 0;
      }
      iVar1 = BoardItemChestSpawner_GetConfigAdaptor_18C66FC(param_1);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      pcVar9 = (char *)(_UNK_01896258 + 0x1896124);
      if (*pcVar9 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_0189625c + 0x1896138),0);
        func_0x0165b424(*(undefined4 *)(_UNK_01896260 + 0x1896144));
        func_0x0165b424(*(undefined4 *)(_UNK_01896264 + 0x1896150));
        *pcVar9 = '\x01';
      }
      func_0x01895704(&uStack_1c,iVar1);
      if ((uStack_1c & 1) == 0) {
        iVar6 = *(int *)(iVar1 + 0xc);
        if (iVar6 == 0) {
          func_0x0165b6e0();
        }
        in_stack_ffffffe8 = *(int *)(iVar6 + 0x20);
        iVar6 = func_0x01ccee88(*(undefined4 *)(iVar1 + 8),&stack0xffffffec,0);
        if (iVar6 != 0) {
          in_stack_ffffffe8 = func_0x0165b6d4(**(undefined4 **)(_UNK_01896268 + 0x18961b0));
          func_0x02b0a9f0(in_stack_ffffffe8,**(undefined4 **)(_UNK_0189626c + 0x18961c4));
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          uVar8 = *(undefined4 *)(iVar1 + 0x20);
          if (in_stack_ffffffe8 == 0) {
            func_0x0165b6e0();
            func_0x02b0b494(0,uVar8,**(undefined4 **)(_UNK_01896274 + 0x1896224));
            func_0x0165b6e0();
          }
          else {
            func_0x02b0b494(in_stack_ffffffe8,uVar8,**(undefined4 **)(_UNK_01896270 + 0x18961f8));
          }
          func_0x02b0b494(in_stack_ffffffe8,0,**(undefined4 **)(_UNK_01896278 + 0x1896244));
        }
      }
      return in_stack_ffffffe8;
    }
  }
  iVar1 = BoardItemSpawnerData_GetConfigAdaptor_18C6300(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x01895704(&stack0xfffffff0,iVar1,0);
  if ((unaff_r4 & 1) == 0) {
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    unaff_r5 = *(int *)(iVar1 + 0x24);
  }
  return unaff_r5;
}


/* BoardItemData.IsNormalAutoPerishableSpawner VA=0x18C984C | public bool IsNormalAutoPerishableSpawner() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_IsNormalAutoPerishableSpawner_18C984C(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_018d993c + 0x18d9860);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9940 + 0x18d9874));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9944 + 0x18d9880));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9948 + 0x18d988c));
    *pcVar3 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d994c + 0x18d98ac) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d994c + 0x18d98ac))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9950 + 0x18d98e0) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9950 + 0x18d98e0)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9954 + 0x18d990c) + 0xb8);
      if (uVar2 < uVar4) {
        return false;
      }
      return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
             **(int **)(_UNK_018d9954 + 0x18d990c);
    }
  }
  return true;
}


/* BoardItemData.StoreInventoryRemainingTime VA=0x18C9958 | public bool StoreInventoryRemainingTime() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_StoreInventoryRemainingTime_18C9958(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_018d9a48 + 0x18d996c);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9a4c + 0x18d9980));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9a50 + 0x18d998c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9a54 + 0x18d9998));
    *pcVar3 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9a58 + 0x18d99b8) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9a58 + 0x18d99b8))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9a5c + 0x18d99ec) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9a5c + 0x18d99ec)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9a60 + 0x18d9a18) + 0xb8);
      if (uVar2 < uVar4) {
        return false;
      }
      return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
             **(int **)(_UNK_018d9a60 + 0x18d9a18);
    }
  }
  return true;
}


/* BoardItemData.IsCollectableOrSpawner VA=0x18C9A64 | public bool IsCollectableOrSpawner() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_IsCollectableOrSpawner_18C9A64(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_018d9bfc + 0x18d9a78);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c00 + 0x18d9a8c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c04 + 0x18d9a98));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c08 + 0x18d9aa4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c0c + 0x18d9ab0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c10 + 0x18d9abc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9c14 + 0x18d9ac8));
    *pcVar3 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c18 + 0x18d9ae8) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9c18 + 0x18d9ae8))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c1c + 0x18d9b1c) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9c1c + 0x18d9b1c)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c20 + 0x18d9b48) + 0xb8);
      if ((uVar2 < uVar4) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9c20 + 0x18d9b48))
         ) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c24 + 0x18d9b74) + 0xb8);
        if ((uVar2 < uVar4) ||
           (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) !=
            **(int **)(_UNK_018d9c24 + 0x18d9b74))) {
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c28 + 0x18d9ba0) + 0xb8);
          if ((uVar2 < uVar4) ||
             (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) !=
              **(int **)(_UNK_018d9c28 + 0x18d9ba0))) {
            uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9c2c + 0x18d9bcc) + 0xb8);
            if (uVar2 < uVar4) {
              return false;
            }
            return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
                   **(int **)(_UNK_018d9c2c + 0x18d9bcc);
          }
        }
      }
    }
  }
  return true;
}


/* BoardItemData.IsAutoSpawner VA=0x18C9C30 | public bool IsAutoSpawner() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_IsAutoSpawner_18C9C30(int *param_1)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_018d9ca8 + 0x18d9c44);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9cac + 0x18d9c58));
    *pcVar3 = '\x01';
  }
  bVar1 = false;
  if (param_1 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_018d9cb0 + 0x18d9c78) + 0xb8);
    if (uVar2 <= *(byte *)(*param_1 + 0xb8)) {
      bVar1 = *(int *)(*(int *)(*param_1 + 100) + uVar2 * 4 + -4) ==
              **(int **)(_UNK_018d9cb0 + 0x18d9c78);
    }
  }
  return bVar1;
}


/* BoardItemData.CanSpawn VA=0x18C4884 | public bool CanSpawn() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_CanSpawn_18C4884(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_018d49ac + 0x18d4898);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b0 + 0x18d48ac));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b4 + 0x18d48b8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b8 + 0x18d48c4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49bc + 0x18d48d0));
    *pcVar3 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c0 + 0x18d48f0) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c0 + 0x18d48f0))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c4 + 0x18d4924) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c4 + 0x18d4924)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c8 + 0x18d4950) + 0xb8);
      if ((uVar2 < uVar4) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c8 + 0x18d4950))
         ) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49cc + 0x18d497c) + 0xb8);
        if (uVar2 < uVar4) {
          return false;
        }
        return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
               **(int **)(_UNK_018d49cc + 0x18d497c);
      }
    }
  }
  return true;
}


/* BoardItemData.CanSpawnWithoutChest VA=0x18C9CB4 | public bool CanSpawnWithoutChest() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_CanSpawnWithoutChest_18C9CB4(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_018d9da4 + 0x18d9cc8);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9da8 + 0x18d9cdc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9dac + 0x18d9ce8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9db0 + 0x18d9cf4));
    *pcVar3 = '\x01';
  }
  if (param_1 == (int *)0x0) {
    return false;
  }
  iVar1 = *param_1;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9db4 + 0x18d9d14) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9db4 + 0x18d9d14))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9db8 + 0x18d9d48) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9db8 + 0x18d9d48)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9dbc + 0x18d9d74) + 0xb8);
      if (uVar2 < uVar4) {
        return false;
      }
      return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
             **(int **)(_UNK_018d9dbc + 0x18d9d74);
    }
  }
  return true;
}


/* BoardItemData.IsSpawnerPart VA=0x18C9DC0 | public bool IsSpawnerPart() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_IsSpawnerPart_18C9DC0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_018d9eec + 0x18d9dd4);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9ef0 + 0x18d9de8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9ef4 + 0x18d9df4));
    *pcVar5 = '\x01';
  }
  iVar1 = BoardItemData_CanSpawn_18C4884(param_1);
  if (iVar1 != 0) {
    return true;
  }
  piVar6 = *(int **)(_UNK_018d9ef8 + 0x18d9e20);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar5 = (char *)(_UNK_018d9efc + 0x18d9e3c);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9f00 + 0x18d9e50));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar6;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x0191b578(iVar1,uVar3,0,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = (int *)func_0x0243ff4c(*(undefined4 *)(iVar1 + 0x14),
                                  **(undefined4 **)(_UNK_018d9f04 + 0x18d9ec8));
  if (piVar6 == (int *)0x0) {
    func_0x0165b6e0();
  }
  pcVar5 = (char *)(_UNK_018d49ac + 0x18d4898);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b0 + 0x18d48ac));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b4 + 0x18d48b8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49b8 + 0x18d48c4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d49bc + 0x18d48d0));
    *pcVar5 = '\x01';
  }
  if (piVar6 == (int *)0x0) {
    return false;
  }
  iVar1 = *piVar6;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c0 + 0x18d48f0) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c0 + 0x18d48f0))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c4 + 0x18d4924) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c4 + 0x18d4924)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49c8 + 0x18d4950) + 0xb8);
      if ((uVar2 < uVar4) ||
         (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d49c8 + 0x18d4950))
         ) {
        uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d49cc + 0x18d497c) + 0xb8);
        if (uVar2 < uVar4) {
          return false;
        }
        return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
               **(int **)(_UNK_018d49cc + 0x18d497c);
      }
    }
  }
  return true;
}


/* BoardItemData.IsSpawnerPartWithoutChest VA=0x18C9F08 | public bool IsSpawnerPartWithoutChest() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardItemData_IsSpawnerPartWithoutChest_18C9F08(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_018da034 + 0x18d9f1c);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da038 + 0x18d9f30));
    func_0x0165b424(*(undefined4 *)(_UNK_018da03c + 0x18d9f3c));
    *pcVar5 = '\x01';
  }
  iVar1 = BoardItemData_CanSpawnWithoutChest_18C9CB4(param_1);
  if (iVar1 != 0) {
    return true;
  }
  piVar6 = *(int **)(_UNK_018da040 + 0x18d9f68);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar5 = (char *)(_UNK_018da044 + 0x18d9f84);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da048 + 0x18d9f98));
    *pcVar5 = '\x01';
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar6;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x0191b578(iVar1,uVar3,0,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = (int *)func_0x0243ff4c(*(undefined4 *)(iVar1 + 0x14),
                                  **(undefined4 **)(_UNK_018da04c + 0x18da010));
  if (piVar6 == (int *)0x0) {
    func_0x0165b6e0();
  }
  pcVar5 = (char *)(_UNK_018d9da4 + 0x18d9cc8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9da8 + 0x18d9cdc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9dac + 0x18d9ce8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9db0 + 0x18d9cf4));
    *pcVar5 = '\x01';
  }
  if (piVar6 == (int *)0x0) {
    return false;
  }
  iVar1 = *piVar6;
  uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9db4 + 0x18d9d14) + 0xb8);
  uVar2 = (uint)*(byte *)(iVar1 + 0xb8);
  if ((uVar2 < uVar4) ||
     (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9db4 + 0x18d9d14))) {
    uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9db8 + 0x18d9d48) + 0xb8);
    if ((uVar2 < uVar4) ||
       (*(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) != **(int **)(_UNK_018d9db8 + 0x18d9d48)))
    {
      uVar4 = (uint)*(byte *)(**(int **)(_UNK_018d9dbc + 0x18d9d74) + 0xb8);
      if (uVar2 < uVar4) {
        return false;
      }
      return *(int *)(*(int *)(iVar1 + 100) + uVar4 * 4 + -4) ==
             **(int **)(_UNK_018d9dbc + 0x18d9d74);
    }
  }
  return true;
}


/* BoardItemData.GetPerishableSpawnedItems VA=0x18C9188 | public List<SpawnedItem> GetPerishableSpawnedItems(BoardItemPerishableSpawner perishableSpawner, bool useOriginalSetID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardItemData_GetPerishableSpawnedItems_18C9188
              (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_018d953c + 0x18d91a4);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018d9540 + 0x18d91b8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9544 + 0x18d91c4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9548 + 0x18d91d0));
    func_0x0165b424(*(undefined4 *)(_UNK_018d954c + 0x18d91dc));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9550 + 0x18d91e8));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9554 + 0x18d91f4));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9558 + 0x18d9200));
    func_0x0165b424(*(undefined4 *)(_UNK_018d955c + 0x18d920c));
    func_0x0165b424(*(undefined4 *)(_UNK_018d9560 + 0x18d9218));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d9564 + 0x18d9234));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_018d9568 + 0x18d924c));
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018da050(param_2);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018cf02c(iVar2,param_3);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_48,iVar2,**(undefined4 **)(_UNK_018d956c + 0x18d92ac));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  puVar10 = *(undefined4 **)(_UNK_018d9570 + 0x18d92c8);
  piVar7 = *(int **)(_UNK_018d9574 + 0x18d92d0);
  while (iVar2 = func_0x01710964(&uStack_38,*puVar10), uVar6 = uStack_2c, iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    iVar9 = *piVar7;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (uVar5 < *(uint *)(iVar2 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      puVar3 = (undefined4 *)(iVar2 + uVar5 * 4 + 0x10);
      *puVar3 = uVar6;
      func_0x0165b3c0(puVar3,uVar6);
    }
    else {
      func_0x02b0b274(iVar1,uVar6,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_018d9578 + 0x18d9364));
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018da050(param_2);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x10);
  if (*(int *)(**(int **)(_UNK_018d9580 + 0x18d93a0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x026f7720(uVar6,0,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_018d9584 + 0x18d93d8));
    func_0x026f769c(iVar2,0);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    *(undefined1 *)(iVar2 + 0x10) = 0;
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = func_0x018da050(param_2);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar9 + 0x10);
    func_0x0165b3c0((undefined4 *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar1 + 8);
    uVar5 = *(uint *)(iVar1 + 0xc);
    iVar8 = *piVar7;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (uVar5 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar1 + 0xc) = uVar5 + 1;
      piVar7 = (int *)(iVar9 + uVar5 * 4 + 0x10);
      *piVar7 = iVar2;
      func_0x0165b3c0(piVar7,iVar2);
    }
    else {
      func_0x02b0b274(iVar1,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
    }
  }
  return iVar1;
}


/* BoardItemData.IsDefaultBoardFeature VA=0x18CA114 | public bool IsDefaultBoardFeature() { } */

bool BoardItemData_IsDefaultBoardFeature_18CA114(int param_1)

{
  return *(int *)(param_1 + 0x24) != 0 && *(int *)(param_1 + 0x24) < 10000;
}


/* BoardItemData.IsBoardEventFeature VA=0x18CA138 | public bool IsBoardEventFeature() { } */

bool BoardItemData_IsBoardEventFeature_18CA138(int param_1)

{
  return 9999 < *(int *)(param_1 + 0x24);
}


/* BoardItemData.IsCardCollectionItem VA=0x18CA150 | public virtual bool IsCardCollectionItem() { } */

undefined4 BoardItemData_IsCardCollectionItem_18CA150(void)

{
  return 0;
}


/* BoardItemData.IsRecurringEventFeature VA=0x18CA158 | public bool IsRecurringEventFeature() { } */

bool BoardItemData_IsRecurringEventFeature_18CA158(int param_1)

{
  return *(int *)(param_1 + 0x24) - 1U < 99;
}


/* BoardItemData.IsDailyChallengeFeature VA=0x18CA170 | public bool IsDailyChallengeFeature() { } */

bool BoardItemData_IsDailyChallengeFeature_18CA170(int param_1)

{
  return *(int *)(param_1 + 0x24) - 100U < 100;
}


/* BoardItemData.PreventStoreToInventory VA=0x18CA1A0 | public virtual bool PreventStoreToInventory(IItemEntity itemEntity) { } */

undefined4 BoardItemData_PreventStoreToInventory_18CA1A0(void)

{
  return 0;
}


/* BoardItemData.IsSpawnableFromRewardArea VA=0x18CA1A8 | public virtual bool IsSpawnableFromRewardArea() { } */

undefined4 BoardItemData_IsSpawnableFromRewardArea_18CA1A8(void)

{
  return 1;
}


/* BoardItemData.CanThrownIntoBoard VA=0x18CA1B0 | public virtual bool CanThrownIntoBoard() { } */

undefined4 BoardItemData_CanThrownIntoBoard_18CA1B0(void)

{
  return 1;
}


/* BoardItemData.IsDraggable VA=0x18CA1B8 | public virtual bool IsDraggable() { } */

undefined4 BoardItemData_IsDraggable_18CA1B8(void)

{
  return 1;
}


/* BoardItemData.IsClickable VA=0x18CA1C0 | public virtual bool IsClickable() { } */

undefined4 BoardItemData_IsClickable_18CA1C0(void)

{
  return 1;
}


/* BoardItemData.OpenBadgeAtMaxLevel VA=0x18CA1C8 | public virtual bool OpenBadgeAtMaxLevel() { } */

undefined4 BoardItemData_OpenBadgeAtMaxLevel_18CA1C8(void)

{
  return 1;
}


/* BoardItemData.ctor VA=0x18C655C | protected void .ctor() { } */

void BoardItemData_ctor_18C655C(undefined4 param_1)

{
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* BoardItemPerishableSpawner.GetConfigAdaptor VA=0x18CA050 | public PerishableSpawnerConfigAdaptor GetConfigAdaptor() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemPerishableSpawner_GetConfigAdaptor_18CA050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_018da100 + 0x18da068);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da104 + 0x18da07c));
    func_0x0165b424(*(undefined4 *)(_UNK_018da108 + 0x18da088));
    *pcVar3 = '\x01';
  }
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_018da10c + 0x18da0a0) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x018d0ac8();
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x024fb924(iVar1,uVar4,uVar2,&uStack_14,**(undefined4 **)(_UNK_018da110 + 0x18da0e8));
  return uStack_14;
}


/* BoardItemPerishableSpawner.GetNonProbabilisticItem VA=0x18CA220 | public SpawnedItem GetNonProbabilisticItem(int currentCapacity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardItemPerishableSpawner_GetNonProbabilisticItem_18CA220(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_018da300 + 0x18da238);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da304 + 0x18da24c));
    func_0x0165b424(*(undefined4 *)(_UNK_018da308 + 0x18da258));
    *pcVar5 = '\x01';
  }
  iVar1 = BoardItemPerishableSpawner_GetConfigAdaptor_18CA050(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x018cf02c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = *(int *)(iVar1 + 0xc);
  iVar1 = BoardItemPerishableSpawner_GetConfigAdaptor_18CA050(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  param_2 = iVar6 - param_2;
  iVar1 = func_0x018cf02c(iVar1,0);
  uVar4 = extraout_r3;
  if (iVar1 == 0) {
    func_0x0165b6e0();
    uVar4 = extraout_r3_00;
  }
  iVar2 = iVar6;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  if (iVar6 < param_2) {
    iVar2 = iVar6;
  }
  uVar3 = iVar2 - 1;
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x048d8a1c(0,uVar3,**(undefined4 **)(_UNK_018da30c + 0x18da2e0),uVar4,unaff_r4,unaff_r5,
                    unaff_r11,unaff_lr);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (*(uint *)(iVar1 + 0xc) <= uVar3) {
    func_0x0165b6e4();
  }
  return *(undefined4 *)(iVar1 + uVar3 * 4 + 0x10);
}


/* BoardItemPerishableSpawner.GetIndexedSpawnedItem VA=0x18CA310 | public SpawnedItem GetIndexedSpawnedItem(int currentCapacity) { } */

/* WARNING: Possible PIC construction at 0x018da448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x018da44c) */
/* WARNING: Removing unreachable block (ram,0x018da458) */
/* WARNING: Removing unreachable block (ram,0x018da4e4) */
/* WARNING: Removing unreachable block (ram,0x018da478) */
/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * BoardItemPerishableSpawner_GetIndexedSpawnedItem_18CA310(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int extraout_r2;
  uint uVar12;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar13;
  int *piVar14;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  char *pcVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_1a8 [62];
  int iStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  int *piStack_a4;
  undefined8 uStack_a0;
  code *pcStack_98;
  int *piStack_94;
  char cStack_8d;
  int *piStack_8c;
  int *piStack_84;
  int *piStack_80;
  uint uStack_7c;
  int iStack_78;
  uint uStack_70;
  uint uStack_6c;
  int *piStack_60;
  int iStack_5c;
  int iStack_58;
  int *piStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  pcVar15 = (char *)(_UNK_018da4ec + 0x18da328);
  if (*pcVar15 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da4f0 + 0x18da33c));
    func_0x0165b424(*(undefined4 *)(_UNK_018da4f4 + 0x18da348));
    func_0x0165b424(*(undefined4 *)(_UNK_018da4f8 + 0x18da354));
    func_0x0165b424(*(undefined4 *)(_UNK_018da4fc + 0x18da360));
    func_0x0165b424(*(undefined4 *)(_UNK_018da500 + 0x18da36c));
    func_0x0165b424(*(undefined4 *)(_UNK_018da504 + 0x18da378));
    func_0x0165b424(*(undefined4 *)(_UNK_018da508 + 0x18da384));
    func_0x0165b424(*(undefined4 *)(_UNK_018da50c + 0x18da390));
    *pcVar15 = '\x01';
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_018da510 + 0x18da3a4));
  func_0x026f769c(iVar3,0);
  iVar4 = BoardItemPerishableSpawner_GetConfigAdaptor_18CA050(param_1);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar21 = *(int *)(iVar4 + 0xc);
  if (iVar21 == 0) {
    func_0x0165b6e0();
  }
  piVar22 = *(int **)(iVar21 + 0x1c);
  iVar4 = func_0x018cef60(iVar4);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  puVar5 = *(undefined4 **)(_UNK_018da514 + 0x18da408);
  *(int *)(iVar3 + 8) = iVar4 - param_2;
  iVar4 = func_0x0165b6d4(*puVar5);
  iVar21 = 0;
  func_0x026f8108(iVar4,iVar3,**(undefined4 **)(_UNK_018da518 + 0x18da42c),0);
  iVar3 = **(int **)(_UNK_018da51c + 0x18da444);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x016cc90c(iVar3);
    }
  }
  if (piVar22 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar4 != 0) {
      iVar21 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar21 + 0xbd) & 1) == 0) {
        iVar21 = func_0x016cc8b0(iVar21);
      }
      iVar6 = *piVar22;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar13[-1] == iVar21) {
            puVar5 = (undefined4 *)(iVar6 + *piVar13 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar22,iVar21,0);
LAB_0243dc44:
      piVar22 = (int *)(*(code *)*puVar5)(piVar22,puVar5[1]);
      piVar13 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar21 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar21 + 0x58) + 4);
          do {
            if (piVar14[-1] == *piVar13) {
              puVar5 = (undefined4 *)(iVar21 + *piVar14 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,*piVar13,0);
LAB_0243dcbc:
        iVar21 = (*(code *)*puVar5)(piVar22,puVar5[1]);
        if (iVar21 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar21 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar21 + 0xbd) & 1) == 0) {
          iVar21 = func_0x016cc8b0(iVar21);
        }
        iVar6 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar14[-1] == iVar21) {
              puVar5 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,iVar21,0);
LAB_0243dd4c:
        piVar14 = (int *)(*(code *)*puVar5)(piVar22,puVar5[1]);
        iVar21 = (**(code **)(iVar4 + 0xc))
                           (*(undefined4 *)(iVar4 + 0x20),piVar14,*(undefined4 *)(iVar4 + 0x14));
      } while (iVar21 == 0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243dd94;
    }
    uVar7 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,iVar3);
  uVar27 = func_0x0165b3c4();
  uVar10 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar13 = (int *)func_0x017010e8(uVar10);
    iVar4 = *piVar13;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar14 = (int *)0x0;
LAB_0243dd94:
    if (piVar22 != (int *)0x0) {
      iVar21 = *piVar22;
      uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(int *)(iVar21 + 0x58) + 4);
        do {
          if (piVar13[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar5 = (undefined4 *)(iVar21 + *piVar13 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar22,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar5)(piVar22,puVar5[1]);
    }
    if (iVar4 != 0) {
      func_0x0165b6dc(iVar4);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar14 = (int *)0x0;
    }
    return piVar14;
  }
  if (piVar22 != (int *)0x0) {
    iVar4 = *piVar22;
    uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        iVar21 = piVar13[-1];
        if (iVar21 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar5 = (undefined4 *)(iVar4 + *piVar13 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar22,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar5)(piVar22,puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar10);
  uVar27 = func_0x01178c80();
  piVar13 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar14 = (int *)uVar27;
  uVar11 = extraout_r3;
  if ((bool)uVar26) {
    uVar11 = uVar10 | 0x800000;
    piVar22 = (int *)(uVar10 | 0x70000);
    unaff_r10 = uVar10 | 0x70014;
    unaff_r9 = uVar10 | 0x71300;
  }
  uStack_44 = 0;
  piStack_54 = piVar22;
  iStack_50 = iVar3;
  uStack_4c = uVar10;
  iStack_48 = iVar21;
  uStack_40 = unaff_r9;
  uStack_3c = unaff_r10;
  if (*(int *)(uVar11 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar11 + 0x1c) == 0) {
      func_0x016cc90c(uVar11);
    }
  }
  if (piVar13 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar11 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar13;
      uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar10 != 0) {
        piVar22 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar22[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar22 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar10 = uVar10 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar13,iVar3,0);
LAB_0243e00c:
      piVar13 = (int *)(*(code *)*puVar5)(piVar13,puVar5[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar13 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar13;
        uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar10 != 0) {
          piVar22 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar22[-1] == *piVar25) {
              puVar5 = (undefined4 *)(iVar3 + *piVar22 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar10 = uVar10 - 1;
            piVar22 = piVar22 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar13,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar5)(piVar13,puVar5[1]);
        piStack_60 = piVar14;
        if (iVar3 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          piVar22 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar13 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar11 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar13;
        uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar10 != 0) {
          piVar22 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar22[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar22 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar10 = uVar10 - 1;
            piVar22 = piVar22 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar13,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar5)(&iStack_5c,piVar13,puVar5[1]);
        iVar6 = iStack_58;
        iVar21 = iStack_5c;
        piVar22 = (int *)(**(code **)(extraout_r2 + 0xc))
                                   (*(undefined4 *)(extraout_r2 + 0x20),iStack_5c,iStack_58,
                                    *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar22 == (int *)0x0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243e170;
    }
    uVar7 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar11);
  uVar27 = func_0x0165b3c4();
  uVar10 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar14 != (int *)0x0) {
      iVar3 = *piVar14;
      uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar21 = piVar22[-1];
          if (iVar21 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar22 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar14,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar5)(piVar14,puVar5[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar10);
    uStack_a0 = func_0x01178c80();
    uVar12 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar13 = (int *)(uVar10 | 0x5000000);
      uVar23 = uVar10 | 0x5110000;
      uVar12 = uVar10;
    }
    piStack_8c = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar16 = *(code **)(uVar12 + 0x1c);
    uStack_a8 = extraout_r2_00;
    piStack_84 = piVar13;
    piStack_80 = piVar14;
    uStack_7c = uVar10;
    iStack_78 = iVar21;
    uStack_70 = uVar23;
    uStack_6c = uVar11;
    if (pcVar16 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar16 = *(code **)(uVar12 + 0x1c);
      if (pcVar16 == (code *)0x0) {
        func_0x016cc90c(uVar12);
        pcVar16 = *(code **)(uVar12 + 0x1c);
      }
    }
    pcVar17 = *(code **)(*(int *)(pcVar16 + 0x14) + 0x84);
    uVar10 = (uint)(pcVar17 + 7) & 0xfffffff8;
    piVar14 = (int *)((int)&iStack_b0 - uVar10);
    piVar22 = (int *)((int)piVar14 - uVar10);
    iVar3 = (int)piVar22 - uVar10;
    func_0x016fea2c(iVar3,pcVar17);
    piVar13 = (int *)(iVar3 - uVar10);
    piStack_a4 = piVar13;
    func_0x016fea2c(piVar13,pcVar17);
    piVar13 = (int *)((int)piVar13 - uVar10);
    piStack_ac = piVar13;
    pcStack_98 = pcVar17;
    func_0x016fea2c(piVar13,pcVar17);
    pcVar17 = (code *)uStack_a0;
    pcVar18 = (code *)uStack_a0;
    if ((code *)uStack_a0 == (code *)0x0) goto LAB_0243e754;
    if (uStack_a0._4_4_ == 0) {
      uVar7 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar4 = *(int *)pcVar16;
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x016cc8b0(iVar4);
    }
    iVar21 = *(int *)pcVar17;
    uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
    if (uVar10 != 0) {
      piVar25 = (int *)(*(int *)(iVar21 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar4) {
          puVar5 = (undefined4 *)(iVar21 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar10 = uVar10 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(pcVar17,iVar4,0);
LAB_0243e48c:
    pcVar16 = (code *)(*(code *)*puVar5)(pcVar17,puVar5[1]);
    iVar4 = 0;
    do {
      if (pcVar16 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar21 = *(int *)pcVar16;
      uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
      pcVar18 = pcVar17;
      if (uVar10 != 0) {
        piVar25 = (int *)(*(int *)(iVar21 + 0x58) + 4);
        do {
          pcVar18 = (code *)piVar25[-1];
          if (pcVar18 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar5 = (undefined4 *)(iVar21 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar10 = uVar10 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)
               func_0x016cc99c(pcVar16,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar21 = (*(code *)*puVar5)(pcVar16,puVar5[1]);
      if (iVar21 == 0) {
        uVar12 = 0xb;
        piVar22 = piStack_a4;
        goto LAB_0243e668;
      }
      if (pcVar16 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar21 = *(int *)(*(int *)(uVar12 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar21 + 0xbd) & 1) == 0) {
        iVar21 = func_0x016cc8b0(iVar21);
      }
      iVar6 = *(int *)pcVar16;
      uVar10 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar10 != 0) {
        piVar25 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar21) {
            iVar21 = iVar6 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar10 = uVar10 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar10 != 0);
      }
      iVar21 = func_0x016cc99c(pcVar16,iVar21,0);
LAB_0243e598:
      iVar21 = *(int *)(iVar21 + 4);
      uVar7 = *(undefined4 *)(iVar21 + 4);
      pcVar17 = *(code **)(iVar21 + 8);
      piStack_94 = piVar14;
      piVar13[-2] = (int)piVar14;
      (*pcVar17)(uVar7,iVar21,pcVar16,&piStack_94);
      pcVar17 = pcStack_98;
      func_0x016fea14(iVar3,piVar14,pcStack_98);
      func_0x016fea14(piVar22,iVar3,pcVar17);
      puVar5 = *(undefined4 **)(*(int *)(uVar12 + 0x1c) + 0x18);
      piStack_94 = piVar22;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar12 + 0x1c) + 0x14) + 0x14)) {
        piStack_94 = (int *)*piVar22;
      }
      uVar7 = *puVar5;
      pcVar17 = (code *)puVar5[2];
      piVar13[-2] = (int)&cStack_8d;
      (*pcVar17)(uVar7,puVar5,uStack_a0._4_4_,&piStack_94);
      pcVar18 = pcStack_98;
    } while (cStack_8d == '\0');
    func_0x016fea14(piVar14,iVar3,pcStack_98);
    piVar22 = piStack_a4;
    func_0x016fea14(piStack_a4,piVar14,pcVar18);
    uVar12 = 10;
LAB_0243e668:
    do {
      if (pcVar16 != (code *)0x0) {
        iVar21 = *(int *)pcVar16;
        uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
        if (uVar10 != 0) {
          piVar25 = (int *)(*(int *)(iVar21 + 0x58) + 4);
          do {
            pcVar18 = (code *)piVar25[-1];
            if (pcVar18 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar5 = (undefined4 *)(iVar21 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar10 = uVar10 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)
                 func_0x016cc99c(pcVar16,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar5)(pcVar16,puVar5[1]);
      }
      if (iVar4 != 0) {
        func_0x0165b6dc(iVar4);
      }
      piVar25 = piStack_ac;
      if (uVar12 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_ac,pcStack_98);
        piVar22 = piVar25;
LAB_0243e710:
        pcVar16 = pcStack_98;
        func_0x016fea14(piVar14,piVar22,pcStack_98);
        func_0x016fea14(uStack_a8,piVar14,pcVar16);
      }
      else {
        if (uVar12 == 10) goto LAB_0243e710;
        if (uVar12 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_8c) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar7 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar7 = func_0x0165b434(uVar7);
      uVar7 = func_0x026fd688(uVar7,0);
      func_0x0165b590(uVar7,uVar12);
      uVar27 = func_0x0165b3c4();
      iVar4 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar22 = (int *)func_0x017010e8(iVar4);
      iVar4 = *piVar22;
      uVar12 = 0;
      func_0x0171ece4();
      piVar22 = piStack_a4;
    } while( true );
  }
  piVar22 = (int *)func_0x017010e8(uVar10);
  iVar4 = *piVar22;
  iVar3 = 0;
  piVar22 = (int *)func_0x0171ece4();
  piVar13 = piVar14;
LAB_0243e168:
  iVar6 = 0;
  iVar21 = 0;
LAB_0243e170:
  if (piVar13 != (int *)0x0) {
    iVar8 = *piVar13;
    uVar10 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar10 != 0) {
      piVar22 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar22[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar5 = (undefined4 *)(iVar8 + *piVar22 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar10 = uVar10 - 1;
        piVar22 = piVar22 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar13,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar22 = (int *)(*(code *)*puVar5)(piVar13,puVar5[1]);
  }
  if (iVar4 != 0) {
    piVar22 = (int *)func_0x0165b6dc(iVar4);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_60 = iVar21;
      piStack_60[1] = iVar6;
      return piStack_60;
    }
    if (iVar3 != 0) {
      return piVar22;
    }
  }
  *piStack_60 = 0;
  piStack_60[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar16 != (code *)0x0) {
    iVar21 = *(int *)pcVar16;
    uVar10 = (uint)*(ushort *)(iVar21 + 0xb6);
    if (uVar10 != 0) {
      piVar25 = (int *)(*(int *)(iVar21 + 0x58) + 4);
      do {
        piVar14 = (int *)piVar25[-1];
        if (piVar14 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar5 = (undefined4 *)(iVar21 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar10 = uVar10 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(pcVar16,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar5)(pcVar16,puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar4);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar10 = extraout_r3_01;
  uVar11 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar11 = (uint)piVar14 | 0xdc00;
    uVar10 = (uint)piVar14 | 0x3c0;
    piVar25 = (int *)((uint)pcVar18 | 0x70000);
    piVar22 = (int *)((uint)pcVar16 | 0x24000000);
  }
  piVar13[-1] = 0x243e848;
  piVar13[-2] = (int)&stack0xffffff98;
  piVar13[-3] = iVar3;
  piVar13[-4] = (int)piVar22;
  piVar13[-5] = 0;
  piVar13[-6] = iVar4;
  piVar13[-7] = (int)piVar14;
  piVar13[-8] = (int)pcVar18;
  piVar13[-9] = (int)pcVar16;
  iVar21 = *(int *)(uVar10 + 0x1c);
  piVar13[-0x16] = uVar11;
  if (iVar21 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar10 + 0x1c) == 0) {
      func_0x016cc90c(uVar10);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar13[-0x16] != 0) {
      iVar3 = **(int **)(uVar10 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar25;
      piVar13[-0x1f] = uVar23;
      piVar13[-0x18] = uVar10;
      uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar10 != 0) {
        piVar22 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar22[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar22 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar10 = uVar10 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar22 = (int *)(*(code *)*puVar5)(piVar25,puVar5[1]);
      piVar13[-0x17] = (int)piVar22;
      do {
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar4 = piVar13[-0x18];
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar14[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar5)(piVar22,puVar5[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar13[-0x19] = 0;
          piVar13[-0x1a] = 0;
          piVar13[-0x1b] = 0;
          piVar13[-0x15] = 0;
          piVar13[-0x1c] = 0;
          iVar8 = 0xb;
          iVar4 = 0;
          iVar21 = 0;
          iVar24 = 0;
          iVar19 = 0;
          iVar6 = 0;
          piVar13[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar14[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar5)(piVar13 + -0x14,piVar22,puVar5[1]);
        iVar3 = piVar13[-0x16];
        iVar24 = piVar13[-0xc];
        iVar21 = piVar13[-0xb];
        iVar8 = *(int *)(iVar3 + 0x14);
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        iVar19 = piVar13[-0x10];
        iVar6 = piVar13[-0x12];
        iVar4 = piVar13[-10];
        piVar13[-0x15] = *(int *)(iVar3 + 0xc);
        piVar13[-0x27] = iVar19;
        piVar13[-0x26] = piVar13[-0xf];
        piVar13[-0x1e] = piVar13[-0x11];
        piVar13[-0x28] = piVar13[-0x11];
        piVar13[-0x1a] = piVar13[-0xe];
        piVar13[-0x25] = piVar13[-0xe];
        piVar13[-0x19] = piVar13[-0xd];
        piVar13[-0x24] = piVar13[-0xd];
        piVar13[-0x20] = iVar8;
        piVar13[-0x1b] = piVar13[-0xf];
        piVar13[-0x23] = iVar24;
        piVar13[-0x22] = iVar21;
        piVar13[-0x21] = iVar4;
        piVar13[-0x1d] = piVar13[-0x14];
        piVar13[-0x1c] = piVar13[-0x13];
        iVar3 = (*(code *)piVar13[-0x15])(uVar7,piVar13[-0x14],piVar13[-0x13],iVar6);
        piVar22 = (int *)piVar13[-0x17];
      } while (iVar3 == 0);
      iVar8 = 10;
      iVar3 = 0;
      piVar13[-0x15] = iVar19;
      iVar19 = piVar13[-0x1e];
      goto LAB_0243eb70;
    }
    uVar7 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar10);
  uVar27 = func_0x0165b3c4();
  iVar21 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar22 = (int *)func_0x017010e8(iVar21);
    iVar3 = *piVar22;
    func_0x0171ece4();
    piVar22 = (int *)piVar13[-0x17];
    piVar13[-0x19] = 0;
    piVar13[-0x1a] = 0;
    piVar13[-0x1b] = 0;
    piVar13[-0x15] = 0;
    piVar13[-0x1c] = 0;
    piVar13[-0x1d] = 0;
    iVar4 = 0;
    iVar21 = 0;
    iVar24 = 0;
    iVar19 = 0;
    iVar6 = 0;
    iVar8 = 0;
LAB_0243eb70:
    if (piVar22 != (int *)0x0) {
      iVar9 = *piVar22;
      uVar10 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar10 != 0) {
        piVar22 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar22[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar20 = piVar13[-0x17];
            puVar5 = (undefined4 *)(iVar9 + *piVar22 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar10 = uVar10 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar10 != 0);
      }
      iVar20 = piVar13[-0x17];
      puVar5 = (undefined4 *)func_0x016cc99c(iVar20,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar5)(iVar20,puVar5[1]);
    }
    piVar22 = (int *)0x0;
    if (iVar3 != 0) {
      piVar22 = (int *)func_0x0165b6dc();
    }
    if (iVar8 != 0xb) {
      if (iVar8 == 10) {
        piVar22 = (int *)piVar13[-0x1f];
        *piVar22 = piVar13[-0x1d];
        iVar3 = piVar13[-0x1c];
        piVar22[8] = iVar24;
        piVar22[1] = iVar3;
        piVar22[2] = iVar6;
        piVar22[3] = iVar19;
        piVar22[4] = piVar13[-0x15];
        piVar22[5] = piVar13[-0x1b];
        piVar22[6] = piVar13[-0x1a];
        iVar3 = piVar13[-0x19];
        piVar22[9] = iVar21;
        piVar22[10] = iVar4;
        piVar22[7] = iVar3;
        return piVar22;
      }
      if (iVar8 != 0) {
        return piVar22;
      }
    }
    puVar5 = (undefined4 *)piVar13[-0x1f];
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar5 = 0;
    puVar5[1] = uVar7;
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[7] = 0;
    puVar5[8] = uVar7;
    puVar5[9] = uVar1;
    puVar5[10] = uVar2;
    puVar5[4] = 0;
    puVar5[5] = uVar7;
    puVar5[6] = uVar1;
    puVar5[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar13[-0x17] != 0) {
    iVar6 = *(int *)piVar13[-0x17];
    uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar11 != 0) {
      piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar4 = piVar14[-1];
        if (iVar4 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar11 = uVar11 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar13[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar5)(piVar13[-0x17],puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar21);
  uVar27 = func_0x01178c80();
  piVar14 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar11 = extraout_r3_02;
  uVar12 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar12 = uVar10 | 0x2d00000;
    uVar11 = uVar10 | 0xc8000;
    piVar22 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar13[-0x29] = 0x243edc8;
  piVar13[-0x2a] = (int)&stack0xffffff98;
  piVar13[-0x2b] = iVar3;
  piVar13[-0x2c] = (int)piVar22;
  piVar13[-0x2d] = uVar23;
  piVar13[-0x2e] = iVar4;
  piVar13[-0x2f] = uVar10;
  piVar13[-0x30] = iVar21;
  piVar13[-0x31] = 0;
  if (*(int *)(uVar11 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar11 + 0x1c) == 0) {
      func_0x016cc90c(uVar11);
    }
  }
  if (piVar14 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar12 != 0) {
      piVar22 = *(int **)(uVar11 + 0x1c);
      piVar13[-0x35] = (int)uVar27;
      iVar3 = *piVar22;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar14;
      uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar10 != 0) {
        piVar22 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar22[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar22 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar10 = uVar10 - 1;
          piVar22 = piVar22 + 2;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar14,iVar3,0);
LAB_0243eeb4:
      piVar22 = (int *)(*(code *)*puVar5)(piVar14,puVar5[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar14[-1] == *piVar25) {
              puVar5 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar5)(piVar22,puVar5[1]);
        if (iVar3 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          piVar14 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar22 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar11 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar22;
        uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar10 != 0) {
          piVar14 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar14[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar14 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 2;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar22,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar5)(piVar13 + -0x34,piVar22,puVar5[1]);
        iVar8 = piVar13[-0x34];
        iVar6 = piVar13[-0x33];
        iVar21 = piVar13[-0x32];
        uVar7 = *(undefined4 *)(uVar12 + 0x20);
        pcVar16 = *(code **)(uVar12 + 0xc);
        piVar13[-0x36] = *(undefined4 *)(uVar12 + 0x14);
        piVar14 = (int *)(*pcVar16)(uVar7,iVar8,iVar6,iVar21);
      } while (piVar14 == (int *)0x0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243f024;
    }
    uVar7 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar11);
  uVar28 = func_0x0165b3c4();
  uVar10 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar22 != (int *)0x0) {
      iVar3 = *piVar22;
      uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar4 = piVar25[-1];
          if (iVar4 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar22,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar5)(piVar22,puVar5[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar10);
    uVar28 = func_0x01178c80();
    uVar11 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar11 = uVar10 | 0x10000001;
      uVar23 = (uint)piVar14 | 0x88000;
    }
    piVar13[-0x37] = 0x243f1e4;
    piVar13[-0x38] = uVar23;
    piVar13[-0x39] = iVar4;
    piVar13[-0x3a] = uVar10;
    piVar13[-0x3b] = (int)uVar27;
    piVar13[-0x3c] = (int)piVar14;
    iVar3 = *(int *)(uVar11 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar11);
      iVar3 = *(int *)(uVar11 + 0x1c);
    }
    uVar7 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar11 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar22 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar11 + 0x1c) + 0x18);
    piVar13[-0x3e] = 0;
    piVar13[-0x3d] = iVar3;
    func_0x02804be0(piVar22,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar7);
    return piVar22;
  }
  piVar14 = (int *)func_0x017010e8(uVar10);
  iVar4 = *piVar14;
  iVar3 = 0;
  piVar14 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar21 = 0;
  iVar6 = 0;
  iVar8 = 0;
LAB_0243f024:
  if (piVar22 != (int *)0x0) {
    iVar24 = *piVar22;
    uVar10 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar14[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar5 = (undefined4 *)(iVar24 + *piVar14 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar22,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar14 = (int *)(*(code *)*puVar5)(piVar22,puVar5[1]);
  }
  if (iVar4 != 0) {
    piVar14 = (int *)func_0x0165b6dc(iVar4);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar22 = (int *)piVar13[-0x35];
      *piVar22 = iVar8;
      piVar22[1] = iVar6;
      piVar22[2] = iVar21;
      return piVar22;
    }
    if (iVar3 != 0) {
      return piVar14;
    }
  }
  puVar5 = (undefined4 *)piVar13[-0x35];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  return (int *)0x0;
}


/* BoardItemPerishableSpawner.Initialize VA=0x18CA67C | public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardItemPerishableSpawner_Initialize_18CA67C(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  uint in_fpscr;
  int in_stack_00000008;
  
  pcVar8 = (char *)(_UNK_018da8f0 + 0x18da698);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018da8f4 + 0x18da6ac));
    func_0x0165b424(*(undefined4 *)(_UNK_018da8f8 + 0x18da6b8));
    func_0x0165b424(*(undefined4 *)(_UNK_018da8fc + 0x18da6c4));
    *pcVar8 = '\x01';
  }
  if (param_3 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_018da900 + 0x18da6e8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 200);
        goto LAB_018da730;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_3,**(int **)(_UNK_018da900 + 0x18da6e8),1);
LAB_018da730:
  piVar6 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
  if (piVar6 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar6;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_018da904 + 0x18da760)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_018da7a8;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(_UNK_018da904 + 0x18da760),0);
LAB_018da7a8:
  piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (in_stack_00000008 == 0) {
    iVar1 = *piVar6;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_018da908 + 0x18da7e0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xd8);
          goto LAB_018da830;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(_UNK_018da908 + 0x18da7e0),3);
LAB_018da830:
    fVar3 = (float)(*(code *)*puVar2)(piVar6,puVar2[1]);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar3 == 0.0) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      return 1;
    }
  }
  iVar1 = BoardItemPerishableSpawner_GetConfigAdaptor_18CA050(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = func_0x018cef60(iVar1);
  iVar1 = *piVar6;
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_018da90c + 0x18da888)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xf8);
        goto LAB_018da8d0;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar6,**(int **)(_UNK_018da90c + 0x18da888),7);
LAB_018da8d0:
  (*(code *)*puVar2)(piVar6,uVar4,puVar2[1]);
  return 1;
}


/* BoardItemPerishableSpawner.Initialize VA=0x18CA910 | public override bool Initialize(BoardEntity boardEntity, IItemController item, long millisecondsPassed, bool isNewlyCreated, float capacity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardItemPerishableSpawner_Initialize_18CA910(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  pcVar7 = (char *)(_UNK_018dab5c + 0x18da928);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018dab60 + 0x18da93c));
    func_0x0165b424(*(undefined4 *)(_UNK_018dab64 + 0x18da948));
    func_0x0165b424(*(undefined4 *)(_UNK_018dab68 + 0x18da954));
    *pcVar7 = '\x01';
  }
  if (param_3 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *param_3;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_018dab6c + 0x18da978)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 200);
        goto LAB_018da9c0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(param_3,**(int **)(_UNK_018dab6c + 0x18da978),1);
LAB_018da9c0:
  piVar5 = (int *)(*(code *)*puVar2)(param_3,puVar2[1]);
  if (piVar5 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar5;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_018dab70 + 0x18da9f0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_018daa38;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar5,**(int **)(_UNK_018dab70 + 0x18da9f0),0);
LAB_018daa38:
  piVar5 = (int *)(*(code *)*puVar2)(piVar5,puVar2[1]);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  if (in_stack_00000008 == 0) {
    iVar1 = *piVar5;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_018dab74 + 0x18daa70)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd8);
          goto LAB_018daac0;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar5,**(int **)(_UNK_018dab74 + 0x18daa70),3);
LAB_018daac0:
    fVar3 = (float)(*(code *)*puVar2)(piVar5,puVar2[1]);
    if (fVar3 != 0.0) {
      return 1;
    }
  }
  iVar1 = *piVar5;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_018dab78 + 0x18daaf4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xf8);
        goto LAB_018dab3c;
      }
      uVar4 = uVar4 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x016cc99c(piVar5,**(int **)(_UNK_018dab78 + 0x18daaf4),7);
LAB_018dab3c:
  (*(code *)*puVar2)(piVar5,in_stack_0000000c,puVar2[1]);
  return 1;
}


/* BoardItemPerishableSpawner.GetTimeRequiredToExitCharging VA=0x18CAB7C | public override int GetTimeRequiredToExitCharging() { } */

undefined4 BoardItemPerishableSpawner_GetTimeRequiredToExitCharging_18CAB7C(void)

{
  return 0xffffffff;
}


/* BoardItemPerishableSpawner.IsUseEnergySprite VA=0x18CAB84 | public bool IsUseEnergySprite() { } */

undefined1 BoardItemPerishableSpawner_IsUseEnergySprite_18CAB84(void)

{
  int iVar1;
  
  iVar1 = BoardItemPerishableSpawner_GetConfigAdaptor_18CA050();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0xc);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  return *(undefined1 *)(iVar1 + 0xc);
}


/* BoardItemPerishableSpawner.ConvertFromLocal VA=0x18CABB4 | public AdaptorBase ConvertFromLocal() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardItemPerishableSpawner_ConvertFromLocal_18CABB4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_018dac08 + 0x18dabc8);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018dac0c + 0x18dabdc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_018dac10 + 0x18dabf0));
  func_0x018ceed8(uVar1,param_1);
  return uVar1;
}


/* BoardItemPerishableSpawner.ctor VA=0x18CAC14 | public void .ctor() { } */

void BoardItemPerishableSpawner_ctor_18CAC14(int param_1)

{
  *(undefined1 *)(param_1 + 0x3e) = 1;
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* BoardItemSetData.IsFeature VA=0x18CC8C4 | public bool IsFeature() { } */

bool BoardItemSetData_IsFeature_18CC8C4(int param_1)

{
  return *(int *)(param_1 + 0x34) - 1U < 9999;
}


/* BoardItemSetData.IsBoardEventFeature VA=0x18CC8E0 | public bool IsBoardEventFeature() { } */

bool BoardItemSetData_IsBoardEventFeature_18CC8E0(int param_1)

{
  return 9999 < *(int *)(param_1 + 0x34);
}


/* BoardItemSetData.IsRecurringEventFeature VA=0x18CC8F8 | public bool IsRecurringEventFeature() { } */

bool BoardItemSetData_IsRecurringEventFeature_18CC8F8(int param_1)

{
  return *(int *)(param_1 + 0x34) - 1U < 99;
}


/* BoardItemSetData.IsDefaultBoardFeature VA=0x18CC910 | public bool IsDefaultBoardFeature() { } */

bool BoardItemSetData_IsDefaultBoardFeature_18CC910(int param_1)

{
  return *(int *)(param_1 + 0x34) != 0 && *(int *)(param_1 + 0x34) < 10000;
}


/* BoardItemSetData.IsDailyChallengeFeature VA=0x18CC934 | public bool IsDailyChallengeFeature() { } */

bool BoardItemSetData_IsDailyChallengeFeature_18CC934(int param_1)

{
  return *(int *)(param_1 + 0x34) - 100U < 100;
}


/* BoardItemSetData.ctor VA=0x18CC94C | public void .ctor() { } */

void BoardItemSetData_ctor_18CC94C(undefined4 param_1)

{
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* ItemRuntimeData.SetUpdateStepMs VA=0x18CEB74 | public void SetUpdateStepMs(int updateStepMs) { } */

void ItemRuntimeData_SetUpdateStepMs_18CEB74(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}


/* ItemRuntimeData.SetTimeRequiredToExitNoCapacity VA=0x18CEB7C | public void SetTimeRequiredToExitNoCapacity(int time) { } */

void ItemRuntimeData_SetTimeRequiredToExitNoCapacity_18CEB7C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}


/* ItemRuntimeData.SetNextSpawnerUpdateMs VA=0x18CEB84 | public void SetNextSpawnerUpdateMs(long spawnerUpdateMs) { } */

void ItemRuntimeData_SetNextSpawnerUpdateMs_18CEB84
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x14) = param_4;
  return;
}


/* ItemRuntimeData.ChangeNextSpawnerUpdateMs VA=0x18CEB94 | public void ChangeNextSpawnerUpdateMs(long changedUpdateMs) { } */

void ItemRuntimeData_ChangeNextSpawnerUpdateMs_18CEB94
               (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 + param_3;
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_4 + (uint)CARRY4(uVar1,param_3);
  return;
}


/* ItemRuntimeData.SetSkipPrice VA=0x18CEBAC | public void SetSkipPrice(int skipPrice) { } */

void ItemRuntimeData_SetSkipPrice_18CEBAC(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}


/* ItemRuntimeData.PreventItemSell VA=0x18CEBB4 | public bool PreventItemSell() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemRuntimeData_PreventItemSell_18CEBB4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_018decd8 + 0x18debc8);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018decdc + 0x18debdc));
    func_0x0165b424(*(undefined4 *)(_UNK_018dece0 + 0x18debe8));
    func_0x0165b424(*(undefined4 *)(_UNK_018dece4 + 0x18debf4));
    func_0x0165b424(*(undefined4 *)(_UNK_018dece8 + 0x18dec00));
    func_0x0165b424(*(undefined4 *)(_UNK_018decec + 0x18dec0c));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x97) == '\0') {
    if (*(char *)(param_1 + 0x99) == '\0') {
      if (*(char *)(param_1 + 0x98) == '\0') {
        if (*(char *)(param_1 + 0x96) == '\0') {
          return 0;
        }
        iVar1 = *(int *)(**(int **)(_UNK_018ded08 + 0x18deca4) + 0x74);
        puVar2 = *(undefined4 **)(_UNK_018ded0c + 0x18decb4);
      }
      else {
        iVar1 = *(int *)(**(int **)(_UNK_018ded00 + 0x18dec7c) + 0x74);
        puVar2 = *(undefined4 **)(_UNK_018ded04 + 0x18dec8c);
      }
    }
    else {
      iVar1 = *(int *)(**(int **)(_UNK_018decf8 + 0x18dec54) + 0x74);
      puVar2 = *(undefined4 **)(_UNK_018decfc + 0x18dec64);
    }
  }
  else {
    iVar1 = *(int *)(**(int **)(_UNK_018decf0 + 0x18dec2c) + 0x74);
    puVar2 = *(undefined4 **)(_UNK_018decf4 + 0x18dec3c);
  }
  if (iVar1 == 0) {
    func_0x0165b5a4();
  }
  func_0x018b449c(*puVar2,0);
  return 1;
}


/* ItemRuntimeData.ctor VA=0x18CED10 | public void .ctor() { } */

void ItemRuntimeData_ctor_18CED10(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* ItemChainManager.GetTotalPointsForSetIDQuery VA=0x190CA84 | public int GetTotalPointsForSetIDQuery(int anySetID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_GetTotalPointsForSetIDQuery_190CA84(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_0191cc60 + 0x191caa0);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191cc64 + 0x191cab4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cc68 + 0x191cac0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cc6c + 0x191cacc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cc70 + 0x191cad8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cc74 + 0x191cae4));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  uStack_1c = 0;
  if (*(char *)(param_1 + 8) != '\0') {
    if (999999 < (int)param_2) {
      uVar2 = param_2 - 0xf4628;
      if ((int)param_2 < 0xf4628) {
        param_2 = param_2 - 1000000;
        iVar3 = 0;
      }
      else {
        param_2 = uVar2 % 1000;
        iVar3 = uVar2 / 1000 + 1;
      }
      if (iVar3 != 0) {
        param_2 = param_2 + 100000;
      }
      if (iVar3 != 0) {
        param_2 = (iVar3 * 1000 + param_2) - 1000;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = func_0x026f88d4(iVar3,param_2,&uStack_1c,**(undefined4 **)(_UNK_0191cc78 + 0x191cb94));
    uVar1 = uStack_1c;
    if (iVar3 != 0) {
      piVar7 = *(int **)(_UNK_0191cc7c + 0x191cbb0);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar3 = *piVar7;
      }
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5c) + 4);
      if (iVar4 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar3 = *piVar7;
        }
        uVar6 = **(undefined4 **)(iVar3 + 0x5c);
        iVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191cc80 + 0x191cbfc));
        func_0x026f8898(iVar4,uVar6,**(undefined4 **)(_UNK_0191cc84 + 0x191cc1c),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar7 = iVar4;
        func_0x0165b3c0(piVar7,iVar4);
      }
      uVar6 = func_0x0245d3c0(uVar1,iVar4,**(undefined4 **)(_UNK_0191cc88 + 0x191cc48));
    }
  }
  return uVar6;
}


/* ItemChainManager.GetMaxPointsForSetIDQuery VA=0x190C3E8 | public int GetMaxPointsForSetIDQuery(int anySetID, out int counter) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetMaxPointsForSetIDQuery_190C3E8(int param_1,uint param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_24;
  
  pcVar5 = (char *)(_UNK_0191c648 + 0x191c408);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191c64c + 0x191c41c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c650 + 0x191c428));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c654 + 0x191c434));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c658 + 0x191c440));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c65c + 0x191c44c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar6 = 0;
  iStack_24 = 0;
  uStack_38 = 0;
  cVar1 = *(char *)(param_1 + 8);
  *param_3 = 0;
  if (cVar1 != '\0') {
    if (999999 < (int)param_2) {
      uVar2 = param_2 - 0xf4628;
      if ((int)param_2 < 0xf4628) {
        param_2 = param_2 - 1000000;
        iVar3 = 0;
      }
      else {
        param_2 = uVar2 % 1000;
        iVar3 = uVar2 / 1000 + 1;
      }
      if (iVar3 != 0) {
        param_2 = param_2 + 100000;
      }
      if (iVar3 != 0) {
        param_2 = (iVar3 * 1000 + param_2) - 1000;
      }
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = func_0x026f88d4(iVar3,param_2,&iStack_24,**(undefined4 **)(_UNK_0191c660 + 0x191c50c));
    iVar3 = iStack_24;
    if (iVar4 != 0) {
      if (iStack_24 == 0) {
        func_0x0165b6e0();
      }
      func_0x02b0bf88(&uStack_38,iVar3,**(undefined4 **)(_UNK_0191c664 + 0x191c540));
      puVar7 = *(undefined4 **)(_UNK_0191c668 + 0x191c55c);
      iVar6 = 0;
      while (iVar4 = func_0x01710964(&uStack_38,*puVar7), iVar3 = iStack_2c, iVar4 != 0) {
        if (iStack_2c == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar6 < iVar3) {
          *param_3 = 1;
          iVar6 = iVar3;
        }
        else if (iVar3 == iVar6) {
          *param_3 = *param_3 + 1;
        }
      }
      func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191c66c + 0x191c5b0));
    }
  }
  return iVar6;
}


/* ItemChainManager.AddToQueryList VA=0x190E8D0 | public void AddToQueryList(int setID, int location, int index, int level, bool skipCheck = False) { } */

/* WARNING: Removing unreachable block (ram,0x0191ebc0) */
/* WARNING: Removing unreachable block (ram,0x0191ebcc) */
/* WARNING: Removing unreachable block (ram,0x0191ebd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_AddToQueryList_190E8D0
               (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  bool bVar11;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined8 uStack_38;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0191f130 + 0x191e8f0);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191f134 + 0x191e908));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f138 + 0x191e914));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f13c + 0x191e920));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f140 + 0x191e92c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f144 + 0x191e938));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f148 + 0x191e944));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f14c + 0x191e950));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f150 + 0x191e95c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f154 + 0x191e968));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f158 + 0x191e974));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f15c + 0x191e980));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f160 + 0x191e98c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f164 + 0x191e998));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f168 + 0x191e9a4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f16c + 0x191e9b0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f170 + 0x191e9bc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f174 + 0x191e9c8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f178 + 0x191e9d4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191f17c + 0x191e9e0));
    *pcVar6 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_4c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  iStack_28 = 0;
  iStack_2c = 0;
  uStack_38 = 0;
  uStack_58 = 0;
  if (*(char *)(param_1 + 9) == '\0') {
    bVar11 = param_6 == 0;
    if (bVar11) {
      param_6 = (uint)*(byte *)(param_1 + 8);
    }
    if (!bVar11 || param_6 != 0) {
      pcVar6 = (char *)(_UNK_0191f180 + 0x191ea48);
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      iStack_3c = iStack_4c;
      if (*pcVar6 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_0191f184 + 0x191ea5c));
        *pcVar6 = '\x01';
      }
      iVar7 = **(int **)(**(int **)(_UNK_0191f188 + 0x191ea70) + 0x5c);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = func_0x01aadbb8(iVar7,0);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar7 + 0x28) != 4) {
        if (param_3 != 0) {
          iVar7 = *(int *)(param_1 + 0xc);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f88a0(&uStack_70,iVar7,**(undefined4 **)(_UNK_0191f18c + 0x191eae0));
          uStack_48 = uStack_70;
          uStack_44 = uStack_6c;
          uStack_40 = uStack_68;
          iStack_3c = iStack_64;
          uStack_38 = uStack_60;
          puVar9 = *(undefined4 **)(_UNK_0191f190 + 0x191eb10);
          while (iVar7 = func_0x017160d4(&uStack_48,**(undefined4 **)(_UNK_0191f19c + 0x191eb18)),
                iVar7 != 0) {
            iVar7 = (int)uStack_38;
            if ((int)uStack_38 == 0) {
              func_0x0165b6e0();
            }
            func_0x02b0bf88(&uStack_70,iVar7,**(undefined4 **)(_UNK_0191f194 + 0x191eb44));
            uStack_58 = uStack_70;
            uStack_54 = uStack_6c;
            uStack_50 = uStack_68;
            iStack_4c = iStack_64;
            while (iVar1 = func_0x01710964(&uStack_58,*puVar9), iVar7 = iStack_4c, iVar1 != 0) {
              if (iStack_4c == 0) {
                func_0x0165b6e0();
              }
              if ((*(int *)(iVar7 + 8) == param_3) && (param_4 <= *(int *)(iVar7 + 0xc))) {
                *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + 1;
              }
            }
            func_0x0172cd54(&uStack_58,**(undefined4 **)(_UNK_0191f198 + 0x191ebb0));
          }
          func_0x026f88a4(&uStack_48,**(undefined4 **)(_UNK_0191f1a0 + 0x191ec10));
        }
        iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191f1ac + 0x191ec2c));
        func_0x026f769c(iVar7,0);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        *(int *)(iVar7 + 8) = param_3;
        *(int *)(iVar7 + 0xc) = param_4;
        uVar2 = func_0x01a06fd8(param_5 + -1,0);
        iVar1 = *(int *)(param_1 + 0x10);
        *(undefined4 *)(iVar7 + 0x10) = uVar2;
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = func_0x026f88d4(iVar1,param_3,&iStack_28,
                                **(undefined4 **)(_UNK_0191f1b0 + 0x191ec84));
        iVar1 = iStack_28;
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x10);
          iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191f1b4 + 0x191ed5c));
          func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_0191f1b8 + 0x191ed74));
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar4 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_0191f1bc + 0x191eda8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar10 = *piVar5;
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          if (uVar8 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            piVar5 = (int *)(iVar4 + uVar8 * 4 + 0x10);
            *piVar5 = iVar7;
            func_0x0165b3c0(piVar5,iVar7);
          }
          else {
            func_0x02b0b274(iVar1,iVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f8814(iVar3,param_3,iVar1,**(undefined4 **)(_UNK_0191f1d4 + 0x191ee2c));
        }
        else if (param_3 == 0) {
          if (iStack_28 == 0) {
            func_0x0165b6e0();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_0191f1c4 + 0x191ef94);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar4 = *piVar5;
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          if (uVar8 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            piVar5 = (int *)(iVar3 + uVar8 * 4 + 0x10);
            *piVar5 = iVar7;
            func_0x0165b3c0(piVar5,iVar7);
          }
          else {
            func_0x02b0b274(iVar1,iVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
          }
        }
        else {
          iVar1 = func_0x024325f4(iStack_28,**(undefined4 **)(_UNK_0191f1c8 + 0x191eca8));
          uVar8 = iVar1 - 1;
          if (-1 < (int)uVar8) {
            puVar9 = *(undefined4 **)(_UNK_0191f1cc + 0x191ecc8);
            do {
              iVar1 = iStack_28;
              if (iStack_28 == 0) {
                func_0x0165b6e0();
              }
              iVar1 = func_0x02b0af9c(iVar1,uVar8,*puVar9);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              iVar3 = iStack_28;
              iVar4 = *(int *)(iVar1 + 0xc);
              if (param_4 < iVar4) {
                *(int *)(iVar1 + 0xc) = iVar4 + 1;
              }
              else if (iVar4 == param_4) {
                *(int *)(iVar1 + 0xc) = param_4 + 1;
                if (iStack_28 == 0) {
                  func_0x0165b6e0();
                }
                func_0x02b0c24c(iVar3,uVar8,iVar7,**(undefined4 **)(_UNK_0191f1d0 + 0x191ed38));
              }
              uVar8 = uVar8 - 1;
            } while (uVar8 < 0x80000000);
          }
        }
        iVar1 = *(int *)(param_1 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = func_0x026f88d4(iVar1,param_2,&iStack_2c,
                                **(undefined4 **)(_UNK_0191f1d8 + 0x191ee58));
        iVar1 = iStack_2c;
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0xc);
          iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191f1e4 + 0x191eea0));
          func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_0191f1e8 + 0x191eeb8));
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar4 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_0191f1ec + 0x191eeec);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar10 = *piVar5;
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          if (uVar8 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            piVar5 = (int *)(iVar4 + uVar8 * 4 + 0x10);
            *piVar5 = iVar7;
            func_0x0165b3c0(piVar5,iVar7);
          }
          else {
            func_0x02b0b274(iVar1,iVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
          }
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          func_0x026f8814(iVar3,param_2,iVar1,**(undefined4 **)(_UNK_0191f1f0 + 0x191ef58));
        }
        else if (param_3 == 0) {
          if (iStack_2c == 0) {
            func_0x0165b6e0();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar8 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_0191f1dc + 0x191eff8);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar4 = *piVar5;
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          if (uVar8 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar8 + 1;
            piVar5 = (int *)(iVar3 + uVar8 * 4 + 0x10);
            *piVar5 = iVar7;
            func_0x0165b3c0(piVar5,iVar7);
          }
          else {
            func_0x02b0b274(iVar1,iVar7,
                            *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
          }
        }
        else {
          func_0x0246fddc(iStack_2c,iVar7,**(undefined4 **)(_UNK_0191f1e0 + 0x191ee88));
        }
      }
    }
  }
  return;
}


/* ItemChainManager.RemoveQuery VA=0x190B650 | public void RemoveQuery(int setID, int location, int oldIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_RemoveQuery_190B650
               (int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iStack_20;
  int iStack_1c;
  
  pcVar7 = (char *)(_UNK_0191b9b4 + 0x191b670);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9b8 + 0x191b688));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9bc + 0x191b694));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9c0 + 0x191b6a0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9c4 + 0x191b6ac));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9c8 + 0x191b6b8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9cc + 0x191b6c4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9d0 + 0x191b6d0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9d4 + 0x191b6dc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191b9d8 + 0x191b6e8));
    *pcVar7 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b9dc + 0x191b700));
  func_0x026f769c(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  cVar1 = *(char *)(param_1 + 8);
  *(undefined4 *)(iVar2 + 0xc) = param_4;
  *(undefined4 *)(iVar2 + 8) = param_3;
  if (cVar1 != '\0') {
    if (999999 < (int)param_2) {
      uVar3 = param_2 - 0xf4628;
      if ((int)param_2 < 0xf4628) {
        param_2 = param_2 - 1000000;
        iVar4 = 0;
      }
      else {
        param_2 = uVar3 % 1000;
        iVar4 = uVar3 / 1000 + 1;
      }
      if (iVar4 != 0) {
        param_2 = param_2 + 100000;
      }
      if (iVar4 != 0) {
        param_2 = (iVar4 * 1000 + param_2) - 1000;
      }
    }
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    puVar9 = *(undefined4 **)(_UNK_0191b9e0 + 0x191b7d0);
    uVar3 = func_0x026f88d4(iVar4,param_2,&iStack_1c,*puVar9);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar8 = *(undefined4 *)(iVar2 + 8);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    uVar5 = func_0x026f88d4(iVar4,uVar8,&iStack_20,*puVar9);
    iVar4 = iStack_1c;
    if ((uVar3 | uVar5) == 1) {
      if (iStack_1c != 0) {
        uVar8 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b9e4 + 0x191b824));
        func_0x02e51fac(uVar8,iVar2,**(undefined4 **)(_UNK_0191b9e8 + 0x191b840),0);
        iVar6 = func_0x02b0b99c(iVar4,uVar8,**(undefined4 **)(_UNK_0191b9ec + 0x191b858));
        iVar4 = iStack_1c;
        if (iVar6 != 0) {
          if (iStack_1c == 0) {
            func_0x0165b6e0();
          }
          func_0x02b0ca74(iVar4,iVar6,**(undefined4 **)(_UNK_0191b9f0 + 0x191b88c));
        }
      }
      if (iStack_20 != 0) {
        iVar4 = func_0x024325f4(iStack_20,**(undefined4 **)(_UNK_0191b9f4 + 0x191b8ac));
        uVar3 = iVar4 - 1;
        if (-1 < (int)uVar3) {
          puVar9 = *(undefined4 **)(_UNK_0191b9f8 + 0x191b8c8);
          do {
            iVar4 = iStack_20;
            if (iStack_20 == 0) {
              func_0x0165b6e0();
            }
            iVar4 = func_0x02b0af9c(iVar4,uVar3,*puVar9);
            if (iVar4 == 0) {
              func_0x0165b6e0();
              iVar6 = *(int *)(iVar2 + 8);
              if (iRam00000008 == iVar6) {
                func_0x0165b6e0();
                goto LAB_0191b91c;
              }
            }
            else {
              iVar6 = *(int *)(iVar2 + 8);
              if (*(int *)(iVar4 + 8) == iVar6) {
LAB_0191b91c:
                iVar6 = iStack_20;
                if (*(int *)(iVar4 + 0xc) == *(int *)(iVar2 + 0xc)) {
                  if (iStack_20 == 0) {
                    func_0x0165b6e0();
                  }
                  func_0x02b0cd50(iVar6,uVar3,**(undefined4 **)(_UNK_0191b9fc + 0x191b9a4));
                  return;
                }
                iVar6 = *(int *)(iVar2 + 8);
              }
            }
            iVar4 = iStack_20;
            if (iVar6 != 0) {
              if (iStack_20 == 0) {
                func_0x0165b6e0();
              }
              iVar4 = func_0x02b0af9c(iVar4,uVar3,*puVar9);
              if (iVar4 == 0) {
                func_0x0165b6e0();
              }
              *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 < 0x80000000);
        }
      }
    }
  }
  return;
}


/* ItemChainManager.InitializeSpawnerQuery VA=0x190D018 | public void InitializeSpawnerQuery(List<BoardPositionEntity> positions, List<ItemEntity> inventoryItems, List<RewardEntity> activeRewards) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_InitializeSpawnerQuery_190D018
               (int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  pcVar3 = (char *)(_UNK_0191d40c + 0x191d038);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191d410 + 0x191d050));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d414 + 0x191d05c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d418 + 0x191d068));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d41c + 0x191d074));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d420 + 0x191d080));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d424 + 0x191d08c));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 8) == '\0') {
    iVar5 = 0;
    puVar6 = *(undefined4 **)(_UNK_0191d428 + 0x191d0b8);
    while( true ) {
      if (param_2 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(param_2 + 0xc) <= iVar5) break;
      iVar1 = func_0x02b0af9c(param_2,iVar5,*puVar6);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        iVar1 = func_0x02b0af9c(param_2,iVar5,*puVar6);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        uVar4 = *(uint *)(iVar1 + 0x14);
        if (999999 < (int)uVar4) {
          uVar2 = uVar4 - 0xf4628;
          if ((int)uVar4 < 0xf4628) {
            uVar4 = uVar4 - 1000000;
            iVar1 = 0;
          }
          else {
            uVar4 = uVar2 % 1000;
            iVar1 = uVar2 / 1000 + 1;
          }
          if (iVar1 != 0) {
            uVar4 = uVar4 + 100000;
          }
          if (iVar1 != 0) {
            uVar4 = (iVar1 * 1000 + uVar4) - 1000;
          }
        }
        iVar1 = func_0x02b0af9c(param_2,iVar5,*puVar6);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        ItemChainManager_AddToQueryList_190E8D0
                  (param_1,uVar4,0,iVar5,*(undefined4 *)(iVar1 + 0x10),1);
      }
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    puVar6 = *(undefined4 **)(_UNK_0191d42c + 0x191d210);
    while( true ) {
      if (param_3 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(param_3 + 0xc) <= iVar5) break;
      iVar1 = func_0x02b0af9c(param_3,iVar5,*puVar6);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = *(uint *)(iVar1 + 0x14);
      if (999999 < (int)uVar4) {
        uVar2 = uVar4 - 0xf4628;
        if ((int)uVar4 < 0xf4628) {
          uVar4 = uVar4 - 1000000;
          iVar1 = 0;
        }
        else {
          uVar4 = uVar2 % 1000;
          iVar1 = uVar2 / 1000 + 1;
        }
        if (iVar1 != 0) {
          uVar4 = uVar4 + 100000;
        }
        if (iVar1 != 0) {
          uVar4 = (iVar1 * 1000 + uVar4) - 1000;
        }
      }
      iVar1 = func_0x02b0af9c(param_3,iVar5,*puVar6);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      ItemChainManager_AddToQueryList_190E8D0(param_1,uVar4,1,iVar5,*(undefined4 *)(iVar1 + 0x10),1)
      ;
      iVar5 = iVar5 + 1;
    }
    iVar5 = 0;
    puVar6 = *(undefined4 **)(_UNK_0191d430 + 0x191d314);
    while( true ) {
      if (param_4 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(param_4 + 0xc) <= iVar5) break;
      iVar1 = func_0x02b0af9c(param_4,iVar5,*puVar6);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = *(uint *)(iVar1 + 0xc);
      if (999999 < (int)uVar4) {
        uVar2 = uVar4 - 0xf4628;
        if ((int)uVar4 < 0xf4628) {
          uVar4 = uVar4 - 1000000;
          iVar1 = 0;
        }
        else {
          uVar4 = uVar2 % 1000;
          iVar1 = uVar2 / 1000 + 1;
        }
        if (iVar1 != 0) {
          uVar4 = uVar4 + 100000;
        }
        if (iVar1 != 0) {
          uVar4 = (iVar1 * 1000 + uVar4) - 1000;
        }
      }
      iVar1 = func_0x02b0af9c(param_4,iVar5,*puVar6);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      ItemChainManager_AddToQueryList_190E8D0(param_1,uVar4,2,iVar5,*(undefined4 *)(iVar1 + 8),1);
      iVar5 = iVar5 + 1;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


/* ItemChainManager.SetQueryLock VA=0x190F200 | public void SetQueryLock(bool locked) { } */

void ItemChainManager_SetQueryLock_190F200(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  return;
}


/* ItemChainManager.ctor VA=0x1903D14 | public void .ctor() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_ctor_1903D14(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_01913db8 + 0x1913d28);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01913dbc + 0x1913d3c));
    func_0x0165b424(*(undefined4 *)(_UNK_01913dc0 + 0x1913d48));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_01913dc4 + 0x1913d5c);
  uVar1 = func_0x0165b6d4(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_01913dc8 + 0x1913d70);
  func_0x026f8834(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  func_0x0165b3c0((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = func_0x0165b6d4(*puVar3);
  func_0x026f8834(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x10),uVar1);
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* ItemChainManager.ctor VA=0x190328C | public void .ctor(KiteNewSpawnerConfig kiteConfig, BoardEntity boardEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_ctor_190328C(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01913c6c + 0x19132ac);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01913c70 + 0x19132c0));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c74 + 0x19132cc));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c78 + 0x19132d8));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c7c + 0x19132e4));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c80 + 0x19132f0));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c84 + 0x19132fc));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c88 + 0x1913308));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c8c + 0x1913314));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c90 + 0x1913320));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c94 + 0x191332c));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c98 + 0x1913338));
    func_0x0165b424(*(undefined4 *)(_UNK_01913c9c + 0x1913344));
    func_0x0165b424(*(undefined4 *)(_UNK_01913ca0 + 0x1913350));
    func_0x0165b424(*(undefined4 *)(_UNK_01913ca4 + 0x191335c));
    func_0x0165b424(*(undefined4 *)(_UNK_01913ca8 + 0x1913368));
    func_0x0165b424(*(undefined4 *)(_UNK_01913cac + 0x1913374));
    func_0x0165b424(*(undefined4 *)(_UNK_01913cb0 + 0x1913380));
    func_0x0165b424(*(undefined4 *)(_UNK_01913cb4 + 0x191338c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01913cb8 + 0x19133a8));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_01913cbc + 0x19133c0));
  piVar2 = (int *)(param_1 + 0xc);
  *piVar2 = iVar1;
  func_0x0165b3c0(piVar2,iVar1);
  uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01913cc0 + 0x19133e8));
  func_0x026f8834(uVar3,**(undefined4 **)(_UNK_01913cc4 + 0x19133fc));
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x10),uVar3);
  puVar8 = *(undefined4 **)(_UNK_01913cc8 + 0x1913420);
  uVar3 = func_0x0165b6d4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01913ccc + 0x1913434);
  func_0x026f8834(uVar3,*puVar9);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x14),uVar3);
  uVar3 = func_0x0165b6d4(*puVar8);
  func_0x026f8834(uVar3,*puVar9);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x18),uVar3);
  puVar8 = *(undefined4 **)(_UNK_01913cd0 + 0x1913478);
  uVar3 = func_0x0165b6d4(*puVar8);
  puVar9 = *(undefined4 **)(_UNK_01913cd4 + 0x191348c);
  func_0x026f8910(uVar3,*puVar9);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x1c),uVar3);
  iVar1 = func_0x0165b6d4(*puVar8);
  func_0x026f8910(iVar1,*puVar9);
  if (iVar1 == 0) {
    func_0x0165b6e0();
    puVar8 = *(undefined4 **)(_UNK_01913cdc + 0x19136ec);
    func_0x026f8914(0,10,0,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0xb,0,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0xc,0,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x14,1,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x15,1,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x16,1,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x1e,2,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x1f,2,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x20,2,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x28,3,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x29,4,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x2a,4,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x32,5,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x33,5,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x50,6,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x51,6,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x52,6,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x55,7,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x56,7,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x57,7,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x5a,8,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x5b,8,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x5f,9,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x60,9,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x61,9,*puVar8);
    func_0x0165b6e0();
    func_0x026f8914(0,0x96,10,*puVar8);
    func_0x0165b6e0();
  }
  else {
    puVar8 = *(undefined4 **)(_UNK_01913cd8 + 0x19134d4);
    func_0x026f8914(iVar1,10,0,*puVar8);
    func_0x026f8914(iVar1,0xb,0,*puVar8);
    func_0x026f8914(iVar1,0xc,0,*puVar8);
    func_0x026f8914(iVar1,0x14,1,*puVar8);
    func_0x026f8914(iVar1,0x15,1,*puVar8);
    func_0x026f8914(iVar1,0x16,1,*puVar8);
    func_0x026f8914(iVar1,0x1e,2,*puVar8);
    func_0x026f8914(iVar1,0x1f,2,*puVar8);
    func_0x026f8914(iVar1,0x20,2,*puVar8);
    func_0x026f8914(iVar1,0x28,3,*puVar8);
    func_0x026f8914(iVar1,0x29,4,*puVar8);
    func_0x026f8914(iVar1,0x2a,4,*puVar8);
    func_0x026f8914(iVar1,0x32,5,*puVar8);
    func_0x026f8914(iVar1,0x33,5,*puVar8);
    func_0x026f8914(iVar1,0x50,6,*puVar8);
    func_0x026f8914(iVar1,0x51,6,*puVar8);
    func_0x026f8914(iVar1,0x52,6,*puVar8);
    func_0x026f8914(iVar1,0x55,7,*puVar8);
    func_0x026f8914(iVar1,0x56,7,*puVar8);
    func_0x026f8914(iVar1,0x57,7,*puVar8);
    func_0x026f8914(iVar1,0x5a,8,*puVar8);
    func_0x026f8914(iVar1,0x5b,8,*puVar8);
    func_0x026f8914(iVar1,0x5f,9,*puVar8);
    func_0x026f8914(iVar1,0x60,9,*puVar8);
    func_0x026f8914(iVar1,0x61,9,*puVar8);
    func_0x026f8914(iVar1,0x96,10,*puVar8);
  }
  func_0x026f8914(iVar1,0x97,10,**(undefined4 **)(_UNK_01913ce0 + 0x1913960));
  *(int *)(param_1 + 0x20) = iVar1;
  func_0x0165b3c0((int *)(param_1 + 0x20),iVar1);
  func_0x026f769c(param_1,0);
  uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01913ce4 + 0x1913990));
  ItemChainManager_ctor_1903D14();
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x28),uVar3);
  *(undefined4 *)(param_1 + 8) = param_2;
  func_0x0165b3c0((undefined4 *)(param_1 + 8),param_2);
  *(undefined4 *)(param_1 + 0x24) = param_3;
  func_0x0165b3c0((undefined4 *)(param_1 + 0x24),param_3);
  piVar7 = *(int **)(_UNK_01913ce8 + 0x19139d8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar6 = (char *)(_UNK_01913cec + 0x19139f4);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01913cf0 + 0x1913a08));
    *pcVar6 = '\x01';
  }
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar7;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar4 = (int *)func_0x0187d458(iVar1,600,0);
  piVar7 = (int *)0x0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (uint)*(byte *)(**(int **)(_UNK_01913cf4 + 0x1913a74) + 0xb8);
    if ((uVar5 <= *(byte *)(*piVar4 + 0xb8)) &&
       (piVar7 = piVar4,
       *(int *)(*(int *)(*piVar4 + 100) + uVar5 * 4 + -4) != **(int **)(_UNK_01913cf4 + 0x1913a74)))
    {
      piVar7 = (int *)0x0;
    }
  }
  if (*(int *)(**(int **)(_UNK_01913cf8 + 0x1913aac) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x026f7930(piVar7,0,0);
  if (iVar1 == 0) {
    if (piVar7 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = piVar7[5];
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_38,iVar1,**(undefined4 **)(_UNK_01913cfc + 0x1913b08));
    puVar8 = *(undefined4 **)(_UNK_01913d00 + 0x1913b1c);
    piVar7 = *(int **)(_UNK_01913d04 + 0x1913b24);
    while (iVar1 = func_0x01710964(&uStack_38,*puVar8), uVar3 = uStack_2c, iVar1 != 0) {
      iVar1 = *piVar2;
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)(iVar1 + 8);
      uVar5 = *(uint *)(iVar1 + 0xc);
      iVar11 = *piVar7;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar10 == 0) {
        func_0x0165b6e0();
      }
      if (uVar5 < *(uint *)(iVar10 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar5 + 1;
        puVar9 = (undefined4 *)(iVar10 + uVar5 * 4 + 0x10);
        *puVar9 = uVar3;
        func_0x0165b3c0(puVar9,uVar3);
      }
      else {
        func_0x02b0b274(iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01913d08 + 0x1913bc0));
    func_0x01913dcc(param_1);
    func_0x01cb1b8c(param_1,0);
  }
  return;
}


/* ItemChainManager.SetBoardEntity VA=0x19040E0 | public void SetBoardEntity(BoardEntity boardEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_SetBoardEntity_19040E0(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x24);
  *puVar3 = param_2;
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* ItemChainManager.SetWaitingArchiveTasksReadyForRemoval VA=0x19040E8 | public void SetWaitingArchiveTasksReadyForRemoval() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_SetWaitingArchiveTasksReadyForRemoval_19040E8(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01914358 + 0x1914100);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191435c + 0x1914114));
    func_0x0165b424(*(undefined4 *)(_UNK_01914360 + 0x1914120));
    func_0x0165b424(*(undefined4 *)(_UNK_01914364 + 0x191412c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914368 + 0x1914138));
    func_0x0165b424(*(undefined4 *)(_UNK_0191436c + 0x1914144));
    func_0x0165b424(*(undefined4 *)(_UNK_01914370 + 0x1914150));
    func_0x0165b424(*(undefined4 *)(_UNK_01914374 + 0x191415c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914378 + 0x1914168));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x24);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar7 = *(int **)(_UNK_0191437c + 0x19141a8);
  iVar2 = *(int *)(iVar1 + 0x10);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar7;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar4 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar7;
    }
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    iVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_01914380 + 0x19141f4));
    func_0x02e51fac(iVar4,uVar6,**(undefined4 **)(_UNK_01914384 + 0x1914214),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar4;
    func_0x0165b3c0(piVar7,iVar4);
  }
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x02b0ba68(iVar2,iVar4,**(undefined4 **)(_UNK_01914388 + 0x191424c));
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_28,iVar1,**(undefined4 **)(_UNK_0191438c + 0x1914278));
  puVar5 = *(undefined4 **)(_UNK_01914390 + 0x1914290);
  while (iVar2 = func_0x01710964(&uStack_28,*puVar5), iVar1 = iStack_1c, iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x0165b6e0();
    }
    *(undefined2 *)(iVar1 + 0x14) = 0x100;
  }
  func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01914394 + 0x19142c4));
  return;
}


/* ItemChainManager.SetArchiveTaskForRemoval VA=0x19043A0 | public void SetArchiveTaskForRemoval(ItemLinkID linkID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_SetArchiveTaskForRemoval_19043A0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_019144ac + 0x19143b8);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019144b0 + 0x19143cc));
    func_0x0165b424(*(undefined4 *)(_UNK_019144b4 + 0x19143d8));
    func_0x0165b424(*(undefined4 *)(_UNK_019144b8 + 0x19143e4));
    func_0x0165b424(*(undefined4 *)(_UNK_019144bc + 0x19143f0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_019144c0 + 0x1914404));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar3 = *(int *)(param_1 + 0x24);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x18);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x10);
  uVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_019144c4 + 0x1914450));
  func_0x02e51fac(uVar2,iVar1,**(undefined4 **)(_UNK_019144c8 + 0x1914470),0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x02b0b99c(iVar3,uVar2,**(undefined4 **)(_UNK_019144cc + 0x1914494));
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0x14) = 0x101;
  }
  return;
}


/* ItemChainManager.TryEnqueueArchivePopup VA=0x19044D8 | public void TryEnqueueArchivePopup() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_TryEnqueueArchivePopup_19044D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01914730 + 0x19144f0);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01914734 + 0x1914504));
    func_0x0165b424(*(undefined4 *)(_UNK_01914738 + 0x1914510));
    func_0x0165b424(*(undefined4 *)(_UNK_0191473c + 0x191451c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914740 + 0x1914528));
    func_0x0165b424(*(undefined4 *)(_UNK_01914744 + 0x1914534));
    func_0x0165b424(*(undefined4 *)(_UNK_01914748 + 0x1914540));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x18);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar4 + 0x10) == 0) {
      iVar4 = *(int *)(param_1 + 0x24);
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      iVar4 = *(int *)(iVar4 + 0x18);
      uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191474c + 0x1914598));
      func_0x02b0a9f0(uVar1,**(undefined4 **)(_UNK_01914750 + 0x19145b0));
      if (iVar4 == 0) {
        func_0x0165b6e0();
      }
      puVar5 = (undefined4 *)(iVar4 + 0x10);
      *puVar5 = uVar1;
      func_0x0165b3c0(puVar5,uVar1);
    }
    iVar4 = *(int *)(param_1 + 0x24);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_28,iVar4,**(undefined4 **)(_UNK_01914754 + 0x1914618));
    puVar5 = *(undefined4 **)(_UNK_01914758 + 0x191462c);
    while (iVar2 = func_0x01710964(&uStack_28,*puVar5), iVar4 = iStack_1c, iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x0165b6e0();
      }
      iVar2 = func_0x0194718c(iVar4,0);
      if (iVar2 != 0) {
        if (iVar4 == 0) {
          func_0x0165b6e0();
        }
        uVar1 = func_0x0191476c(param_1,*(undefined4 *)(iVar4 + 0x10));
        func_0x01e577f0(uVar1,0);
      }
    }
    func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01914760 + 0x1914690));
  }
  return;
}


/* ItemChainManager.UpdateArchiveTasks VA=0x19047C8 | public void UpdateArchiveTasks() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_UpdateArchiveTasks_19047C8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_01914c60 + 0x19147e0);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01914c64 + 0x19147f4));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c68 + 0x1914800));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c6c + 0x191480c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c70 + 0x1914818));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c74 + 0x1914824));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c78 + 0x1914830));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c7c + 0x191483c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c80 + 0x1914848));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c84 + 0x1914854));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c88 + 0x1914860));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c8c + 0x191486c));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c90 + 0x1914878));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c94 + 0x1914884));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c98 + 0x1914890));
    func_0x0165b424(*(undefined4 *)(_UNK_01914c9c + 0x191489c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0x24) + 0x18);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar7 + 0x10) == 0) {
      iVar7 = *(int *)(param_1 + 0x24);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar7 + 0x18);
      uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01914ca0 + 0x19148f4));
      func_0x02b0a9f0(uVar1,**(undefined4 **)(_UNK_01914ca4 + 0x191490c));
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      puVar8 = (undefined4 *)(iVar7 + 0x10);
      *puVar8 = uVar1;
      func_0x0165b3c0(puVar8,uVar1);
    }
    if (*(int *)(**(int **)(_UNK_01914ca8 + 0x191493c) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar2 = func_0x018bee9c(0);
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x18);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x10);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_48,iVar7,**(undefined4 **)(_UNK_01914cac + 0x191499c));
    bVar9 = false;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar8 = *(undefined4 **)(_UNK_01914cb0 + 0x19149bc);
    piVar10 = *(int **)(_UNK_01914cb4 + 0x19149c4);
    puVar11 = *(undefined4 **)(_UNK_01914cb8 + 0x19149cc);
    while (iVar3 = func_0x01710964(&uStack_38,*puVar8), iVar7 = iStack_2c, iVar3 != 0) {
      if (iStack_2c == 0) {
        func_0x0165b6e0();
      }
      iVar3 = func_0x0194718c(iVar7,0);
      if (iVar3 == 0) {
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar7 + 0xc);
        bVar12 = uVar2 < *(uint *)(iVar7 + 8);
        iVar3 = (int)uVar2 >> 0x1f;
        if ((int)(iVar3 - (iVar5 + (uint)bVar12)) < 0 ==
            (SBORROW4(iVar3,iVar5) != SBORROW4(iVar3 - iVar5,(uint)bVar12))) {
          puVar4 = *(undefined4 **)(_UNK_01914cbc + 0x1914a2c);
          *(undefined2 *)(iVar7 + 0x14) = 0x100;
          func_0x02552614(*puVar4);
          uVar1 = *(undefined4 *)(iVar7 + 0x10);
          if (*(int *)(**(int **)(_UNK_01914cc0 + 0x1914a40) + 0x74) == 0) {
            func_0x0165b5a4();
          }
          func_0x026f9a30(uVar1,**(undefined4 **)(_UNK_01914cc4 + 0x1914a60));
          if (*(int *)(*piVar10 + 0x74) == 0) {
            func_0x0165b5a4();
          }
          bVar9 = true;
          func_0x026f9a34(0,*puVar11);
        }
      }
    }
    func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01914cc8 + 0x1914a9c));
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x18);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(iVar7 + 0x10);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = *(int *)(iVar7 + 0xc) - 1;
    if (-1 < (int)uVar2) {
      puVar8 = *(undefined4 **)(_UNK_01914cd0 + 0x1914aec);
      puVar11 = *(undefined4 **)(_UNK_01914cd4 + 0x1914af4);
      do {
        iVar7 = *(int *)(param_1 + 0x24);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = *(int *)(iVar7 + 0x18);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = *(int *)(iVar7 + 0x10);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = func_0x02b0af9c(iVar7,uVar2,*puVar8);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = func_0x019471cc(iVar7,0);
        if (iVar7 != 0) {
          iVar7 = *(int *)(param_1 + 0x24);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = *(int *)(iVar7 + 0x18);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = *(int *)(iVar7 + 0x10);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          func_0x02b0cd50(iVar7,uVar2,*puVar11);
          bVar9 = true;
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 < 0x80000000);
    }
    if (bVar9) {
      func_0x01c5865c(0,0);
    }
  }
  return;
}


/* ItemChainManager.InitializeChains VA=0x1903DCC | private void InitializeChains() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_InitializeChains_1903DCC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01914094 + 0x1913de4);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01914098 + 0x1913df8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191409c + 0x1913e04));
    func_0x0165b424(*(undefined4 *)(_UNK_019140a0 + 0x1913e10));
    func_0x0165b424(*(undefined4 *)(_UNK_019140a4 + 0x1913e1c));
    func_0x0165b424(*(undefined4 *)(_UNK_019140a8 + 0x1913e28));
    func_0x0165b424(*(undefined4 *)(_UNK_019140ac + 0x1913e34));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x01914cdc(param_1);
  piVar5 = *(int **)(_UNK_019140b0 + 0x1913e5c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar3 = (char *)(_UNK_019140b4 + 0x1913e78);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019140b8 + 0x1913e8c));
    *pcVar3 = '\x01';
  }
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar2 = *piVar5;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar2 + 0x9c) == 0) {
    uVar6 = 1;
  }
  else {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    if (*pcVar3 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_019140bc + 0x1913ef8));
      *pcVar3 = '\x01';
    }
    iVar2 = *piVar5;
    if (*(int *)(iVar2 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar2 = *piVar5;
    }
    iVar2 = **(int **)(iVar2 + 0x5c);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x9c);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x1c);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_30,iVar2,**(undefined4 **)(_UNK_019140c0 + 0x1913f7c));
  puVar4 = *(undefined4 **)(_UNK_019140c4 + 0x1913f90);
  piVar5 = *(int **)(_UNK_019140c8 + 0x1913f98);
  while (iVar2 = func_0x01710964(&uStack_30,*puVar4), uVar1 = uStack_24, iVar2 != 0) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar2 = func_0x026f7720(uVar1,0,0);
    if (iVar2 != 0) {
      func_0x01914dcc(param_1,uVar1,uVar6);
    }
  }
  func_0x0172cd54(&uStack_30,**(undefined4 **)(_UNK_019140d0 + 0x1913ff8));
  return;
}


/* ItemChainManager.ClearAllCaches VA=0x1904CDC | private void ClearAllCaches() { } */

/* WARNING: Possible PIC construction at 0x01914d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01914d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01914d48) */
/* WARNING: Removing unreachable block (ram,0x01914d54) */
/* WARNING: Removing unreachable block (ram,0x01914d58) */
/* WARNING: Removing unreachable block (ram,0x01914d6c) */
/* WARNING: Removing unreachable block (ram,0x01914d78) */
/* WARNING: Removing unreachable block (ram,0x01914d7c) */
/* WARNING: Removing unreachable block (ram,0x01914d9c) */
/* WARNING: Removing unreachable block (ram,0x01914da0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_ClearAllCaches_1904CDC(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pcVar1 = (char *)(_UNK_01914db0 + 0x1914cf0);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01914db4 + 0x1914d04));
    func_0x0165b424(*(undefined4 *)(_UNK_01914db8 + 0x1914d10));
    func_0x0165b424(*(undefined4 *)(_UNK_01914dbc + 0x1914d1c));
    *pcVar1 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar2 + 0x10);
  if (0 < iVar3) {
    iVar4 = *(int *)(iVar2 + 8);
    iVar5 = iVar2;
    if (iVar4 == 0) {
      func_0x027026bc(iVar2,**(undefined4 **)(_UNK_01914dc0 + 0x1914d40));
    }
    func_0x048da6b8(iVar4,0,*(undefined4 *)(iVar4 + 0xc),0,param_1,iVar5);
    *(undefined4 *)(iVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    func_0x048da6b8(*(undefined4 *)(iVar2 + 0xc),0,iVar3,0);
  }
  *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
  return;
}


/* ItemChainManager.ProcessChainData VA=0x1904DCC | private void ProcessChainData(ItemChainScriptableData chainData, int userLevel) { } */

/* WARNING: Possible PIC construction at 0x019152c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0168be70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0168be74) */
/* WARNING: Removing unreachable block (ram,0x01915620) */
/* WARNING: Removing unreachable block (ram,0x019152d0) */
/* WARNING: Removing unreachable block (ram,0x019152c4) */
/* WARNING: Removing unreachable block (ram,0x0165b6dc) */
/* WARNING: Removing unreachable block (ram,0x0168be4c) */
/* WARNING: Removing unreachable block (ram,0x0168be50) */
/* WARNING: Removing unreachable block (ram,0x0168c8e0) */
/* WARNING: Removing unreachable block (ram,0x0168c8f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_ProcessChainData_1904DCC(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  
  pcVar10 = (char *)(_UNK_019157f8 + 0x1914dec);
  if (*pcVar10 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019157fc + 0x1914e00));
    func_0x0165b424(*(undefined4 *)(_UNK_01915800 + 0x1914e0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915804 + 0x1914e18));
    func_0x0165b424(*(undefined4 *)(_UNK_01915808 + 0x1914e24));
    func_0x0165b424(*(undefined4 *)(_UNK_0191580c + 0x1914e30));
    func_0x0165b424(*(undefined4 *)(_UNK_01915810 + 0x1914e3c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915814 + 0x1914e48));
    func_0x0165b424(*(undefined4 *)(_UNK_01915818 + 0x1914e54));
    func_0x0165b424(*(undefined4 *)(_UNK_0191581c + 26300000));
    func_0x0165b424(*(undefined4 *)(_UNK_01915820 + 0x1914e6c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915824 + 0x1914e78));
    func_0x0165b424(*(undefined4 *)(_UNK_01915828 + 0x1914e84));
    func_0x0165b424(*(undefined4 *)(_UNK_0191582c + 0x1914e90));
    func_0x0165b424(*(undefined4 *)(_UNK_01915830 + 0x1914e9c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915834 + 0x1914ea8));
    *pcVar10 = '\x01';
  }
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x01915888(param_2);
  iVar11 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  uVar13 = *(undefined4 *)(iVar1 + 8);
  if (iVar11 == 0) {
    func_0x0165b6e0();
  }
  func_0x026f8814(iVar11,uVar13,iVar1,**(undefined4 **)(_UNK_01915838 + 0x1914f00));
  iVar11 = func_0x01915b3c(param_1,*(undefined4 *)(iVar1 + 8));
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191583c + 0x1914f24));
  func_0x02ad6c4c(iVar2,**(undefined4 **)(_UNK_01915840 + 0x1914f38));
  piVar12 = *(int **)(iVar1 + 0xc);
  if (piVar12 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar3 = *piVar12;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01915844 + 0x1914f60)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
        goto LAB_01914fac;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_01915844 + 0x1914f60),0);
LAB_01914fac:
  piVar12 = (int *)(*(code *)*puVar4)(piVar12,puVar4[1]);
LAB_01914fc0:
  if (piVar12 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar3 = *piVar12;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01915848 + 0x1914fdc)) {
        puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
        goto LAB_01915024;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_01915848 + 0x1914fdc),0);
LAB_01915024:
  iVar3 = (*(code *)*puVar4)(piVar12,puVar4[1]);
  if (iVar3 != 0) {
    if (piVar12 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar3 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0191584c + 0x1915058)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_019150a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_0191584c + 0x1915058),0);
LAB_019150a0:
    iVar3 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (iVar11 == 0) {
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      uVar13 = *(undefined4 *)(iVar3 + 0xc);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = *(int *)(iVar2 + 8);
      uVar6 = *(uint *)(iVar2 + 0xc);
      piVar7 = *(int **)(_UNK_01915854 + 0x1915180);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar3 = *piVar7;
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      if (uVar6 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar6 + 1;
        *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar13;
      }
      else {
        func_0x02ad74f4(iVar2,uVar13,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38)
                       );
      }
    }
    else {
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = func_0x01915d00(iVar11,*(undefined4 *)(iVar3 + 0xc));
      if (iVar5 == 0) {
        uVar13 = *(undefined4 *)(iVar3 + 0xc);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar2 + 8);
        uVar6 = *(uint *)(iVar2 + 0xc);
        piVar7 = *(int **)(_UNK_01915850 + 0x19151dc);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar3 = *piVar7;
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        if (uVar6 < *(uint *)(iVar5 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar5 + uVar6 * 4 + 0x10) = uVar13;
        }
        else {
          func_0x02ad74f4(iVar2,uVar13,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
        }
      }
      else {
        uVar13 = *(undefined4 *)(iVar5 + 0x14);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x18);
        *(undefined4 *)(iVar3 + 0x14) = uVar13;
        func_0x01915ec0(param_1,iVar3);
        if (param_2 == 0) {
          func_0x0165b6e0();
        }
        func_0x01915f48(param_1,iVar3,*(undefined4 *)(param_2 + 0xc),param_3);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        func_0x01916050(param_1,iVar3,*(undefined4 *)(iVar1 + 8));
      }
    }
    goto LAB_01914fc0;
  }
  if (piVar12 != (int *)0x0) {
    iVar11 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01915858 + 0x1915264)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_019152ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_01915858 + 0x1915264),0);
LAB_019152ac:
    (*(code *)*puVar4)(piVar12,puVar4[1]);
  }
  piVar12 = *(int **)(_UNK_0191585c + 0x19152e4);
  iVar11 = *piVar12;
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x0165b5a4(iVar11);
    iVar11 = *piVar12;
  }
  iVar3 = *(int *)(*(int *)(iVar11 + 0x5c) + 8);
  if (iVar3 == 0) {
    if (*(int *)(iVar11 + 0x74) == 0) {
      func_0x0165b5a4(iVar11);
      iVar11 = *piVar12;
    }
    uVar13 = **(undefined4 **)(iVar11 + 0x5c);
    iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01915860 + 0x1915334));
    func_0x026f87e4(iVar3,uVar13,**(undefined4 **)(_UNK_01915864 + 0x1915354),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 8);
    *piVar12 = iVar3;
    func_0x0165b3c0(piVar12,iVar3);
  }
  piVar12 = (int *)func_0x024449fc(iVar2,iVar3,**(undefined4 **)(_UNK_01915868 + 0x1915380));
  if (piVar12 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar11 = *piVar12;
  uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0191586c + 0x19153a8)) {
        puVar4 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
        goto LAB_019153f0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_0191586c + 0x19153a8),0);
LAB_019153f0:
  piVar12 = (int *)(*(code *)*puVar4)(piVar12,puVar4[1]);
  piVar7 = *(int **)(_UNK_01915874 + 0x1915410);
  piVar14 = *(int **)(_UNK_01915878 + 0x1915418);
  do {
    if (piVar12 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar11 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_0191587c + 0x1915430)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_01915478;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_0191587c + 0x1915430),0);
LAB_01915478:
    iVar11 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (iVar11 == 0) break;
    if (piVar12 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar11 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar11 + *piVar8 * 8 + 0xc0);
          goto LAB_019154ec;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar12,*piVar7,0);
LAB_019154ec:
    uVar13 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    piVar8 = *(int **)(iVar1 + 0xc);
    if (piVar8 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar11 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar9[-1] == *piVar14) {
          puVar4 = (undefined4 *)(iVar11 + *piVar9 * 8 + 0xc0);
          goto LAB_0191556c;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar8,*piVar14,0);
LAB_0191556c:
    uVar13 = (*(code *)*puVar4)(piVar8,uVar13,puVar4[1]);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    func_0x01916210(iVar1,uVar13,0);
  } while( true );
  uVar13 = 0;
  if (piVar12 != (int *)0x0) {
    iVar1 = *piVar12;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_01915880 + 0x19155c0)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_01915608;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar12,**(int **)(_UNK_01915880 + 0x19155c0),0);
LAB_01915608:
    uVar13 = (*(code *)*puVar4)(piVar12,puVar4[1]);
  }
  return uVar13;
}


/* ItemChainManager.FindKiteChain VA=0x1905B3C | private KiteItemChain FindKiteChain(int chainIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_FindKiteChain_1905B3C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  puVar2 = &uStack_28;
  pcVar3 = (char *)(_UNK_01915cd4 + 0x1915b58);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01915cd8 + 0x1915b6c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915cdc + 0x1915b78));
    func_0x0165b424(*(undefined4 *)(_UNK_01915ce0 + 0x1915b84));
    func_0x0165b424(*(undefined4 *)(_UNK_01915ce4 + 0x1915b90));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar4 = 0;
  uStack_28 = 0;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(iVar1 + 0x14);
  }
  if (iVar1 != 0 && puVar2 != (undefined4 *)0x0) {
    func_0x02b0bf88(&uStack_28,puVar2,**(undefined4 **)(_UNK_01915ce8 + 0x1915bd8));
    puVar2 = *(undefined4 **)(_UNK_01915cec + 0x1915bec);
    do {
      iVar1 = func_0x01710964(&uStack_28,*puVar2);
      iVar4 = iStack_1c;
      if (iVar1 == 0) {
        func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01915cf0 + 0x1915c40));
        return 0;
      }
      if (iStack_1c == 0) {
        func_0x0165b6e0();
      }
    } while (*(int *)(iVar4 + 8) != param_2);
    func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01915cfc + 0x1915c24));
  }
  return iVar4;
}


/* ItemChainManager.FindKiteLink VA=0x1905D00 | private static KiteItemLink FindKiteLink(KiteItemChain kiteChain, int linkIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_FindKiteLink_1905D00(int param_1,int param_2)

{
  int extraout_r1;
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_01915e94 + 0x1915d1c);
  iVar1 = param_2;
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01915e98 + 0x1915d30));
    func_0x0165b424(*(undefined4 *)(_UNK_01915e9c + 0x1915d3c));
    func_0x0165b424(*(undefined4 *)(_UNK_01915ea0 + 0x1915d48));
    func_0x0165b424(*(undefined4 *)(_UNK_01915ea4 + 0x1915d54));
    *pcVar2 = '\x01';
    iVar1 = extraout_r1;
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  iVar4 = 0;
  uStack_28 = 0;
  if (param_1 != 0 && iVar1 != 0) {
    func_0x02b0bf88(&uStack_28,iVar1,**(undefined4 **)(_UNK_01915ea8 + 0x1915d98));
    puVar3 = *(undefined4 **)(_UNK_01915eac + 0x1915dac);
    do {
      iVar1 = func_0x01710964(&uStack_28,*puVar3);
      iVar4 = iStack_1c;
      if (iVar1 == 0) {
        func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01915eb0 + 0x1915e00));
        return 0;
      }
      if (iStack_1c == 0) {
        func_0x0165b6e0();
      }
    } while (*(int *)(iVar4 + 0xc) != param_2);
    func_0x0172cd54(&uStack_28,**(undefined4 **)(_UNK_01915ebc + 0x1915de4));
  }
  return iVar4;
}


/* ItemChainManager.FindActiveLinkBySetID VA=0x1906298 | private ItemLinkModel FindActiveLinkBySetID(int setId) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_FindActiveLinkBySetID_1906298(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_01916340 + 0x19162b4);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916344 + 0x19162c8));
    func_0x0165b424(*(undefined4 *)(_UNK_01916348 + 0x19162d4));
    *pcVar1 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar2 = 0;
  uStack_1c = 0;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f8918(iVar3,param_2,&uStack_1c,**(undefined4 **)(_UNK_0191634c + 0x1916308));
  if (iVar3 != 0) {
    uVar2 = func_0x023f1db0(*(undefined4 *)(param_1 + 0x18),uStack_1c,
                            **(undefined4 **)(_UNK_01916350 + 0x1916324));
  }
  return uVar2;
}


/* ItemChainManager.FindActiveLinkDataBySetID VA=0x1906354 | public ItemLinkScriptableData FindActiveLinkDataBySetID(int setId) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_FindActiveLinkDataBySetID_1906354(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_019164f4 + 0x1916370);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019164f8 + 0x1916384));
    func_0x0165b424(*(undefined4 *)(_UNK_019164fc + 0x1916390));
    func_0x0165b424(*(undefined4 *)(_UNK_01916500 + 0x191639c));
    func_0x0165b424(*(undefined4 *)(_UNK_01916504 + 0x19163a8));
    func_0x0165b424(*(undefined4 *)(_UNK_01916508 + 0x19163b4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191650c + 0x19163c0));
    *pcVar3 = '\x01';
  }
  uVar6 = 0;
  uStack_24 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916510 + 0x19163d8));
  func_0x026f769c(iVar1,0);
  iVar2 = ItemChainManager_FindActiveLinkBySetID_1906298(param_1,param_2);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar4 = (int *)(iVar1 + 8);
  *piVar4 = iVar2;
  func_0x0165b3c0(piVar4,iVar2);
  if (*piVar4 != 0) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x026f8918(iVar2,param_2,&uStack_24,**(undefined4 **)(_UNK_01916514 + 0x191644c));
    uVar5 = uStack_24;
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar2 = func_0x02b0af9c(iVar2,uVar5,**(undefined4 **)(_UNK_01916518 + 0x1916480));
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
      uVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191651c + 0x19164a4));
      func_0x026f8108(uVar6,iVar1,**(undefined4 **)(_UNK_01916520 + 0x19164c4),0);
      uVar6 = func_0x0243db80(uVar5,uVar6,**(undefined4 **)(_UNK_01916524 + 0x19164dc));
    }
  }
  return uVar6;
}


/* ItemChainManager.FindActiveLinkDataByDefaultSetID VA=0x1906530 | public ItemLinkScriptableData FindActiveLinkDataByDefaultSetID(int defaultSetId) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_FindActiveLinkDataByDefaultSetID_1906530(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_019166e8 + 0x191654c);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019166ec + 0x1916560));
    func_0x0165b424(*(undefined4 *)(_UNK_019166f0 + 0x191656c));
    func_0x0165b424(*(undefined4 *)(_UNK_019166f4 + 0x1916578));
    func_0x0165b424(*(undefined4 *)(_UNK_019166f8 + 0x1916584));
    func_0x0165b424(*(undefined4 *)(_UNK_019166fc + 0x1916590));
    func_0x0165b424(*(undefined4 *)(_UNK_01916700 + 0x191659c));
    func_0x0165b424(*(undefined4 *)(_UNK_01916704 + 0x19165a8));
    *pcVar2 = '\x01';
  }
  uVar6 = 0;
  uStack_1c = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916708 + 0x19165c0));
  func_0x026f769c(iVar1,0);
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f8918(iVar3,param_2,&uStack_1c,**(undefined4 **)(_UNK_0191670c + 0x19165f8));
  if (iVar3 != 0) {
    iVar3 = func_0x023f1db0(*(undefined4 *)(param_1 + 0x18),uStack_1c,
                            **(undefined4 **)(_UNK_01916710 + 0x1916614));
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    piVar4 = (int *)(iVar1 + 8);
    *piVar4 = iVar3;
    func_0x0165b3c0(piVar4,iVar3);
    if (*piVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0xc);
      uVar6 = *(undefined4 *)(*piVar4 + 8);
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = func_0x02b0af9c(iVar3,uVar6,**(undefined4 **)(_UNK_01916714 + 0x1916674));
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      uVar5 = *(undefined4 *)(iVar3 + 0x14);
      uVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916718 + 0x1916698));
      func_0x026f8108(uVar6,iVar1,**(undefined4 **)(_UNK_0191671c + 0x19166b8),0);
      uVar6 = func_0x0243db80(uVar5,uVar6,**(undefined4 **)(_UNK_01916720 + 0x19166d0));
    }
  }
  return uVar6;
}


/* ItemChainManager.CacheLinkById VA=0x1905EC0 | private void CacheLinkById(ItemLinkModel link) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_CacheLinkById_1905EC0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01915f3c + 0x1915ed8);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01915f40 + 0x1915eec));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x0191672c(param_2);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x03e7c624(iVar2,uVar1,param_2,1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01915f44 + 0x1915f30) + 0x10) + 0x60) + 0x88))
  ;
  return;
}


/* ItemChainManager.UpdateActiveLinkIfNecessary VA=0x1905F48 | private void UpdateActiveLinkIfNecessary(ItemLinkModel link, int chainIndex, int userLevel) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_UpdateActiveLinkIfNecessary_1905F48
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_0191603c + 0x1915f68);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916040 + 0x1915f80));
    func_0x0165b424(*(undefined4 *)(_UNK_01916044 + 0x1915f8c));
    *pcVar2 = '\x01';
  }
  iStack_1c = 0;
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(param_2 + 0x14) <= param_4) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = func_0x026f88d4(iVar3,param_3,&iStack_1c,**(undefined4 **)(_UNK_01916048 + 0x1915fd8));
    iVar3 = iStack_1c;
    if (iVar1 != 0) {
      if (iStack_1c == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(param_2 + 0x14) <= *(int *)(iVar3 + 0x14)) {
        return;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    func_0x026f8814(iVar3,param_3,param_2,**(undefined4 **)(_UNK_0191604c + 0x191602c));
  }
  return;
}


/* ItemChainManager.BuildReverseIndexForLink VA=0x1906050 | private void BuildReverseIndexForLink(ItemLinkModel link, int chainIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_BuildReverseIndexForLink_1906050
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar1 = (char *)(_UNK_019161e8 + 0x1916070);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019161ec + 0x1916084));
    func_0x0165b424(*(undefined4 *)(_UNK_019161f0 + 0x1916090));
    func_0x0165b424(*(undefined4 *)(_UNK_019161f4 + 0x191609c));
    func_0x0165b424(*(undefined4 *)(_UNK_019161f8 + 0x19160a8));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  if (-1 < *(int *)(param_2 + 0x18)) {
    func_0x01916830(param_1,*(int *)(param_2 + 0x18),param_3);
  }
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02ad81ec(&uStack_38,iVar2,**(undefined4 **)(_UNK_019161fc + 0x1916100));
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  iStack_1c = iStack_2c;
  puVar3 = *(undefined4 **)(_UNK_01916200 + 0x191611c);
  while (iVar2 = func_0x0170fd74(&uStack_28,*puVar3), iVar2 != 0) {
    if (-1 < iStack_1c) {
      func_0x01916830(param_1,iStack_1c,param_3);
    }
  }
  func_0x026f8948(&uStack_28,**(undefined4 **)(_UNK_01916204 + 0x1916154));
  return;
}


/* ItemChainManager.AddSetIdToChainIndex VA=0x1906830 | private void AddSetIdToChainIndex(int setId, int chainIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_AddSetIdToChainIndex_1906830
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01916898 + 0x191684c);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191689c + 0x1916860));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  func_0x03e721d4(iVar1,param_2,param_3,1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_019168a0 + 0x191688c) + 0x10) + 0x60) + 0x88))
  ;
  return;
}


/* ItemChainManager.FindItemChainWithSetId VA=0x19068A4 | public ItemChainModel FindItemChainWithSetId(int setId) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_FindItemChainWithSetId_19068A4(int param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_0191694c + 0x19168c0);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916950 + 0x19168d4));
    func_0x0165b424(*(undefined4 *)(_UNK_01916954 + 0x19168e0));
    *pcVar1 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  uVar2 = 0;
  uStack_1c = 0;
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x026f8918(iVar3,param_2,&uStack_1c,**(undefined4 **)(_UNK_01916958 + 0x1916914));
  if (iVar3 != 0) {
    uVar2 = func_0x023f1db0(*(undefined4 *)(param_1 + 0x10),uStack_1c,
                            **(undefined4 **)(_UNK_0191695c + 0x1916930));
  }
  return uVar2;
}


/* ItemChainManager.FindAllItemChainsWithSetId VA=0x1906960 | public List<ItemChainModel> FindAllItemChainsWithSetId(int setId) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_FindAllItemChainsWithSetId_1906960(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01916af0 + 0x191697c);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916af4 + 0x1916990));
    func_0x0165b424(*(undefined4 *)(_UNK_01916af8 + 0x191699c));
    func_0x0165b424(*(undefined4 *)(_UNK_01916afc + 0x19169a8));
    func_0x0165b424(*(undefined4 *)(_UNK_01916b00 + 0x19169b4));
    func_0x0165b424(*(undefined4 *)(_UNK_01916b04 + 0x19169c0));
    *pcVar5 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916b08 + 0x19169d8));
  func_0x02b0a9f0(iVar2,**(undefined4 **)(_UNK_01916b0c + 0x19169f4));
  iVar6 = *(int *)(param_1 + 0x1c);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = func_0x026f8918(iVar6,param_2,&uStack_1c,**(undefined4 **)(_UNK_01916b10 + 0x1916a20));
  uVar1 = uStack_1c;
  if (iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x10);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    iVar6 = func_0x026f88d4(iVar6,uVar1,&uStack_20,**(undefined4 **)(_UNK_01916b14 + 0x1916a58));
    uVar1 = uStack_20;
    if (iVar6 != 0) {
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *(int *)(iVar2 + 8);
      uVar7 = *(uint *)(iVar2 + 0xc);
      piVar4 = *(int **)(_UNK_01916b18 + 0x1916a98);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      iVar8 = *piVar4;
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      if (uVar7 < *(uint *)(iVar6 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar7 + 1;
        puVar3 = (undefined4 *)(iVar6 + uVar7 * 4 + 0x10);
        *puVar3 = uVar1;
        func_0x0165b3c0(puVar3,uVar1);
      }
      else {
        func_0x02b0b274(iVar2,uVar1,*(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
        ;
      }
    }
  }
  return iVar2;
}


/* ItemChainManager.GetItemChain VA=0x1906B1C | public ItemChainModel GetItemChain(int chainIndex) { } */

/* WARNING: Removing unreachable block (ram,0x023f265c) */
/* WARNING: Removing unreachable block (ram,0x023f22f8) */
/* WARNING: Removing unreachable block (ram,0x023f21cc) */
/* WARNING: Removing unreachable block (ram,0x023f2418) */
/* WARNING: Removing unreachable block (ram,0x023f27ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ItemChainManager_GetItemChain_1906B1C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  undefined4 ***pppuVar10;
  undefined1 *puVar11;
  undefined4 **ppuVar12;
  int iVar13;
  uint uVar14;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined1 *extraout_r2_01;
  undefined4 extraout_r2_02;
  uint uVar15;
  undefined4 extraout_r2_03;
  int iVar16;
  int extraout_r2_04;
  int *piVar17;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  int *piVar18;
  int extraout_r3_02;
  uint extraout_r3_03;
  undefined4 ****ppppuVar19;
  code *pcVar20;
  code *pcVar21;
  char *pcVar22;
  code *pcVar23;
  undefined4 **ppuVar24;
  int iVar25;
  uint unaff_r9;
  undefined4 *****pppppuVar26;
  undefined4 **ppuVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint auStack_138 [6];
  undefined1 auStack_120 [4];
  int aiStack_11c [3];
  uint auStack_110 [2];
  undefined4 auStack_108 [2];
  byte bStack_fd;
  int aiStack_fc [9];
  int aiStack_d8 [8];
  int iStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [4];
  undefined4 ****ppppuStack_a4;
  int *piStack_a0;
  int iStack_9c;
  char cStack_95;
  uint uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 ****ppppuStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  uint uStack_44;
  uint auStack_1c [3];
  
  pcVar22 = (char *)(_UNK_01916b6c + 0x1916b34);
  if (*pcVar22 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916b70 + 0x1916b48));
    *pcVar22 = '\x01';
  }
  iVar13 = **(int **)(_UNK_01916b74 + 0x1916b60);
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = *(int *)(iVar13 + 0x1c);
  if (iVar2 == 0) {
    func_0x016cc90c(iVar13);
    iVar2 = *(int *)(iVar13 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x016cc90c(iVar2);
  }
  uVar28 = piVar1 == (int *)0x0;
  auStack_1c[0] = 0;
  if ((bool)uVar28) {
    func_0x0165b434(*(undefined4 *)(iRam023f21c8 + 0x23f2194));
    uVar4 = func_0x0165b6d4();
    uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f21cc + 0x23f21a8));
    func_0x026fab30(uVar4,uVar5,0);
    func_0x0165b590(uVar4,iVar2);
    uVar29 = func_0x0165b3c4();
    piVar1 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f21c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((bool)uVar28) {
      uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0xac00000))();
      return uVar14;
    }
    if (*(int *)(extraout_r3 + 0x1c) == 0) {
      func_0x016cc90c(extraout_r3);
    }
    uVar28 = piVar1 == (int *)0x0;
    uStack_44 = 0;
    if ((bool)uVar28) {
      func_0x0165b434(*(undefined4 *)(iRam023f22f4 + 0x23f22c0));
      uVar4 = func_0x0165b6d4();
      uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f22f8 + 0x23f22d4));
      func_0x026fab30(uVar4,uVar5,0);
      func_0x0165b590(uVar4,extraout_r3);
      uVar29 = func_0x0165b3c4();
      uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
      piVar17 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f22f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if ((bool)uVar28) {
        uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0x20000000))();
        return uVar14;
      }
      uStack_60 = uVar4;
      piStack_5c = piVar1;
      if (*(int *)(extraout_r3_00 + 0x1c) == 0) {
        func_0x016cc90c(extraout_r3_00);
      }
      uVar28 = piVar17 == (int *)0x0;
      uStack_64 = 0;
      if ((bool)uVar28) {
        func_0x0165b434(*(undefined4 *)(iRam023f2414 + 0x23f23e0));
        uVar4 = func_0x0165b6d4();
        uVar6 = func_0x0165b434(*(undefined4 *)(iRam023f2418 + 0x23f23f4));
        func_0x026fab30(uVar4,uVar6,0);
        func_0x0165b590(uVar4,extraout_r3_00);
        uVar30 = func_0x0165b3c4();
        pppppuVar26 = (undefined4 *****)((ulonglong)uVar30 >> 0x20);
        piVar1 = (int *)uVar30;
                    /* WARNING: Could not recover jumptable at 0x023f2414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if ((bool)uVar28) {
          uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0x60000000))();
          return uVar14;
        }
        uStack_94 = **(uint **)(iRam023f2650 + 0x23f2444);
        ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
        puStack_b4 = extraout_r2_01;
        uStack_ac = extraout_r3_01;
        ppppuStack_a4 = pppppuVar26;
        uStack_8c = uVar4;
        if (ppppuVar19 == (undefined4 ****)0x0) {
          uStack_88 = uVar5;
          piStack_84 = piVar17;
          func_0x016cc90c(ppppuStack_68);
          uVar29 = CONCAT44(uStack_88,piStack_84);
          ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
        }
        uStack_88 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piStack_84 = (int *)uVar29;
        ppuVar27 = ppppuVar19[1][0x21];
        ppuVar24 = ppppuVar19[4][0x21];
        piVar17 = (int *)((int)&iStack_b8 - ((int)ppuVar27 + 7U & 0xfffffff8));
        uVar14 = (int)ppuVar24 + 7U & 0xfffffff8;
        iStack_b0 = (int)piVar17 - uVar14;
        iVar2 = iStack_b0 - uVar14;
        func_0x016fea2c(iVar2,ppuVar24);
        uVar28 = piVar1 == (int *)0x0;
        if (!(bool)uVar28) {
          pppppuVar9 = &ppppuStack_a4;
          if ((int)ppppuVar19[1][5] < 0) {
            pppppuVar9 = pppppuVar26;
          }
          func_0x016fea14(piVar17,pppppuVar9,ppuVar27);
          pppuVar10 = *ppppuVar19;
          if ((*(ushort *)((int)pppuVar10 + 0xbd) & 1) == 0) {
            pppuVar10 = (undefined4 ***)func_0x016cc8b0(pppuVar10);
            ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
          }
          iVar13 = *piVar1;
          if (-1 < (int)ppppuVar19[1][5]) {
            piVar17 = (int *)*piVar17;
          }
          uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar14 != 0) {
            piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if ((undefined4 ***)piVar18[-1] == pppuVar10) {
                iVar13 = iVar13 + *piVar18 * 8 + 200;
                goto LAB_023f2564;
              }
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 2;
            } while (uVar14 != 0);
          }
          iVar13 = func_0x016cc99c(piVar1,pppuVar10,1);
LAB_023f2564:
          iVar13 = *(int *)(iVar13 + 4);
          uVar4 = *(undefined4 *)(iVar13 + 4);
          pcVar20 = *(code **)(iVar13 + 8);
          piStack_a0 = piVar17;
          iStack_9c = iVar2;
          *(char **)(iVar2 + -8) = &cStack_95;
          (*pcVar20)(uVar4,iVar13,piVar1,&piStack_a0);
          iVar13 = iStack_b0;
          if (cStack_95 == '\0') {
            puVar11 = auStack_a8;
            if ((int)ppppuStack_68[7][4][5] < 0) {
              puVar11 = puStack_b4;
            }
            func_0x016fea14(iStack_b0,puVar11,ppuVar24);
          }
          else {
            func_0x016fea14(iStack_b0,iVar2,ppuVar24);
          }
          func_0x016fea14(uStack_ac,iVar13,ppuVar24);
          uVar28 = **(uint **)(iRam023f2654 + 0x23f25fc) == uStack_94;
          if ((bool)uVar28) {
            return **(uint **)(iRam023f2654 + 0x23f25fc);
          }
          func_0x017015a8();
          pppppuVar26 = (undefined4 *****)ppppuStack_68;
        }
        func_0x0165b434(*(undefined4 *)(iRam023f2658 + 0x23f261c));
        uVar4 = func_0x0165b6d4();
        uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f265c + 0x23f2630));
        func_0x026fab30(uVar4,uVar5,0);
        func_0x0165b590(uVar4,ppppuStack_68);
        uVar29 = func_0x0165b3c4();
        uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piVar18 = (int *)uVar29;
        if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x023f2658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (*(code *)((uint)pppppuVar26 & 0xfffffffe | 0x40000002))();
          return uVar14;
        }
        *(undefined4 *)(iVar2 + -4) = 0x23f2650;
        *(int **)(iVar2 + -8) = piVar17;
        *(undefined4 ***)(iVar2 + -0xc) = ppuVar24;
        *(int *)(iVar2 + -0x10) = iVar2;
        *(int **)(iVar2 + -0x14) = piVar1;
        *(undefined4 *)(iVar2 + -0x18) = uVar4;
        if (*(int *)(extraout_r3_02 + 0x1c) == 0) {
          func_0x016cc90c(extraout_r3_02);
        }
        uVar28 = piVar18 == (int *)0x0;
        if ((bool)uVar28) {
          func_0x0165b434(*(undefined4 *)(iRam023f27e8 + 0x23f27b4));
          uVar4 = func_0x0165b6d4();
          uVar6 = func_0x0165b434(*(undefined4 *)(iRam023f27ec + 0x23f27c8));
          func_0x026fab30(uVar4,uVar6,0);
          func_0x0165b590(uVar4,extraout_r3_02);
          uVar29 = func_0x0165b3c4();
          ppuVar24 = (undefined4 **)((ulonglong)uVar29 >> 0x20);
          piVar1 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          if ((bool)uVar28) {
            uVar14 = (*(code *)((uint)pppppuVar26 & 0xfffffffe | 0x8c))();
            return uVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x023f27ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          *(undefined4 *)(iVar2 + -0x1c) = 0x23f27e8;
          *(undefined1 **)(iVar2 + -0x20) = &stack0xffffff90;
          *(undefined4 ***)(iVar2 + -0x24) = ppuVar27;
          *(undefined4 ******)(iVar2 + -0x28) = pppppuVar26;
          *(undefined4 *)(iVar2 + -0x2c) = extraout_r2_02;
          *(int *)(iVar2 + -0x30) = extraout_r3_02;
          *(undefined4 *)(iVar2 + -0x34) = 0;
          *(undefined4 *)(iVar2 + -0x38) = uVar5;
          *(undefined4 *)(iVar2 + -0x3c) = uVar4;
          *(undefined4 *)(iVar2 + -0x44) = **(undefined4 **)(iRam023f2ac4 + 0x23f2814);
          pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
          *(undefined4 ***)(iVar2 + -0x54) = ppuVar24;
          *(undefined4 *)(iVar2 + -100) = extraout_r2_03;
          *(undefined4 *)(iVar2 + -0x58) = extraout_r2_03;
          if (pcVar20 == (code *)0x0) {
            func_0x016cc90c(extraout_r3_03);
            pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
          }
          iVar13 = *(int *)(pcVar20 + 4);
          iVar25 = *(int *)(iVar13 + 0x84);
          iVar16 = *(int *)(*(int *)(pcVar20 + 0xc) + 0x84);
          pcVar21 = (code *)((iVar2 + -0x68) - (iVar25 + 7U & 0xfffffff8));
          *(int *)(iVar2 + -0x68) = iVar16;
          iVar16 = (int)pcVar21 - (iVar16 + 7U & 0xfffffff8);
          *(int *)(iVar2 + -0x60) = iVar16;
          uVar28 = piVar1 == (int *)0x0;
          uVar14 = extraout_r3_03;
          if (!(bool)uVar28) {
            ppuVar27 = (undefined4 **)(iVar2 - 0x54);
            ppuVar12 = ppuVar27;
            if (*(int *)(iVar13 + 0x14) < 0) {
              ppuVar12 = ppuVar24;
            }
            func_0x016fea14(pcVar21,ppuVar12,iVar25);
            iVar13 = *(int *)pcVar20;
            if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
              iVar13 = func_0x016cc8b0(iVar13);
              pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
            }
            iVar7 = *(int *)(pcVar20 + 4);
            *(uint *)(iVar2 + -0x5c) = extraout_r3_03;
            iVar8 = *piVar1;
            pcVar20 = pcVar21;
            if (-1 < *(int *)(iVar7 + 0x14)) {
              pcVar20 = *(code **)pcVar21;
            }
            uVar14 = (uint)*(ushort *)(iVar8 + 0xb6);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
              do {
                if (piVar17[-1] == iVar13) {
                  iVar13 = iVar8 + *piVar17 * 8 + 0xe0;
                  goto LAB_023f2920;
                }
                uVar14 = uVar14 - 1;
                piVar17 = piVar17 + 2;
              } while (uVar14 != 0);
            }
            iVar13 = func_0x016cc99c(piVar1,iVar13,4);
LAB_023f2920:
            iVar13 = *(int *)(iVar13 + 4);
            *(code **)(iVar2 + -0x50) = pcVar20;
            uVar4 = *(undefined4 *)(iVar13 + 4);
            pcVar23 = *(code **)(iVar13 + 8);
            *(int *)(iVar16 + -8) = iVar2 + -0x45;
            (*pcVar23)(uVar4,iVar13,piVar1,iVar2 + -0x50);
            uVar14 = (uint)*(byte *)(iVar2 + -0x45);
            if (uVar14 == 0) {
              piVar17 = *(int **)(*(int *)(iVar2 + -0x5c) + 0x1c);
              if (*(int *)(piVar17[1] + 0x14) < 0) {
                ppuVar27 = ppuVar24;
              }
              func_0x016fea14(pcVar21,ppuVar27,iVar25);
              puVar3 = *(undefined4 **)(iVar2 + -0x60);
              iVar13 = iVar2 + -0x58;
              if (*(int *)(piVar17[3] + 0x14) < 0) {
                iVar13 = *(int *)(iVar2 + -100);
              }
              func_0x016fea14(puVar3,iVar13,*(undefined4 *)(iVar2 + -0x68));
              iVar13 = *piVar17;
              if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
                iVar13 = func_0x016cc8b0(iVar13);
                piVar17 = *(int **)(*(int *)(iVar2 + -0x5c) + 0x1c);
              }
              if (-1 < *(int *)(piVar17[1] + 0x14)) {
                pcVar21 = *(code **)pcVar21;
              }
              iVar25 = *piVar1;
              if (-1 < *(int *)(piVar17[3] + 0x14)) {
                puVar3 = (undefined4 *)*puVar3;
              }
              uVar15 = (uint)*(ushort *)(iVar25 + 0xb6);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(int *)(iVar25 + 0x58) + 4);
                do {
                  if (piVar17[-1] == iVar13) {
                    iVar13 = iVar25 + *piVar17 * 8 + 0xe8;
                    goto LAB_023f2a34;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 2;
                } while (uVar15 != 0);
              }
              iVar13 = func_0x016cc99c(piVar1,iVar13,5);
LAB_023f2a34:
              *(undefined4 **)(iVar2 + -0x4c) = puVar3;
              iVar13 = *(int *)(iVar13 + 4);
              *(code **)(iVar2 + -0x50) = pcVar21;
              uVar4 = *(undefined4 *)(iVar13 + 4);
              pcVar20 = *(code **)(iVar13 + 8);
              *(undefined4 **)(iVar16 + -8) = puVar3;
              (*pcVar20)(uVar4,iVar13,piVar1,iVar2 + -0x50);
            }
            uVar28 = **(int **)(iRam023f2ac8 + 0x23f2a68) == *(int *)(iVar2 + -0x44);
            if ((bool)uVar28) {
              return (uint)(uVar14 == 0);
            }
            func_0x017015a8(**(int **)(iRam023f2ac8 + 0x23f2a68));
          }
          func_0x0165b434(*(undefined4 *)(iRam023f2acc + 0x23f2a90));
          uVar4 = func_0x0165b6d4();
          uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f2ad0 + 0x23f2aa4));
          func_0x026fab30(uVar4,uVar5,0);
          func_0x0165b590(uVar4,uVar14);
          uVar29 = func_0x0165b3c4();
          uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
          iVar13 = (int)uVar29;
          if (!(bool)uVar28) {
            *(undefined4 *)(iVar16 + -4) = 0x23f2ac4;
            *(int *)(iVar16 + -8) = iVar2 + -0x20;
            *(code **)(iVar16 + -0xc) = pcVar20;
            *(uint *)(iVar16 + -0x10) = uVar14;
            *(code **)(iVar16 + -0x14) = pcVar21;
            *(undefined4 *)(iVar16 + -0x18) = uVar4;
            if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
              func_0x016cc90c(extraout_r2_04);
            }
            if (iVar13 == 0) {
              func_0x0165b6e0();
            }
            iVar2 = func_0x02f07fa8(iVar13,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 4));
            iVar16 = *(int *)(*(int *)(extraout_r2_04 + 0x1c) + 8);
            if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
              iVar16 = func_0x016cc8b0();
            }
            iVar2 = func_0x0165b4f0(iVar16,iVar2 + 1);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar2 + 0xc) == 0) {
              func_0x0165b6e4();
            }
            *(undefined4 *)(iVar2 + 0x10) = uVar5;
            func_0x0165b3c0((undefined4 *)(iVar2 + 0x10),uVar5);
            if (iVar13 == 0) {
              func_0x0165b6e0();
            }
            func_0x02f0818c(iVar13,iVar2,1,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 0x10));
            if ((*(ushort *)(*(int *)(*(int *)(extraout_r2_04 + 0x1c) + 0x18) + 0xbd) & 1) == 0) {
              func_0x016cc8b0();
            }
            uVar14 = func_0x0165b6d4();
            func_0x031da4ec(uVar14,iVar2,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 0x1c));
            return uVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x023f2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (*(code *)((uint)ppuVar27 & 0xfffffffe | 0x6c00))();
          return uVar14;
        }
        iVar2 = **(int **)(extraout_r3_02 + 0x1c);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x016cc8b0(iVar2);
        }
        iVar13 = *piVar18;
        uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar14 != 0) {
          piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar1[-1] == iVar2) {
              puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 0xe0);
              goto LAB_023f26fc;
            }
            uVar14 = uVar14 - 1;
            piVar1 = piVar1 + 2;
          } while (uVar14 != 0);
        }
        puVar3 = (undefined4 *)func_0x016cc99c(piVar18,iVar2,4);
LAB_023f26fc:
        uVar14 = (*(code *)*puVar3)(piVar18,uVar5,puVar3[1]);
        if (uVar14 == 0) {
          iVar2 = **(int **)(extraout_r3_02 + 0x1c);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x016cc8b0(iVar2);
          }
          iVar13 = *piVar18;
          uVar15 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar15 != 0) {
            piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if (piVar1[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 0xe8);
                goto LAB_023f2788;
              }
              uVar15 = uVar15 - 1;
              piVar1 = piVar1 + 2;
            } while (uVar15 != 0);
          }
          puVar3 = (undefined4 *)func_0x016cc99c(piVar18,iVar2,5);
LAB_023f2788:
          (*(code *)*puVar3)(piVar18,uVar5,extraout_r2_02,puVar3[1]);
        }
        return uVar14 ^ 1;
      }
      iVar2 = **(int **)(extraout_r3_00 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x016cc8b0(iVar2);
      }
      iVar13 = *piVar17;
      uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar14 != 0) {
        piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar1[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 200);
            goto LAB_023f23a4;
          }
          uVar14 = uVar14 - 1;
          piVar1 = piVar1 + 2;
        } while (uVar14 != 0);
      }
      puVar3 = (undefined4 *)func_0x016cc99c(piVar17,iVar2,1);
LAB_023f23a4:
      iVar2 = (*(code *)*puVar3)(piVar17,uVar5,&uStack_64,puVar3[1]);
      uVar14 = extraout_r2_00;
      if (iVar2 != 0) {
        uVar14 = uStack_64;
      }
      return uVar14;
    }
    iVar2 = **(int **)(extraout_r3 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x016cc8b0(iVar2);
    }
    iVar13 = *piVar1;
    uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar17[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar13 + *piVar17 * 8 + 200);
          goto LAB_023f2280;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar14 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(piVar1,iVar2,1);
LAB_023f2280:
    iVar2 = (*(code *)*puVar3)(piVar1,(int)((ulonglong)uVar29 >> 0x20),&uStack_44,puVar3[1]);
    uVar14 = extraout_r2;
    if (iVar2 != 0) {
      uVar14 = uStack_44;
    }
    return uVar14;
  }
  iVar2 = **(int **)(iVar2 + 0x1c);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x016cc8b0(iVar2);
  }
  iVar13 = *piVar1;
  uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (uVar14 != 0) {
    piVar17 = (int *)(*(int *)(iVar13 + 0x58) + 4);
    do {
      if (piVar17[-1] == iVar2) {
        puVar3 = (undefined4 *)(iVar13 + *piVar17 * 8 + 200);
        goto LAB_023f2158;
      }
      uVar14 = uVar14 - 1;
      piVar17 = piVar17 + 2;
    } while (uVar14 != 0);
  }
  puVar3 = (undefined4 *)func_0x016cc99c(piVar1,iVar2,1);
LAB_023f2158:
  iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
  uVar14 = 0;
  if (iVar2 != 0) {
    uVar14 = auStack_1c[0];
  }
  return uVar14;
}


/* ItemChainManager.GetItemChainData VA=0x1906B78 | public ItemChainScriptableData GetItemChainData(int chainIndex) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
ItemChainManager_GetItemChainData_1906B78
          (int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(_UNK_01916c08 + 0x1916b90);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916c0c + 0x1916ba4));
    func_0x0165b424(*(undefined4 *)(_UNK_01916c10 + 0x1916bb0));
    *pcVar1 = '\x01';
    param_4 = extraout_r3;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    func_0x0165b6e0();
    param_4 = extraout_r3_00;
  }
  if ((int)param_2 < *(int *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      func_0x0165b6e0();
      param_4 = extraout_r3_01;
    }
    if (*(uint *)(iVar2 + 0xc) <= param_2) {
      func_0x048d8a1c(0,param_2,**(undefined4 **)(_UNK_01916c14 + 0x1916bf4),param_4,unaff_r4,
                      unaff_r5);
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (*(uint *)(iVar2 + 0xc) <= param_2) {
      func_0x0165b6e4();
    }
    return *(undefined4 *)(iVar2 + param_2 * 4 + 0x10);
  }
  return 0;
}


/* ItemChainManager.GetItemLinkData VA=0x1906C18 | public ItemLinkScriptableData GetItemLinkData(ItemLinkID linkID) { } */

/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * ItemChainManager_GetItemLinkData_1906C18(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int extraout_r2;
  uint uVar13;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar14;
  int *piVar15;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int *piVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  int unaff_r7;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_190 [62];
  int iStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined8 uStack_88;
  code *pcStack_80;
  int *piStack_7c;
  char cStack_75;
  int *piStack_74;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar22 = (char *)(_UNK_01916cc8 + 0x1916c30);
  if (*pcVar22 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916ccc + 0x1916c44));
    *pcVar22 = '\x01';
  }
  iVar3 = func_0x0191476c(param_1,param_2);
  if (iVar3 == 0) {
    return (int *)0x0;
  }
  iVar3 = ItemChainManager_GetItemChainData_1906B78(param_1,*(undefined4 *)(iVar3 + 8));
  if (*(int *)(**(int **)(_UNK_01916cd0 + 0x1916c7c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar4 = func_0x026f7930(iVar3,0,0);
  if (iVar4 != 0) {
    return (int *)0x0;
  }
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  pcVar22 = (char *)(_UNK_01916da8 + 0x1916cec);
  if (*pcVar22 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916dac + 0x1916d00));
    func_0x0165b424(*(undefined4 *)(_UNK_01916db0 + 0x1916d0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01916db4 + 0x1916d18));
    func_0x0165b424(*(undefined4 *)(_UNK_01916db8 + 0x1916d24));
    *pcVar22 = '\x01';
  }
  iVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916dbc + 0x1916d38));
  func_0x026f769c(iVar4,0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  puVar5 = *(undefined4 **)(_UNK_01916dc0 + 0x1916d60);
  *(undefined4 *)(iVar4 + 8) = param_2;
  piVar16 = *(int **)(iVar3 + 0x14);
  iVar3 = func_0x0165b6d4(*puVar5);
  func_0x026f8108(iVar3,iVar4,**(undefined4 **)(_UNK_01916dc4 + 0x1916d84),0);
  iVar4 = **(int **)(_UNK_01916dc8 + 0x1916d9c);
  if (*(int *)(iVar4 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar4 + 0x1c) == 0) {
      func_0x016cc90c(iVar4);
    }
  }
  if (piVar16 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar3 != 0) {
      iVar10 = **(int **)(iVar4 + 0x1c);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = func_0x016cc8b0(iVar10);
      }
      iVar6 = *piVar16;
      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar14[-1] == iVar10) {
            puVar5 = (undefined4 *)(iVar6 + *piVar14 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar16,iVar10,0);
LAB_0243dc44:
      piVar16 = (int *)(*(code *)*puVar5)(piVar16,puVar5[1]);
      piVar14 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar10 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar15[-1] == *piVar14) {
              puVar5 = (undefined4 *)(iVar10 + *piVar15 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,*piVar14,0);
LAB_0243dcbc:
        iVar10 = (*(code *)*puVar5)(piVar16,puVar5[1]);
        if (iVar10 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar10 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x016cc8b0(iVar10);
        }
        iVar6 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar6 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar10) {
              puVar5 = (undefined4 *)(iVar6 + *piVar15 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,iVar10,0);
LAB_0243dd4c:
        piVar15 = (int *)(*(code *)*puVar5)(piVar16,puVar5[1]);
        iVar10 = (**(code **)(iVar3 + 0xc))
                           (*(undefined4 *)(iVar3 + 0x20),piVar15,*(undefined4 *)(iVar3 + 0x14));
      } while (iVar10 == 0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243dd94;
    }
    uVar7 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,iVar4);
  uVar27 = func_0x0165b3c4();
  uVar11 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar14 = (int *)func_0x017010e8(uVar11);
    iVar4 = *piVar14;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar15 = (int *)0x0;
LAB_0243dd94:
    if (piVar16 != (int *)0x0) {
      iVar10 = *piVar16;
      uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar5 = (undefined4 *)(iVar10 + *piVar14 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar5)(piVar16,puVar5[1]);
    }
    if (iVar4 != 0) {
      func_0x0165b6dc(iVar4);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar15 = (int *)0x0;
    }
    return piVar15;
  }
  if (piVar16 != (int *)0x0) {
    iVar3 = *piVar16;
    uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        unaff_r7 = piVar14[-1];
        if (unaff_r7 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar5 = (undefined4 *)(iVar3 + *piVar14 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar5)(piVar16,puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar11);
  uVar27 = func_0x01178c80();
  piVar14 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar15 = (int *)uVar27;
  uVar12 = extraout_r3;
  if ((bool)uVar26) {
    uVar12 = uVar11 | 0x800000;
    piVar16 = (int *)(uVar11 | 0x70000);
    unaff_r10 = uVar11 | 0x70014;
    unaff_r9 = uVar11 | 0x71300;
  }
  uStack_2c = 0;
  piStack_3c = piVar16;
  iStack_38 = iVar4;
  uStack_34 = uVar11;
  iStack_30 = unaff_r7;
  uStack_28 = unaff_r9;
  uStack_24 = unaff_r10;
  if (*(int *)(uVar12 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar14 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar12 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar14;
      uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar16 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar14,iVar3,0);
LAB_0243e00c:
      piVar14 = (int *)(*(code *)*puVar5)(piVar14,puVar5[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar14 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar14;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar16[-1] == *piVar25) {
              puVar5 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar14,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar5)(piVar14,puVar5[1]);
        piStack_48 = piVar15;
        if (iVar3 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          piVar16 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar14 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar14;
        uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar11 != 0) {
          piVar16 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar16[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar16 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar11 = uVar11 - 1;
            piVar16 = piVar16 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar14,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar5)(&iStack_44,piVar14,puVar5[1]);
        iVar6 = iStack_40;
        iVar10 = iStack_44;
        piVar16 = (int *)(**(code **)(extraout_r2 + 0xc))
                                   (*(undefined4 *)(extraout_r2 + 0x20),iStack_44,iStack_40,
                                    *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar16 == (int *)0x0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243e170;
    }
    uVar7 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar12);
  uVar27 = func_0x0165b3c4();
  uVar11 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar15 != (int *)0x0) {
      iVar3 = *piVar15;
      uVar13 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar13 != 0) {
        piVar16 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = piVar16[-1];
          if (unaff_r7 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar16 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar13 = uVar13 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar13 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar15,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar5)(piVar15,puVar5[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar11);
    uStack_88 = func_0x01178c80();
    uVar13 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar14 = (int *)(uVar11 | 0x5000000);
      uVar23 = uVar11 | 0x5110000;
      uVar13 = uVar11;
    }
    piStack_74 = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar17 = *(code **)(uVar13 + 0x1c);
    uStack_90 = extraout_r2_00;
    piStack_6c = piVar14;
    piStack_68 = piVar15;
    uStack_64 = uVar11;
    iStack_60 = unaff_r7;
    uStack_58 = uVar23;
    uStack_54 = uVar12;
    if (pcVar17 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar17 = *(code **)(uVar13 + 0x1c);
      if (pcVar17 == (code *)0x0) {
        func_0x016cc90c(uVar13);
        pcVar17 = *(code **)(uVar13 + 0x1c);
      }
    }
    pcVar18 = *(code **)(*(int *)(pcVar17 + 0x14) + 0x84);
    uVar11 = (uint)(pcVar18 + 7) & 0xfffffff8;
    piVar15 = (int *)((int)&iStack_98 - uVar11);
    piVar16 = (int *)((int)piVar15 - uVar11);
    iVar3 = (int)piVar16 - uVar11;
    func_0x016fea2c(iVar3,pcVar18);
    piVar14 = (int *)(iVar3 - uVar11);
    piStack_8c = piVar14;
    func_0x016fea2c(piVar14,pcVar18);
    piVar14 = (int *)((int)piVar14 - uVar11);
    piStack_94 = piVar14;
    pcStack_80 = pcVar18;
    func_0x016fea2c(piVar14,pcVar18);
    pcVar18 = (code *)uStack_88;
    pcVar19 = (code *)uStack_88;
    if ((code *)uStack_88 == (code *)0x0) goto LAB_0243e754;
    if (uStack_88._4_4_ == 0) {
      uVar7 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar4 = *(int *)pcVar17;
    if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
      iVar4 = func_0x016cc8b0(iVar4);
    }
    iVar10 = *(int *)pcVar18;
    uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar4) {
          puVar5 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(pcVar18,iVar4,0);
LAB_0243e48c:
    pcVar17 = (code *)(*(code *)*puVar5)(pcVar18,puVar5[1]);
    iVar4 = 0;
    do {
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)pcVar17;
      uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
      pcVar19 = pcVar18;
      if (uVar11 != 0) {
        piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          pcVar19 = (code *)piVar25[-1];
          if (pcVar19 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar5 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)
               func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar10 = (*(code *)*puVar5)(pcVar17,puVar5[1]);
      if (iVar10 == 0) {
        uVar13 = 0xb;
        piVar16 = piStack_8c;
        goto LAB_0243e668;
      }
      if (pcVar17 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = func_0x016cc8b0(iVar10);
      }
      iVar6 = *(int *)pcVar17;
      uVar11 = (uint)*(ushort *)(iVar6 + 0xb6);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar10) {
            iVar10 = iVar6 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar11 != 0);
      }
      iVar10 = func_0x016cc99c(pcVar17,iVar10,0);
LAB_0243e598:
      iVar10 = *(int *)(iVar10 + 4);
      uVar7 = *(undefined4 *)(iVar10 + 4);
      pcVar18 = *(code **)(iVar10 + 8);
      piStack_7c = piVar15;
      piVar14[-2] = (int)piVar15;
      (*pcVar18)(uVar7,iVar10,pcVar17,&piStack_7c);
      pcVar18 = pcStack_80;
      func_0x016fea14(iVar3,piVar15,pcStack_80);
      func_0x016fea14(piVar16,iVar3,pcVar18);
      puVar5 = *(undefined4 **)(*(int *)(uVar13 + 0x1c) + 0x18);
      piStack_7c = piVar16;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar13 + 0x1c) + 0x14) + 0x14)) {
        piStack_7c = (int *)*piVar16;
      }
      uVar7 = *puVar5;
      pcVar18 = (code *)puVar5[2];
      piVar14[-2] = (int)&cStack_75;
      (*pcVar18)(uVar7,puVar5,uStack_88._4_4_,&piStack_7c);
      pcVar19 = pcStack_80;
    } while (cStack_75 == '\0');
    func_0x016fea14(piVar15,iVar3,pcStack_80);
    piVar16 = piStack_8c;
    func_0x016fea14(piStack_8c,piVar15,pcVar19);
    uVar13 = 10;
LAB_0243e668:
    do {
      if (pcVar17 != (code *)0x0) {
        iVar10 = *(int *)pcVar17;
        uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            pcVar19 = (code *)piVar25[-1];
            if (pcVar19 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar5 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)
                 func_0x016cc99c(pcVar17,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar5)(pcVar17,puVar5[1]);
      }
      if (iVar4 != 0) {
        func_0x0165b6dc(iVar4);
      }
      piVar25 = piStack_94;
      if (uVar13 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_94,pcStack_80);
        piVar16 = piVar25;
LAB_0243e710:
        pcVar17 = pcStack_80;
        func_0x016fea14(piVar15,piVar16,pcStack_80);
        func_0x016fea14(uStack_90,piVar15,pcVar17);
      }
      else {
        if (uVar13 == 10) goto LAB_0243e710;
        if (uVar13 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_74) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar7 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar7 = func_0x0165b434(uVar7);
      uVar7 = func_0x026fd688(uVar7,0);
      func_0x0165b590(uVar7,uVar13);
      uVar27 = func_0x0165b3c4();
      iVar4 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar16 = (int *)func_0x017010e8(iVar4);
      iVar4 = *piVar16;
      uVar13 = 0;
      func_0x0171ece4();
      piVar16 = piStack_8c;
    } while( true );
  }
  piVar16 = (int *)func_0x017010e8(uVar11);
  iVar4 = *piVar16;
  iVar3 = 0;
  piVar16 = (int *)func_0x0171ece4();
  piVar14 = piVar15;
LAB_0243e168:
  iVar6 = 0;
  iVar10 = 0;
LAB_0243e170:
  if (piVar14 != (int *)0x0) {
    iVar8 = *piVar14;
    uVar11 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar11 != 0) {
      piVar16 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar16[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar5 = (undefined4 *)(iVar8 + *piVar16 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar11 = uVar11 - 1;
        piVar16 = piVar16 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar14,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar16 = (int *)(*(code *)*puVar5)(piVar14,puVar5[1]);
  }
  if (iVar4 != 0) {
    piVar16 = (int *)func_0x0165b6dc(iVar4);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_48 = iVar10;
      piStack_48[1] = iVar6;
      return piStack_48;
    }
    if (iVar3 != 0) {
      return piVar16;
    }
  }
  *piStack_48 = 0;
  piStack_48[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar17 != (code *)0x0) {
    iVar10 = *(int *)pcVar17;
    uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        piVar15 = (int *)piVar25[-1];
        if (piVar15 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar5 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(pcVar17,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar5)(pcVar17,puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar4);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar11 = extraout_r3_01;
  uVar12 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar12 = (uint)piVar15 | 0xdc00;
    uVar11 = (uint)piVar15 | 0x3c0;
    piVar25 = (int *)((uint)pcVar19 | 0x70000);
    piVar16 = (int *)((uint)pcVar17 | 0x24000000);
  }
  piVar14[-1] = 0x243e848;
  piVar14[-2] = (int)&stack0xffffffb0;
  piVar14[-3] = iVar3;
  piVar14[-4] = (int)piVar16;
  piVar14[-5] = 0;
  piVar14[-6] = iVar4;
  piVar14[-7] = (int)piVar15;
  piVar14[-8] = (int)pcVar19;
  piVar14[-9] = (int)pcVar17;
  iVar10 = *(int *)(uVar11 + 0x1c);
  piVar14[-0x16] = uVar12;
  if (iVar10 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar11 + 0x1c) == 0) {
      func_0x016cc90c(uVar11);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar14[-0x16] != 0) {
      iVar3 = **(int **)(uVar11 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar25;
      piVar14[-0x1f] = uVar23;
      piVar14[-0x18] = uVar11;
      uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar16 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar16 = (int *)(*(code *)*puVar5)(piVar25,puVar5[1]);
      piVar14[-0x17] = (int)piVar16;
      do {
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar4 = piVar14[-0x18];
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar15[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar5 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar5)(piVar16,puVar5[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar14[-0x19] = 0;
          piVar14[-0x1a] = 0;
          piVar14[-0x1b] = 0;
          piVar14[-0x15] = 0;
          piVar14[-0x1c] = 0;
          iVar8 = 0xb;
          iVar4 = 0;
          iVar10 = 0;
          iVar24 = 0;
          iVar20 = 0;
          iVar6 = 0;
          piVar14[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar4 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar5)(piVar14 + -0x14,piVar16,puVar5[1]);
        iVar3 = piVar14[-0x16];
        iVar24 = piVar14[-0xc];
        iVar10 = piVar14[-0xb];
        iVar8 = *(int *)(iVar3 + 0x14);
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        iVar20 = piVar14[-0x10];
        iVar6 = piVar14[-0x12];
        iVar4 = piVar14[-10];
        piVar14[-0x15] = *(int *)(iVar3 + 0xc);
        piVar14[-0x27] = iVar20;
        piVar14[-0x26] = piVar14[-0xf];
        piVar14[-0x1e] = piVar14[-0x11];
        piVar14[-0x28] = piVar14[-0x11];
        piVar14[-0x1a] = piVar14[-0xe];
        piVar14[-0x25] = piVar14[-0xe];
        piVar14[-0x19] = piVar14[-0xd];
        piVar14[-0x24] = piVar14[-0xd];
        piVar14[-0x20] = iVar8;
        piVar14[-0x1b] = piVar14[-0xf];
        piVar14[-0x23] = iVar24;
        piVar14[-0x22] = iVar10;
        piVar14[-0x21] = iVar4;
        piVar14[-0x1d] = piVar14[-0x14];
        piVar14[-0x1c] = piVar14[-0x13];
        iVar3 = (*(code *)piVar14[-0x15])(uVar7,piVar14[-0x14],piVar14[-0x13],iVar6);
        piVar16 = (int *)piVar14[-0x17];
      } while (iVar3 == 0);
      iVar8 = 10;
      iVar3 = 0;
      piVar14[-0x15] = iVar20;
      iVar20 = piVar14[-0x1e];
      goto LAB_0243eb70;
    }
    uVar7 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar11);
  uVar27 = func_0x0165b3c4();
  iVar10 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar16 = (int *)func_0x017010e8(iVar10);
    iVar3 = *piVar16;
    func_0x0171ece4();
    piVar16 = (int *)piVar14[-0x17];
    piVar14[-0x19] = 0;
    piVar14[-0x1a] = 0;
    piVar14[-0x1b] = 0;
    piVar14[-0x15] = 0;
    piVar14[-0x1c] = 0;
    piVar14[-0x1d] = 0;
    iVar4 = 0;
    iVar10 = 0;
    iVar24 = 0;
    iVar20 = 0;
    iVar6 = 0;
    iVar8 = 0;
LAB_0243eb70:
    if (piVar16 != (int *)0x0) {
      iVar9 = *piVar16;
      uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar16[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar21 = piVar14[-0x17];
            puVar5 = (undefined4 *)(iVar9 + *piVar16 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar11 != 0);
      }
      iVar21 = piVar14[-0x17];
      puVar5 = (undefined4 *)func_0x016cc99c(iVar21,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar5)(iVar21,puVar5[1]);
    }
    piVar16 = (int *)0x0;
    if (iVar3 != 0) {
      piVar16 = (int *)func_0x0165b6dc();
    }
    if (iVar8 != 0xb) {
      if (iVar8 == 10) {
        piVar16 = (int *)piVar14[-0x1f];
        *piVar16 = piVar14[-0x1d];
        iVar3 = piVar14[-0x1c];
        piVar16[8] = iVar24;
        piVar16[1] = iVar3;
        piVar16[2] = iVar6;
        piVar16[3] = iVar20;
        piVar16[4] = piVar14[-0x15];
        piVar16[5] = piVar14[-0x1b];
        piVar16[6] = piVar14[-0x1a];
        iVar3 = piVar14[-0x19];
        piVar16[9] = iVar10;
        piVar16[10] = iVar4;
        piVar16[7] = iVar3;
        return piVar16;
      }
      if (iVar8 != 0) {
        return piVar16;
      }
    }
    puVar5 = (undefined4 *)piVar14[-0x1f];
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar5 = 0;
    puVar5[1] = uVar7;
    puVar5[2] = uVar1;
    puVar5[3] = uVar2;
    puVar5[7] = 0;
    puVar5[8] = uVar7;
    puVar5[9] = uVar1;
    puVar5[10] = uVar2;
    puVar5[4] = 0;
    puVar5[5] = uVar7;
    puVar5[6] = uVar1;
    puVar5[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar14[-0x17] != 0) {
    iVar6 = *(int *)piVar14[-0x17];
    uVar12 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        iVar4 = piVar15[-1];
        if (iVar4 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar5 = (undefined4 *)(iVar6 + *piVar15 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar14[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar5)(piVar14[-0x17],puVar5[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar10);
  uVar27 = func_0x01178c80();
  piVar15 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar12 = extraout_r3_02;
  uVar13 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar13 = uVar11 | 0x2d00000;
    uVar12 = uVar11 | 0xc8000;
    piVar16 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar14[-0x29] = 0x243edc8;
  piVar14[-0x2a] = (int)&stack0xffffffb0;
  piVar14[-0x2b] = iVar3;
  piVar14[-0x2c] = (int)piVar16;
  piVar14[-0x2d] = uVar23;
  piVar14[-0x2e] = iVar4;
  piVar14[-0x2f] = uVar11;
  piVar14[-0x30] = iVar10;
  piVar14[-0x31] = 0;
  if (*(int *)(uVar12 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar15 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar13 != 0) {
      piVar16 = *(int **)(uVar12 + 0x1c);
      piVar14[-0x35] = (int)uVar27;
      iVar3 = *piVar16;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar4 = *piVar15;
      uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar11 != 0) {
        piVar16 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar16[-1] == iVar3) {
            puVar5 = (undefined4 *)(iVar4 + *piVar16 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar11 = uVar11 - 1;
          piVar16 = piVar16 + 2;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243eeb4:
      piVar16 = (int *)(*(code *)*puVar5)(piVar15,puVar5[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar15[-1] == *piVar25) {
              puVar5 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar5)(piVar16,puVar5[1]);
        if (iVar3 == 0) {
          iVar4 = 0;
          iVar3 = 0xb;
          piVar15 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar16 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar4 = *piVar16;
        uVar11 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar3) {
              puVar5 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined4 *)func_0x016cc99c(piVar16,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar5)(piVar14 + -0x34,piVar16,puVar5[1]);
        iVar8 = piVar14[-0x34];
        iVar6 = piVar14[-0x33];
        iVar10 = piVar14[-0x32];
        uVar7 = *(undefined4 *)(uVar13 + 0x20);
        pcVar17 = *(code **)(uVar13 + 0xc);
        piVar14[-0x36] = *(undefined4 *)(uVar13 + 0x14);
        piVar15 = (int *)(*pcVar17)(uVar7,iVar8,iVar6,iVar10);
      } while (piVar15 == (int *)0x0);
      iVar3 = 10;
      iVar4 = 0;
      goto LAB_0243f024;
    }
    uVar7 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar12);
  uVar28 = func_0x0165b3c4();
  uVar11 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar16 != (int *)0x0) {
      iVar3 = *piVar16;
      uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar4 = piVar25[-1];
          if (iVar4 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar5 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar5)(piVar16,puVar5[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar11);
    uVar28 = func_0x01178c80();
    uVar12 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar12 = uVar11 | 0x10000001;
      uVar23 = (uint)piVar15 | 0x88000;
    }
    piVar14[-0x37] = 0x243f1e4;
    piVar14[-0x38] = uVar23;
    piVar14[-0x39] = iVar4;
    piVar14[-0x3a] = uVar11;
    piVar14[-0x3b] = (int)uVar27;
    piVar14[-0x3c] = (int)piVar15;
    iVar3 = *(int *)(uVar12 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar12);
      iVar3 = *(int *)(uVar12 + 0x1c);
    }
    uVar7 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar12 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar16 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0x18);
    piVar14[-0x3e] = 0;
    piVar14[-0x3d] = iVar3;
    func_0x02804be0(piVar16,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar7);
    return piVar16;
  }
  piVar15 = (int *)func_0x017010e8(uVar11);
  iVar4 = *piVar15;
  iVar3 = 0;
  piVar15 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar10 = 0;
  iVar6 = 0;
  iVar8 = 0;
LAB_0243f024:
  if (piVar16 != (int *)0x0) {
    iVar24 = *piVar16;
    uVar11 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar5 = (undefined4 *)(iVar24 + *piVar15 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined4 *)func_0x016cc99c(piVar16,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar15 = (int *)(*(code *)*puVar5)(piVar16,puVar5[1]);
  }
  if (iVar4 != 0) {
    piVar15 = (int *)func_0x0165b6dc(iVar4);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar16 = (int *)piVar14[-0x35];
      *piVar16 = iVar8;
      piVar16[1] = iVar6;
      piVar16[2] = iVar10;
      return piVar16;
    }
    if (iVar3 != 0) {
      return piVar15;
    }
  }
  puVar5 = (undefined4 *)piVar14[-0x35];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  return (int *)0x0;
}


/* ItemChainManager.GetItemLink VA=0x190476C | public ItemLinkModel GetItemLink(ItemLinkID linkID) { } */

/* WARNING: Removing unreachable block (ram,0x023f265c) */
/* WARNING: Removing unreachable block (ram,0x023f22f8) */
/* WARNING: Removing unreachable block (ram,0x023f21cc) */
/* WARNING: Removing unreachable block (ram,0x023f2418) */
/* WARNING: Removing unreachable block (ram,0x023f27ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ItemChainManager_GetItemLink_190476C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  undefined4 ***pppuVar10;
  undefined1 *puVar11;
  undefined4 **ppuVar12;
  int iVar13;
  uint uVar14;
  uint extraout_r2;
  uint extraout_r2_00;
  undefined1 *extraout_r2_01;
  undefined4 extraout_r2_02;
  uint uVar15;
  undefined4 extraout_r2_03;
  int iVar16;
  int extraout_r2_04;
  int *piVar17;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  int *piVar18;
  int extraout_r3_02;
  uint extraout_r3_03;
  undefined4 ****ppppuVar19;
  code *pcVar20;
  code *pcVar21;
  char *pcVar22;
  code *pcVar23;
  undefined4 **ppuVar24;
  int iVar25;
  uint unaff_r9;
  undefined4 *****pppppuVar26;
  undefined4 **ppuVar27;
  undefined1 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  uint auStack_138 [6];
  undefined1 auStack_120 [4];
  int aiStack_11c [3];
  uint auStack_110 [2];
  undefined4 auStack_108 [2];
  byte bStack_fd;
  int aiStack_fc [9];
  int aiStack_d8 [8];
  int iStack_b8;
  undefined1 *puStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined1 auStack_a8 [4];
  undefined4 ****ppppuStack_a4;
  int *piStack_a0;
  int iStack_9c;
  char cStack_95;
  uint uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  undefined4 ****ppppuStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  int *piStack_5c;
  uint uStack_44;
  uint auStack_1c [3];
  
  pcVar22 = (char *)(_UNK_019147bc + 0x1914784);
  if (*pcVar22 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019147c0 + 0x1914798));
    *pcVar22 = '\x01';
  }
  iVar13 = **(int **)(_UNK_019147c4 + 0x19147b0);
  piVar1 = *(int **)(param_1 + 0x14);
  iVar2 = *(int *)(iVar13 + 0x1c);
  if (iVar2 == 0) {
    func_0x016cc90c(iVar13);
    iVar2 = *(int *)(iVar13 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 0xc);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    func_0x016cc90c(iVar2);
  }
  uVar28 = piVar1 == (int *)0x0;
  auStack_1c[0] = 0;
  if ((bool)uVar28) {
    func_0x0165b434(*(undefined4 *)(iRam023f21c8 + 0x23f2194));
    uVar4 = func_0x0165b6d4();
    uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f21cc + 0x23f21a8));
    func_0x026fab30(uVar4,uVar5,0);
    func_0x0165b590(uVar4,iVar2);
    uVar29 = func_0x0165b3c4();
    piVar1 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f21c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    if ((bool)uVar28) {
      uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0xac00000))();
      return uVar14;
    }
    if (*(int *)(extraout_r3 + 0x1c) == 0) {
      func_0x016cc90c(extraout_r3);
    }
    uVar28 = piVar1 == (int *)0x0;
    uStack_44 = 0;
    if ((bool)uVar28) {
      func_0x0165b434(*(undefined4 *)(iRam023f22f4 + 0x23f22c0));
      uVar4 = func_0x0165b6d4();
      uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f22f8 + 0x23f22d4));
      func_0x026fab30(uVar4,uVar5,0);
      func_0x0165b590(uVar4,extraout_r3);
      uVar29 = func_0x0165b3c4();
      uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
      piVar17 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f22f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      if ((bool)uVar28) {
        uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0x20000000))();
        return uVar14;
      }
      uStack_60 = uVar4;
      piStack_5c = piVar1;
      if (*(int *)(extraout_r3_00 + 0x1c) == 0) {
        func_0x016cc90c(extraout_r3_00);
      }
      uVar28 = piVar17 == (int *)0x0;
      uStack_64 = 0;
      if ((bool)uVar28) {
        func_0x0165b434(*(undefined4 *)(iRam023f2414 + 0x23f23e0));
        uVar4 = func_0x0165b6d4();
        uVar6 = func_0x0165b434(*(undefined4 *)(iRam023f2418 + 0x23f23f4));
        func_0x026fab30(uVar4,uVar6,0);
        func_0x0165b590(uVar4,extraout_r3_00);
        uVar30 = func_0x0165b3c4();
        pppppuVar26 = (undefined4 *****)((ulonglong)uVar30 >> 0x20);
        piVar1 = (int *)uVar30;
                    /* WARNING: Could not recover jumptable at 0x023f2414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        if ((bool)uVar28) {
          uVar14 = (*(code *)(unaff_r9 & 0xfffffffe | 0x60000000))();
          return uVar14;
        }
        uStack_94 = **(uint **)(iRam023f2650 + 0x23f2444);
        ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
        puStack_b4 = extraout_r2_01;
        uStack_ac = extraout_r3_01;
        ppppuStack_a4 = pppppuVar26;
        uStack_8c = uVar4;
        if (ppppuVar19 == (undefined4 ****)0x0) {
          uStack_88 = uVar5;
          piStack_84 = piVar17;
          func_0x016cc90c(ppppuStack_68);
          uVar29 = CONCAT44(uStack_88,piStack_84);
          ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
        }
        uStack_88 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piStack_84 = (int *)uVar29;
        ppuVar27 = ppppuVar19[1][0x21];
        ppuVar24 = ppppuVar19[4][0x21];
        piVar17 = (int *)((int)&iStack_b8 - ((int)ppuVar27 + 7U & 0xfffffff8));
        uVar14 = (int)ppuVar24 + 7U & 0xfffffff8;
        iStack_b0 = (int)piVar17 - uVar14;
        iVar2 = iStack_b0 - uVar14;
        func_0x016fea2c(iVar2,ppuVar24);
        uVar28 = piVar1 == (int *)0x0;
        if (!(bool)uVar28) {
          pppppuVar9 = &ppppuStack_a4;
          if ((int)ppppuVar19[1][5] < 0) {
            pppppuVar9 = pppppuVar26;
          }
          func_0x016fea14(piVar17,pppppuVar9,ppuVar27);
          pppuVar10 = *ppppuVar19;
          if ((*(ushort *)((int)pppuVar10 + 0xbd) & 1) == 0) {
            pppuVar10 = (undefined4 ***)func_0x016cc8b0(pppuVar10);
            ppppuVar19 = (undefined4 ****)ppppuStack_68[7];
          }
          iVar13 = *piVar1;
          if (-1 < (int)ppppuVar19[1][5]) {
            piVar17 = (int *)*piVar17;
          }
          uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar14 != 0) {
            piVar18 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if ((undefined4 ***)piVar18[-1] == pppuVar10) {
                iVar13 = iVar13 + *piVar18 * 8 + 200;
                goto LAB_023f2564;
              }
              uVar14 = uVar14 - 1;
              piVar18 = piVar18 + 2;
            } while (uVar14 != 0);
          }
          iVar13 = func_0x016cc99c(piVar1,pppuVar10,1);
LAB_023f2564:
          iVar13 = *(int *)(iVar13 + 4);
          uVar4 = *(undefined4 *)(iVar13 + 4);
          pcVar20 = *(code **)(iVar13 + 8);
          piStack_a0 = piVar17;
          iStack_9c = iVar2;
          *(char **)(iVar2 + -8) = &cStack_95;
          (*pcVar20)(uVar4,iVar13,piVar1,&piStack_a0);
          iVar13 = iStack_b0;
          if (cStack_95 == '\0') {
            puVar11 = auStack_a8;
            if ((int)ppppuStack_68[7][4][5] < 0) {
              puVar11 = puStack_b4;
            }
            func_0x016fea14(iStack_b0,puVar11,ppuVar24);
          }
          else {
            func_0x016fea14(iStack_b0,iVar2,ppuVar24);
          }
          func_0x016fea14(uStack_ac,iVar13,ppuVar24);
          uVar28 = **(uint **)(iRam023f2654 + 0x23f25fc) == uStack_94;
          if ((bool)uVar28) {
            return **(uint **)(iRam023f2654 + 0x23f25fc);
          }
          func_0x017015a8();
          pppppuVar26 = (undefined4 *****)ppppuStack_68;
        }
        func_0x0165b434(*(undefined4 *)(iRam023f2658 + 0x23f261c));
        uVar4 = func_0x0165b6d4();
        uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f265c + 0x23f2630));
        func_0x026fab30(uVar4,uVar5,0);
        func_0x0165b590(uVar4,ppppuStack_68);
        uVar29 = func_0x0165b3c4();
        uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
        piVar18 = (int *)uVar29;
        if ((bool)uVar28) {
                    /* WARNING: Could not recover jumptable at 0x023f2658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (*(code *)((uint)pppppuVar26 & 0xfffffffe | 0x40000002))();
          return uVar14;
        }
        *(undefined4 *)(iVar2 + -4) = 0x23f2650;
        *(int **)(iVar2 + -8) = piVar17;
        *(undefined4 ***)(iVar2 + -0xc) = ppuVar24;
        *(int *)(iVar2 + -0x10) = iVar2;
        *(int **)(iVar2 + -0x14) = piVar1;
        *(undefined4 *)(iVar2 + -0x18) = uVar4;
        if (*(int *)(extraout_r3_02 + 0x1c) == 0) {
          func_0x016cc90c(extraout_r3_02);
        }
        uVar28 = piVar18 == (int *)0x0;
        if ((bool)uVar28) {
          func_0x0165b434(*(undefined4 *)(iRam023f27e8 + 0x23f27b4));
          uVar4 = func_0x0165b6d4();
          uVar6 = func_0x0165b434(*(undefined4 *)(iRam023f27ec + 0x23f27c8));
          func_0x026fab30(uVar4,uVar6,0);
          func_0x0165b590(uVar4,extraout_r3_02);
          uVar29 = func_0x0165b3c4();
          ppuVar24 = (undefined4 **)((ulonglong)uVar29 >> 0x20);
          piVar1 = (int *)uVar29;
                    /* WARNING: Could not recover jumptable at 0x023f27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          if ((bool)uVar28) {
            uVar14 = (*(code *)((uint)pppppuVar26 & 0xfffffffe | 0x8c))();
            return uVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x023f27ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          *(undefined4 *)(iVar2 + -0x1c) = 0x23f27e8;
          *(undefined1 **)(iVar2 + -0x20) = &stack0xffffff90;
          *(undefined4 ***)(iVar2 + -0x24) = ppuVar27;
          *(undefined4 ******)(iVar2 + -0x28) = pppppuVar26;
          *(undefined4 *)(iVar2 + -0x2c) = extraout_r2_02;
          *(int *)(iVar2 + -0x30) = extraout_r3_02;
          *(undefined4 *)(iVar2 + -0x34) = 0;
          *(undefined4 *)(iVar2 + -0x38) = uVar5;
          *(undefined4 *)(iVar2 + -0x3c) = uVar4;
          *(undefined4 *)(iVar2 + -0x44) = **(undefined4 **)(iRam023f2ac4 + 0x23f2814);
          pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
          *(undefined4 ***)(iVar2 + -0x54) = ppuVar24;
          *(undefined4 *)(iVar2 + -100) = extraout_r2_03;
          *(undefined4 *)(iVar2 + -0x58) = extraout_r2_03;
          if (pcVar20 == (code *)0x0) {
            func_0x016cc90c(extraout_r3_03);
            pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
          }
          iVar13 = *(int *)(pcVar20 + 4);
          iVar25 = *(int *)(iVar13 + 0x84);
          iVar16 = *(int *)(*(int *)(pcVar20 + 0xc) + 0x84);
          pcVar21 = (code *)((iVar2 + -0x68) - (iVar25 + 7U & 0xfffffff8));
          *(int *)(iVar2 + -0x68) = iVar16;
          iVar16 = (int)pcVar21 - (iVar16 + 7U & 0xfffffff8);
          *(int *)(iVar2 + -0x60) = iVar16;
          uVar28 = piVar1 == (int *)0x0;
          uVar14 = extraout_r3_03;
          if (!(bool)uVar28) {
            ppuVar27 = (undefined4 **)(iVar2 - 0x54);
            ppuVar12 = ppuVar27;
            if (*(int *)(iVar13 + 0x14) < 0) {
              ppuVar12 = ppuVar24;
            }
            func_0x016fea14(pcVar21,ppuVar12,iVar25);
            iVar13 = *(int *)pcVar20;
            if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
              iVar13 = func_0x016cc8b0(iVar13);
              pcVar20 = *(code **)(extraout_r3_03 + 0x1c);
            }
            iVar7 = *(int *)(pcVar20 + 4);
            *(uint *)(iVar2 + -0x5c) = extraout_r3_03;
            iVar8 = *piVar1;
            pcVar20 = pcVar21;
            if (-1 < *(int *)(iVar7 + 0x14)) {
              pcVar20 = *(code **)pcVar21;
            }
            uVar14 = (uint)*(ushort *)(iVar8 + 0xb6);
            if (uVar14 != 0) {
              piVar17 = (int *)(*(int *)(iVar8 + 0x58) + 4);
              do {
                if (piVar17[-1] == iVar13) {
                  iVar13 = iVar8 + *piVar17 * 8 + 0xe0;
                  goto LAB_023f2920;
                }
                uVar14 = uVar14 - 1;
                piVar17 = piVar17 + 2;
              } while (uVar14 != 0);
            }
            iVar13 = func_0x016cc99c(piVar1,iVar13,4);
LAB_023f2920:
            iVar13 = *(int *)(iVar13 + 4);
            *(code **)(iVar2 + -0x50) = pcVar20;
            uVar4 = *(undefined4 *)(iVar13 + 4);
            pcVar23 = *(code **)(iVar13 + 8);
            *(int *)(iVar16 + -8) = iVar2 + -0x45;
            (*pcVar23)(uVar4,iVar13,piVar1,iVar2 + -0x50);
            uVar14 = (uint)*(byte *)(iVar2 + -0x45);
            if (uVar14 == 0) {
              piVar17 = *(int **)(*(int *)(iVar2 + -0x5c) + 0x1c);
              if (*(int *)(piVar17[1] + 0x14) < 0) {
                ppuVar27 = ppuVar24;
              }
              func_0x016fea14(pcVar21,ppuVar27,iVar25);
              puVar3 = *(undefined4 **)(iVar2 + -0x60);
              iVar13 = iVar2 + -0x58;
              if (*(int *)(piVar17[3] + 0x14) < 0) {
                iVar13 = *(int *)(iVar2 + -100);
              }
              func_0x016fea14(puVar3,iVar13,*(undefined4 *)(iVar2 + -0x68));
              iVar13 = *piVar17;
              if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
                iVar13 = func_0x016cc8b0(iVar13);
                piVar17 = *(int **)(*(int *)(iVar2 + -0x5c) + 0x1c);
              }
              if (-1 < *(int *)(piVar17[1] + 0x14)) {
                pcVar21 = *(code **)pcVar21;
              }
              iVar25 = *piVar1;
              if (-1 < *(int *)(piVar17[3] + 0x14)) {
                puVar3 = (undefined4 *)*puVar3;
              }
              uVar15 = (uint)*(ushort *)(iVar25 + 0xb6);
              if (uVar15 != 0) {
                piVar17 = (int *)(*(int *)(iVar25 + 0x58) + 4);
                do {
                  if (piVar17[-1] == iVar13) {
                    iVar13 = iVar25 + *piVar17 * 8 + 0xe8;
                    goto LAB_023f2a34;
                  }
                  uVar15 = uVar15 - 1;
                  piVar17 = piVar17 + 2;
                } while (uVar15 != 0);
              }
              iVar13 = func_0x016cc99c(piVar1,iVar13,5);
LAB_023f2a34:
              *(undefined4 **)(iVar2 + -0x4c) = puVar3;
              iVar13 = *(int *)(iVar13 + 4);
              *(code **)(iVar2 + -0x50) = pcVar21;
              uVar4 = *(undefined4 *)(iVar13 + 4);
              pcVar20 = *(code **)(iVar13 + 8);
              *(undefined4 **)(iVar16 + -8) = puVar3;
              (*pcVar20)(uVar4,iVar13,piVar1,iVar2 + -0x50);
            }
            uVar28 = **(int **)(iRam023f2ac8 + 0x23f2a68) == *(int *)(iVar2 + -0x44);
            if ((bool)uVar28) {
              return (uint)(uVar14 == 0);
            }
            func_0x017015a8(**(int **)(iRam023f2ac8 + 0x23f2a68));
          }
          func_0x0165b434(*(undefined4 *)(iRam023f2acc + 0x23f2a90));
          uVar4 = func_0x0165b6d4();
          uVar5 = func_0x0165b434(*(undefined4 *)(iRam023f2ad0 + 0x23f2aa4));
          func_0x026fab30(uVar4,uVar5,0);
          func_0x0165b590(uVar4,uVar14);
          uVar29 = func_0x0165b3c4();
          uVar5 = (undefined4)((ulonglong)uVar29 >> 0x20);
          iVar13 = (int)uVar29;
          if (!(bool)uVar28) {
            *(undefined4 *)(iVar16 + -4) = 0x23f2ac4;
            *(int *)(iVar16 + -8) = iVar2 + -0x20;
            *(code **)(iVar16 + -0xc) = pcVar20;
            *(uint *)(iVar16 + -0x10) = uVar14;
            *(code **)(iVar16 + -0x14) = pcVar21;
            *(undefined4 *)(iVar16 + -0x18) = uVar4;
            if (*(int *)(extraout_r2_04 + 0x1c) == 0) {
              func_0x016cc90c(extraout_r2_04);
            }
            if (iVar13 == 0) {
              func_0x0165b6e0();
            }
            iVar2 = func_0x02f07fa8(iVar13,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 4));
            iVar16 = *(int *)(*(int *)(extraout_r2_04 + 0x1c) + 8);
            if ((*(ushort *)(iVar16 + 0xbd) & 1) == 0) {
              iVar16 = func_0x016cc8b0();
            }
            iVar2 = func_0x0165b4f0(iVar16,iVar2 + 1);
            if (iVar2 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar2 + 0xc) == 0) {
              func_0x0165b6e4();
            }
            *(undefined4 *)(iVar2 + 0x10) = uVar5;
            func_0x0165b3c0((undefined4 *)(iVar2 + 0x10),uVar5);
            if (iVar13 == 0) {
              func_0x0165b6e0();
            }
            func_0x02f0818c(iVar13,iVar2,1,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 0x10));
            if ((*(ushort *)(*(int *)(*(int *)(extraout_r2_04 + 0x1c) + 0x18) + 0xbd) & 1) == 0) {
              func_0x016cc8b0();
            }
            uVar14 = func_0x0165b6d4();
            func_0x031da4ec(uVar14,iVar2,*(undefined4 *)(*(int *)(extraout_r2_04 + 0x1c) + 0x1c));
            return uVar14;
          }
                    /* WARNING: Could not recover jumptable at 0x023f2ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar14 = (*(code *)((uint)ppuVar27 & 0xfffffffe | 0x6c00))();
          return uVar14;
        }
        iVar2 = **(int **)(extraout_r3_02 + 0x1c);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x016cc8b0(iVar2);
        }
        iVar13 = *piVar18;
        uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
        if (uVar14 != 0) {
          piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
          do {
            if (piVar1[-1] == iVar2) {
              puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 0xe0);
              goto LAB_023f26fc;
            }
            uVar14 = uVar14 - 1;
            piVar1 = piVar1 + 2;
          } while (uVar14 != 0);
        }
        puVar3 = (undefined4 *)func_0x016cc99c(piVar18,iVar2,4);
LAB_023f26fc:
        uVar14 = (*(code *)*puVar3)(piVar18,uVar5,puVar3[1]);
        if (uVar14 == 0) {
          iVar2 = **(int **)(extraout_r3_02 + 0x1c);
          if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
            iVar2 = func_0x016cc8b0(iVar2);
          }
          iVar13 = *piVar18;
          uVar15 = (uint)*(ushort *)(iVar13 + 0xb6);
          if (uVar15 != 0) {
            piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
            do {
              if (piVar1[-1] == iVar2) {
                puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 0xe8);
                goto LAB_023f2788;
              }
              uVar15 = uVar15 - 1;
              piVar1 = piVar1 + 2;
            } while (uVar15 != 0);
          }
          puVar3 = (undefined4 *)func_0x016cc99c(piVar18,iVar2,5);
LAB_023f2788:
          (*(code *)*puVar3)(piVar18,uVar5,extraout_r2_02,puVar3[1]);
        }
        return uVar14 ^ 1;
      }
      iVar2 = **(int **)(extraout_r3_00 + 0x1c);
      if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
        iVar2 = func_0x016cc8b0(iVar2);
      }
      iVar13 = *piVar17;
      uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
      if (uVar14 != 0) {
        piVar1 = (int *)(*(int *)(iVar13 + 0x58) + 4);
        do {
          if (piVar1[-1] == iVar2) {
            puVar3 = (undefined4 *)(iVar13 + *piVar1 * 8 + 200);
            goto LAB_023f23a4;
          }
          uVar14 = uVar14 - 1;
          piVar1 = piVar1 + 2;
        } while (uVar14 != 0);
      }
      puVar3 = (undefined4 *)func_0x016cc99c(piVar17,iVar2,1);
LAB_023f23a4:
      iVar2 = (*(code *)*puVar3)(piVar17,uVar5,&uStack_64,puVar3[1]);
      uVar14 = extraout_r2_00;
      if (iVar2 != 0) {
        uVar14 = uStack_64;
      }
      return uVar14;
    }
    iVar2 = **(int **)(extraout_r3 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = func_0x016cc8b0(iVar2);
    }
    iVar13 = *piVar1;
    uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar14 != 0) {
      piVar17 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar17[-1] == iVar2) {
          puVar3 = (undefined4 *)(iVar13 + *piVar17 * 8 + 200);
          goto LAB_023f2280;
        }
        uVar14 = uVar14 - 1;
        piVar17 = piVar17 + 2;
      } while (uVar14 != 0);
    }
    puVar3 = (undefined4 *)func_0x016cc99c(piVar1,iVar2,1);
LAB_023f2280:
    iVar2 = (*(code *)*puVar3)(piVar1,(int)((ulonglong)uVar29 >> 0x20),&uStack_44,puVar3[1]);
    uVar14 = extraout_r2;
    if (iVar2 != 0) {
      uVar14 = uStack_44;
    }
    return uVar14;
  }
  iVar2 = **(int **)(iVar2 + 0x1c);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x016cc8b0(iVar2);
  }
  iVar13 = *piVar1;
  uVar14 = (uint)*(ushort *)(iVar13 + 0xb6);
  if (uVar14 != 0) {
    piVar17 = (int *)(*(int *)(iVar13 + 0x58) + 4);
    do {
      if (piVar17[-1] == iVar2) {
        puVar3 = (undefined4 *)(iVar13 + *piVar17 * 8 + 200);
        goto LAB_023f2158;
      }
      uVar14 = uVar14 - 1;
      piVar17 = piVar17 + 2;
    } while (uVar14 != 0);
  }
  puVar3 = (undefined4 *)func_0x016cc99c(piVar1,iVar2,1);
LAB_023f2158:
  iVar2 = (*(code *)*puVar3)(piVar1,param_2,auStack_1c,puVar3[1]);
  uVar14 = 0;
  if (iVar2 != 0) {
    uVar14 = auStack_1c[0];
  }
  return uVar14;
}


/* ItemChainManager.GetItemLinksAtUnlockLevel VA=0x1906DCC | public List<ItemLinkModel> GetItemLinksAtUnlockLevel(int unlockLevel) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetItemLinksAtUnlockLevel_1906DCC(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined1 *extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  uint uVar5;
  uint extraout_r3_06;
  uint extraout_r3_07;
  uint extraout_r3_08;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  char *pcVar9;
  int iVar10;
  int unaff_r7;
  int unaff_r8;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = &stack0xfffffff0;
  pcVar9 = (char *)(_UNK_01916eec + 0x1916de4);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01916ef0 + 0x1916df8));
    func_0x0165b424(*(undefined4 *)(_UNK_01916ef4 + 0x1916e04));
    func_0x0165b424(*(undefined4 *)(_UNK_01916ef8 + 0x1916e10));
    func_0x0165b424(*(undefined4 *)(_UNK_01916efc + 0x1916e1c));
    func_0x0165b424(*(undefined4 *)(_UNK_01916f00 + 0x1916e28));
    func_0x0165b424(*(undefined4 *)(_UNK_01916f04 + 0x1916e34));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916f08 + 0x1916e48));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = func_0x026f8924(iVar7,**(undefined4 **)(_UNK_01916f0c + 0x1916e84));
  uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01916f10 + 0x1916e9c));
  func_0x026f8108(uVar3,iVar1,**(undefined4 **)(_UNK_01916f14 + 0x1916eb8),0);
  iVar1 = func_0x02465edc(uVar2,uVar3,**(undefined4 **)(_UNK_01916f18 + 0x1916ed0));
  iVar7 = **(int **)(_UNK_01916f1c + 0x1916ee4);
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = iVar1 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar4 = func_0x0165b6d4();
    func_0x02b0ab2c(iVar4,iVar1,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar4;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463550 + 0x246353c));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    puVar11 = extraout_r3;
  }
  *(undefined4 *)(puVar11 + -4) = 0x2463550;
  *(int *)(puVar11 + -8) = unaff_r6;
  *(undefined4 *)(puVar11 + -0xc) = 0;
  piVar14 = (int *)(puVar11 + -0x10);
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b20e48(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024635d8 + 0x24635c4));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_00 | 0x780);
  }
  piVar14[-1] = 0x24635d8;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    func_0x02b4ca04(iVar1,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463660 + 0x246364c));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_01 | 0x3c00);
  }
  piVar14[-1] = 0x2463660;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b55720(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024636e8 + 0x24636d4));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_02 | 0x1a00);
  }
  piVar14[-1] = 0x24636e8;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    (*(code *)**(undefined4 **)(*(int *)(iVar7 + 0x1c) + 8))(iVar1,(int)uVar16);
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463774 + 0x2463760));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_03 | 0xdc00);
  }
  piVar14[-1] = 0x2463774;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02be9490(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024637fc + 0x24637e8));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_04 | 0x5400);
  }
  piVar14[-1] = 0x24637fc;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    func_0x02c05e28(iVar1,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463884 + 0x2463870));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_05 | 0x33000);
  }
  piVar14[-1] = 0x2463884;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14[-4] = iVar7;
  if (*(int *)(extraout_r2 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2);
  }
  if ((int)uVar16 == 0) {
    uVar2 = *(undefined4 *)(iRam02463904 + 0x24638e4);
  }
  else {
    if (iVar1 != 0) {
      uVar2 = 0;
      uVar5 = *(uint *)(*(int *)(extraout_r2 + 0x1c) + 4);
      iVar1 = piVar14[-4];
      uVar17 = CONCAT44(piVar14[-3],piVar14[-2]);
      uVar12 = piVar14[-1];
      goto LAB_02463a18;
    }
    uVar2 = *(undefined4 *)(iRam02463908 + 0x24638f0);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2);
  uVar5 = 0x2463904;
  uVar17 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  iVar7 = (int)uVar17;
  if ((bool)uVar13) {
    uVar5 = extraout_r3_06 | 0xec0;
  }
  piVar14[-5] = uVar5;
  piVar14[-6] = (int)uVar16;
  piVar14[-7] = iVar1;
  piVar15 = piVar14 + -8;
  *piVar15 = extraout_r2;
  if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_00);
  }
  if (iVar7 == 0) {
    uVar2 = *(undefined4 *)(iRam02463988 + 0x2463968);
  }
  else {
    if (iVar4 != 0) {
      iVar1 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 4);
      iVar6 = *piVar15;
      iVar8 = piVar14[-7];
      iVar10 = piVar14[-6];
      piVar14[-5] = piVar14[-5];
      piVar14[-6] = unaff_r8;
      piVar14[-7] = unaff_r7;
      *piVar15 = iVar10;
      piVar14[-9] = iVar8;
      piVar14[-10] = iVar6;
      piVar14 = *(int **)(iVar1 + 0x1c);
      if (piVar14 == (int *)0x0) {
        func_0x016cc90c(iVar1);
        piVar14 = *(int **)(iVar1 + 0x1c);
      }
      if ((*(ushort *)(*piVar14 + 0xbd) & 1) == 0) {
        func_0x016cc8b0();
      }
      iVar6 = func_0x0165b6d4();
      func_0x02924cfc(iVar6,0xfffffffe,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      *(int *)(iVar6 + 0x20) = iVar7;
      func_0x0165b3c0((int *)(iVar6 + 0x20),iVar7);
      *(int *)(iVar6 + 0x28) = iVar4;
      func_0x0165b3c0((int *)(iVar6 + 0x28),iVar4);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      func_0x0165b3c0((undefined4 *)(iVar6 + 0x18),0);
      return iVar6;
    }
    uVar2 = *(undefined4 *)(iRam0246398c + 0x2463974);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2_00);
  uVar5 = 0x2463988;
  uVar17 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar17 >> 0x20);
  if ((bool)uVar13) {
    uVar5 = extraout_r3_07 | 0x680;
  }
  piVar14[-9] = uVar5;
  piVar14[-10] = iVar7;
  piVar14[-0xb] = iVar4;
  piVar14 = piVar14 + -0xc;
  *piVar14 = extraout_r2_00;
  if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_01);
  }
  if ((int)uVar17 == 0) {
    uVar2 = *(undefined4 *)(iRam02463a10 + 0x24639f0);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x024639e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_01 + 0x1c) + 4))((int)uVar17,iVar1,0)
      ;
      return iVar1;
    }
    uVar2 = *(undefined4 *)(iRam02463a14 + 0x24639fc);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2_01);
  uVar12 = 0x2463a10;
  uVar16 = func_0x0165b3c4();
  uVar2 = extraout_r2_02;
  uVar5 = extraout_r3_08;
  iVar1 = extraout_r2_01;
  if ((bool)uVar13) {
    uVar12 = extraout_r3_08 | 0x3800;
  }
LAB_02463a18:
  uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
  piVar14[-1] = uVar12;
  piVar14[-2] = unaff_r8;
  piVar14[-3] = unaff_r7;
  piVar14[-4] = (int)uVar17;
  piVar14[-5] = (int)((ulonglong)uVar17 >> 0x20);
  piVar14[-6] = iVar1;
  piVar14 = *(int **)(uVar5 + 0x1c);
  if (piVar14 == (int *)0x0) {
    func_0x016cc90c(uVar5);
    piVar14 = *(int **)(uVar5 + 0x1c);
  }
  if ((*(ushort *)(*piVar14 + 0xbd) & 1) == 0) {
    func_0x016cc8b0();
  }
  iVar1 = func_0x0165b6d4();
  func_0x02924424(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(uVar5 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar1 + 0x20) = (int)uVar16;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x20),(int)uVar16);
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x28),uVar3);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x18),uVar2);
  return iVar1;
}


/* ItemChainManager.GetItemLinksAtArchiveLevel VA=0x1906F28 | public List<ItemLinkModel> GetItemLinksAtArchiveLevel(int archiveLevel) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetItemLinksAtArchiveLevel_1906F28(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined1 *extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  uint uVar5;
  uint extraout_r3_06;
  uint extraout_r3_07;
  uint extraout_r3_08;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  char *pcVar9;
  int iVar10;
  int unaff_r7;
  int unaff_r8;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar11 = &stack0xfffffff0;
  pcVar9 = (char *)(_UNK_01917048 + 0x1916f40);
  if (*pcVar9 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191704c + 0x1916f54));
    func_0x0165b424(*(undefined4 *)(_UNK_01917050 + 0x1916f60));
    func_0x0165b424(*(undefined4 *)(_UNK_01917054 + 0x1916f6c));
    func_0x0165b424(*(undefined4 *)(_UNK_01917058 + 0x1916f78));
    func_0x0165b424(*(undefined4 *)(_UNK_0191705c + 0x1916f84));
    func_0x0165b424(*(undefined4 *)(_UNK_01917060 + 0x1916f90));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01917064 + 0x1916fa4));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = func_0x026f8924(iVar7,**(undefined4 **)(_UNK_01917068 + 0x1916fe0));
  uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191706c + 0x1916ff8));
  func_0x026f8108(uVar3,iVar1,**(undefined4 **)(_UNK_01917070 + 0x1917014),0);
  iVar1 = func_0x02465edc(uVar2,uVar3,**(undefined4 **)(_UNK_01917074 + 0x191702c));
  iVar7 = **(int **)(_UNK_01917078 + 0x1917040);
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = iVar1 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar4 = func_0x0165b6d4();
    func_0x02b0ab2c(iVar4,iVar1,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar4;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463550 + 0x246353c));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    puVar11 = extraout_r3;
  }
  *(undefined4 *)(puVar11 + -4) = 0x2463550;
  *(int *)(puVar11 + -8) = unaff_r6;
  *(undefined4 *)(puVar11 + -0xc) = 0;
  piVar14 = (int *)(puVar11 + -0x10);
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b20e48(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024635d8 + 0x24635c4));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_00 | 0x780);
  }
  piVar14[-1] = 0x24635d8;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    func_0x02b4ca04(iVar1,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463660 + 0x246364c));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_01 | 0x3c00);
  }
  piVar14[-1] = 0x2463660;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b55720(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024636e8 + 0x24636d4));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_02 | 0x1a00);
  }
  piVar14[-1] = 0x24636e8;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    (*(code *)**(undefined4 **)(*(int *)(iVar7 + 0x1c) + 8))(iVar1,(int)uVar16);
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463774 + 0x2463760));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_03 | 0xdc00);
  }
  piVar14[-1] = 0x2463774;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar7;
  if (*(int *)(iVar1 + 0x1c) == 0) {
    func_0x016cc90c(iVar1);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar1 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02be9490(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    return iVar7;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam024637fc + 0x24637e8));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar1);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_04 | 0x5400);
  }
  piVar14[-1] = 0x24637fc;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14 = piVar14 + -4;
  *piVar14 = iVar1;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar13 = (int)uVar16 == 0;
  if (!(bool)uVar13) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar1 = func_0x0165b6d4();
    func_0x02c05e28(iVar1,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar1;
  }
  uVar2 = func_0x0165b434(*(undefined4 *)(iRam02463884 + 0x2463870));
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar13) {
    piVar14 = (int *)(extraout_r3_05 | 0x33000);
  }
  piVar14[-1] = 0x2463884;
  piVar14[-2] = unaff_r6;
  piVar14[-3] = 0;
  piVar14[-4] = iVar7;
  if (*(int *)(extraout_r2 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2);
  }
  if ((int)uVar16 == 0) {
    uVar2 = *(undefined4 *)(iRam02463904 + 0x24638e4);
  }
  else {
    if (iVar1 != 0) {
      uVar2 = 0;
      uVar5 = *(uint *)(*(int *)(extraout_r2 + 0x1c) + 4);
      iVar1 = piVar14[-4];
      uVar17 = CONCAT44(piVar14[-3],piVar14[-2]);
      uVar12 = piVar14[-1];
      goto LAB_02463a18;
    }
    uVar2 = *(undefined4 *)(iRam02463908 + 0x24638f0);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2);
  uVar5 = 0x2463904;
  uVar17 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  iVar7 = (int)uVar17;
  if ((bool)uVar13) {
    uVar5 = extraout_r3_06 | 0xec0;
  }
  piVar14[-5] = uVar5;
  piVar14[-6] = (int)uVar16;
  piVar14[-7] = iVar1;
  piVar15 = piVar14 + -8;
  *piVar15 = extraout_r2;
  if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_00);
  }
  if (iVar7 == 0) {
    uVar2 = *(undefined4 *)(iRam02463988 + 0x2463968);
  }
  else {
    if (iVar4 != 0) {
      iVar1 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 4);
      iVar6 = *piVar15;
      iVar8 = piVar14[-7];
      iVar10 = piVar14[-6];
      piVar14[-5] = piVar14[-5];
      piVar14[-6] = unaff_r8;
      piVar14[-7] = unaff_r7;
      *piVar15 = iVar10;
      piVar14[-9] = iVar8;
      piVar14[-10] = iVar6;
      piVar14 = *(int **)(iVar1 + 0x1c);
      if (piVar14 == (int *)0x0) {
        func_0x016cc90c(iVar1);
        piVar14 = *(int **)(iVar1 + 0x1c);
      }
      if ((*(ushort *)(*piVar14 + 0xbd) & 1) == 0) {
        func_0x016cc8b0();
      }
      iVar6 = func_0x0165b6d4();
      func_0x02924cfc(iVar6,0xfffffffe,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 4));
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      *(int *)(iVar6 + 0x20) = iVar7;
      func_0x0165b3c0((int *)(iVar6 + 0x20),iVar7);
      *(int *)(iVar6 + 0x28) = iVar4;
      func_0x0165b3c0((int *)(iVar6 + 0x28),iVar4);
      *(undefined4 *)(iVar6 + 0x18) = 0;
      func_0x0165b3c0((undefined4 *)(iVar6 + 0x18),0);
      return iVar6;
    }
    uVar2 = *(undefined4 *)(iRam0246398c + 0x2463974);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2_00);
  uVar5 = 0x2463988;
  uVar17 = func_0x0165b3c4();
  iVar1 = (int)((ulonglong)uVar17 >> 0x20);
  if ((bool)uVar13) {
    uVar5 = extraout_r3_07 | 0x680;
  }
  piVar14[-9] = uVar5;
  piVar14[-10] = iVar7;
  piVar14[-0xb] = iVar4;
  piVar14 = piVar14 + -0xc;
  *piVar14 = extraout_r2_00;
  if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_01);
  }
  if ((int)uVar17 == 0) {
    uVar2 = *(undefined4 *)(iRam02463a10 + 0x24639f0);
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x024639e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_01 + 0x1c) + 4))((int)uVar17,iVar1,0)
      ;
      return iVar1;
    }
    uVar2 = *(undefined4 *)(iRam02463a14 + 0x24639fc);
  }
  uVar13 = 1;
  uVar2 = func_0x0165b434(uVar2);
  uVar2 = func_0x026fd688(uVar2,0);
  func_0x0165b590(uVar2,extraout_r2_01);
  uVar12 = 0x2463a10;
  uVar16 = func_0x0165b3c4();
  uVar2 = extraout_r2_02;
  uVar5 = extraout_r3_08;
  iVar1 = extraout_r2_01;
  if ((bool)uVar13) {
    uVar12 = extraout_r3_08 | 0x3800;
  }
LAB_02463a18:
  uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
  piVar14[-1] = uVar12;
  piVar14[-2] = unaff_r8;
  piVar14[-3] = unaff_r7;
  piVar14[-4] = (int)uVar17;
  piVar14[-5] = (int)((ulonglong)uVar17 >> 0x20);
  piVar14[-6] = iVar1;
  piVar14 = *(int **)(uVar5 + 0x1c);
  if (piVar14 == (int *)0x0) {
    func_0x016cc90c(uVar5);
    piVar14 = *(int **)(uVar5 + 0x1c);
  }
  if ((*(ushort *)(*piVar14 + 0xbd) & 1) == 0) {
    func_0x016cc8b0();
  }
  iVar1 = func_0x0165b6d4();
  func_0x02924424(iVar1,0xfffffffe,*(undefined4 *)(*(int *)(uVar5 + 0x1c) + 4));
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar1 + 0x20) = (int)uVar16;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x20),(int)uVar16);
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x28),uVar3);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  func_0x0165b3c0((undefined4 *)(iVar1 + 0x18),uVar2);
  return iVar1;
}


/* ItemChainManager.GetItemLinkWithItemSet VA=0x1907084 | public ItemLinkModel GetItemLinkWithItemSet(int itemSetId) { } */

/* WARNING: Removing unreachable block (ram,0x0243edb4) */
/* WARNING: Removing unreachable block (ram,0x0243e314) */
/* WARNING: Removing unreachable block (ram,0x0243df0c) */
/* WARNING: Removing unreachable block (ram,0x0243e834) */
/* WARNING: Removing unreachable block (ram,0x0243f1d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * ItemChainManager_GetItemLinkWithItemSet_1907084(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int extraout_r2;
  uint uVar13;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int *piVar14;
  int *piVar15;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  code *pcVar16;
  int iVar17;
  code *pcVar18;
  code *pcVar19;
  int iVar20;
  int iVar21;
  char *pcVar22;
  int unaff_r7;
  uint unaff_r9;
  uint uVar23;
  uint unaff_r10;
  int iVar24;
  int *piVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  int aiStack_190 [62];
  int iStack_98;
  int *piStack_94;
  undefined4 uStack_90;
  int *piStack_8c;
  undefined8 uStack_88;
  code *pcStack_80;
  int *piStack_7c;
  char cStack_75;
  int *piStack_74;
  int *piStack_6c;
  int *piStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_58;
  uint uStack_54;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  pcVar22 = (char *)(_UNK_01917188 + 0x191709c);
  if (*pcVar22 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191718c + 0x19170b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01917190 + 0x19170bc));
    func_0x0165b424(*(undefined4 *)(_UNK_01917194 + 0x19170c8));
    func_0x0165b424(*(undefined4 *)(_UNK_01917198 + 0x19170d4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191719c + 0x19170e0));
    *pcVar22 = '\x01';
  }
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_019171a0 + 0x19170f4));
  func_0x026f769c(iVar3,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar17 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar3 + 8) = param_2;
  if (iVar17 == 0) {
    func_0x0165b6e0();
  }
  piVar4 = (int *)func_0x026f8924(iVar17,**(undefined4 **)(_UNK_019171a4 + 0x1917130));
  iVar17 = func_0x0165b6d4(**(undefined4 **)(_UNK_019171a8 + 0x1917148));
  func_0x026f8108(iVar17,iVar3,**(undefined4 **)(_UNK_019171ac + 0x1917164),0);
  iVar3 = **(int **)(_UNK_019171b0 + 0x191717c);
  if (*(int *)(iVar3 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243df20 + 0x243dba8));
    func_0x0165b424(*(undefined4 *)(iRam0243df24 + 0x243dbb4));
    if (*(int *)(iVar3 + 0x1c) == 0) {
      func_0x016cc90c(iVar3);
    }
  }
  if (piVar4 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243df28 + 0x243de34);
  }
  else {
    if (iVar17 != 0) {
      iVar10 = **(int **)(iVar3 + 0x1c);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = func_0x016cc8b0(iVar10);
      }
      iVar5 = *piVar4;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar14[-1] == iVar10) {
            puVar6 = (undefined4 *)(iVar5 + *piVar14 * 8 + 0xc0);
            goto LAB_0243dc44;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar4,iVar10,0);
LAB_0243dc44:
      piVar4 = (int *)(*(code *)*puVar6)(piVar4,puVar6[1]);
      piVar14 = *(int **)(iRam0243df30 + 0x243dc64);
      do {
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar10 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            if (piVar15[-1] == *piVar14) {
              puVar6 = (undefined4 *)(iVar10 + *piVar15 * 8 + 0xc0);
              goto LAB_0243dcbc;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,*piVar14,0);
LAB_0243dcbc:
        iVar10 = (*(code *)*puVar6)(piVar4,puVar6[1]);
        if (iVar10 == 0) {
          iVar17 = 0;
          iVar3 = 0xb;
          goto LAB_0243dd90;
        }
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar10 = *(int *)(*(int *)(iVar3 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
          iVar10 = func_0x016cc8b0(iVar10);
        }
        iVar5 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar10) {
              puVar6 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
              goto LAB_0243dd4c;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,iVar10,0);
LAB_0243dd4c:
        piVar15 = (int *)(*(code *)*puVar6)(piVar4,puVar6[1]);
        iVar10 = (**(code **)(iVar17 + 0xc))
                           (*(undefined4 *)(iVar17 + 0x20),piVar15,*(undefined4 *)(iVar17 + 0x14));
      } while (iVar10 == 0);
      iVar3 = 10;
      iVar17 = 0;
      goto LAB_0243dd94;
    }
    uVar7 = *(undefined4 *)(iRam0243df2c + 0x243de40);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,iVar3);
  uVar27 = func_0x0165b3c4();
  uVar11 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar14 = (int *)func_0x017010e8(uVar11);
    iVar17 = *piVar14;
    iVar3 = 0;
    func_0x0171ece4();
LAB_0243dd90:
    piVar15 = (int *)0x0;
LAB_0243dd94:
    if (piVar4 != (int *)0x0) {
      iVar10 = *piVar4;
      uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
      if (uVar11 != 0) {
        piVar14 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          if (piVar14[-1] == **(int **)(iRam0243df34 + 0x243ddac)) {
            puVar6 = (undefined4 *)(iVar10 + *piVar14 * 8 + 0xc0);
            goto LAB_0243ddf4;
          }
          uVar11 = uVar11 - 1;
          piVar14 = piVar14 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(iRam0243df34 + 0x243ddac),0);
LAB_0243ddf4:
      (*(code *)*puVar6)(piVar4,puVar6[1]);
    }
    if (iVar17 != 0) {
      func_0x0165b6dc(iVar17);
    }
    if (iVar3 == 0xb || iVar3 == 0) {
      piVar15 = (int *)0x0;
    }
    return piVar15;
  }
  if (piVar4 != (int *)0x0) {
    iVar17 = *piVar4;
    uVar12 = (uint)*(ushort *)(iVar17 + 0xb6);
    if (uVar12 != 0) {
      piVar14 = (int *)(*(int *)(iVar17 + 0x58) + 4);
      do {
        unaff_r7 = piVar14[-1];
        if (unaff_r7 == **(int **)(iRam0243df38 + 0x243deac)) {
          puVar6 = (undefined4 *)(iVar17 + *piVar14 * 8 + 0xc0);
          goto LAB_0243def4;
        }
        uVar12 = uVar12 - 1;
        piVar14 = piVar14 + 2;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(iRam0243df38 + 0x243deac),0);
LAB_0243def4:
    (*(code *)*puVar6)(piVar4,puVar6[1]);
  }
  uVar26 = 1;
  func_0x016ff924(uVar11);
  uVar27 = func_0x01178c80();
  piVar14 = (int *)((ulonglong)uVar27 >> 0x20);
  piVar15 = (int *)uVar27;
  uVar12 = extraout_r3;
  if ((bool)uVar26) {
    uVar12 = uVar11 | 0x800000;
    piVar4 = (int *)(uVar11 | 0x70000);
    unaff_r10 = uVar11 | 0x70014;
    unaff_r9 = uVar11 | 0x71300;
  }
  uStack_2c = 0;
  piStack_3c = piVar4;
  iStack_38 = iVar3;
  uStack_34 = uVar11;
  iStack_30 = unaff_r7;
  uStack_28 = unaff_r9;
  uStack_24 = unaff_r10;
  if (*(int *)(uVar12 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243e328 + 0x243df6c));
    func_0x0165b424(*(undefined4 *)(iRam0243e32c + 0x243df78));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar14 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243e330 + 0x243e23c);
  }
  else {
    if (extraout_r2 != 0) {
      iVar3 = **(int **)(uVar12 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar17 = *piVar14;
      uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(int *)(iVar17 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar3) {
            puVar6 = (undefined4 *)(iVar17 + *piVar4 * 8 + 0xc0);
            goto LAB_0243e00c;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar14,iVar3,0);
LAB_0243e00c:
      piVar14 = (int *)(*(code *)*puVar6)(piVar14,puVar6[1]);
      piVar25 = *(int **)(iRam0243e338 + 0x243e030);
      do {
        if (piVar14 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar14;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar4[-1] == *piVar25) {
              puVar6 = (undefined4 *)(iVar3 + *piVar4 * 8 + 0xc0);
              goto LAB_0243e088;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar14,*piVar25,0);
LAB_0243e088:
        iVar3 = (*(code *)*puVar6)(piVar14,puVar6[1]);
        piStack_48 = piVar15;
        if (iVar3 == 0) {
          iVar17 = 0;
          iVar3 = 0xb;
          piVar4 = (int *)0x0;
          goto LAB_0243e168;
        }
        if (piVar14 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar17 = *piVar14;
        uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
        if (uVar11 != 0) {
          piVar4 = (int *)(*(int *)(iVar17 + 0x58) + 4);
          do {
            if (piVar4[-1] == iVar3) {
              puVar6 = (undefined4 *)(iVar17 + *piVar4 * 8 + 0xc0);
              goto LAB_0243e118;
            }
            uVar11 = uVar11 - 1;
            piVar4 = piVar4 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar14,iVar3,0);
LAB_0243e118:
        (*(code *)*puVar6)(&iStack_44,piVar14,puVar6[1]);
        iVar5 = iStack_40;
        iVar10 = iStack_44;
        piVar4 = (int *)(**(code **)(extraout_r2 + 0xc))
                                  (*(undefined4 *)(extraout_r2 + 0x20),iStack_44,iStack_40,
                                   *(undefined4 *)(extraout_r2 + 0x14));
      } while (piVar4 == (int *)0x0);
      iVar3 = 10;
      iVar17 = 0;
      goto LAB_0243e170;
    }
    uVar7 = *(undefined4 *)(iRam0243e334 + 0x243e248);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar12);
  uVar27 = func_0x0165b3c4();
  uVar11 = (uint)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) != 1) {
    uVar23 = 0;
    if (piVar15 != (int *)0x0) {
      iVar3 = *piVar15;
      uVar13 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar13 != 0) {
        piVar4 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          unaff_r7 = piVar4[-1];
          if (unaff_r7 == **(int **)(iRam0243e340 + 0x243e2b4)) {
            puVar6 = (undefined4 *)(iVar3 + *piVar4 * 8 + 0xc0);
            goto LAB_0243e2fc;
          }
          uVar13 = uVar13 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar15,**(int **)(iRam0243e340 + 0x243e2b4),0);
LAB_0243e2fc:
      (*(code *)*puVar6)(piVar15,puVar6[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar11);
    uStack_88 = func_0x01178c80();
    uVar13 = extraout_r3_00;
    if ((bool)uVar26) {
      piVar14 = (int *)(uVar11 | 0x5000000);
      uVar23 = uVar11 | 0x5110000;
      uVar13 = uVar11;
    }
    piStack_74 = (int *)**(int **)(iRam0243e848 + 0x243e36c);
    pcVar16 = *(code **)(uVar13 + 0x1c);
    uStack_90 = extraout_r2_00;
    piStack_6c = piVar14;
    piStack_68 = piVar15;
    uStack_64 = uVar11;
    iStack_60 = unaff_r7;
    uStack_58 = uVar23;
    uStack_54 = uVar12;
    if (pcVar16 == (code *)0x0) {
      func_0x0165b424(*(undefined4 *)(iRam0243e84c + 0x243e388));
      func_0x0165b424(*(undefined4 *)(iRam0243e850 + 0x243e394));
      pcVar16 = *(code **)(uVar13 + 0x1c);
      if (pcVar16 == (code *)0x0) {
        func_0x016cc90c(uVar13);
        pcVar16 = *(code **)(uVar13 + 0x1c);
      }
    }
    pcVar18 = *(code **)(*(int *)(pcVar16 + 0x14) + 0x84);
    uVar11 = (uint)(pcVar18 + 7) & 0xfffffff8;
    piVar15 = (int *)((int)&iStack_98 - uVar11);
    piVar4 = (int *)((int)piVar15 - uVar11);
    iVar3 = (int)piVar4 - uVar11;
    func_0x016fea2c(iVar3,pcVar18);
    piVar14 = (int *)(iVar3 - uVar11);
    piStack_8c = piVar14;
    func_0x016fea2c(piVar14,pcVar18);
    piVar14 = (int *)((int)piVar14 - uVar11);
    piStack_94 = piVar14;
    pcStack_80 = pcVar18;
    func_0x016fea2c(piVar14,pcVar18);
    pcVar18 = (code *)uStack_88;
    pcVar19 = (code *)uStack_88;
    if ((code *)uStack_88 == (code *)0x0) goto LAB_0243e754;
    if (uStack_88._4_4_ == 0) {
      uVar7 = *(undefined4 *)(iRam0243e858 + 0x243e76c);
      goto LAB_0243e768;
    }
    iVar17 = *(int *)pcVar16;
    if ((*(ushort *)(iVar17 + 0xbd) & 1) == 0) {
      iVar17 = func_0x016cc8b0(iVar17);
    }
    iVar10 = *(int *)pcVar18;
    uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        if (piVar25[-1] == iVar17) {
          puVar6 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e48c;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(pcVar18,iVar17,0);
LAB_0243e48c:
    pcVar16 = (code *)(*(code *)*puVar6)(pcVar18,puVar6[1]);
    iVar17 = 0;
    do {
      if (pcVar16 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)pcVar16;
      uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
      pcVar19 = pcVar18;
      if (uVar11 != 0) {
        piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
        do {
          pcVar19 = (code *)piVar25[-1];
          if (pcVar19 == (code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0)) {
            puVar6 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
            goto LAB_0243e508;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)
               func_0x016cc99c(pcVar16,(code *)**(undefined4 **)(iRam0243e85c + 0x243e4c0),0);
LAB_0243e508:
      iVar10 = (*(code *)*puVar6)(pcVar16,puVar6[1]);
      if (iVar10 == 0) {
        uVar13 = 0xb;
        piVar4 = piStack_8c;
        goto LAB_0243e668;
      }
      if (pcVar16 == (code *)0x0) {
        func_0x0165b6e0();
      }
      iVar10 = *(int *)(*(int *)(uVar13 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = func_0x016cc8b0(iVar10);
      }
      iVar5 = *(int *)pcVar16;
      uVar11 = (uint)*(ushort *)(iVar5 + 0xb6);
      if (uVar11 != 0) {
        piVar25 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar25[-1] == iVar10) {
            iVar10 = iVar5 + *piVar25 * 8 + 0xc0;
            goto LAB_0243e598;
          }
          uVar11 = uVar11 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar11 != 0);
      }
      iVar10 = func_0x016cc99c(pcVar16,iVar10,0);
LAB_0243e598:
      iVar10 = *(int *)(iVar10 + 4);
      uVar7 = *(undefined4 *)(iVar10 + 4);
      pcVar18 = *(code **)(iVar10 + 8);
      piStack_7c = piVar15;
      piVar14[-2] = (int)piVar15;
      (*pcVar18)(uVar7,iVar10,pcVar16,&piStack_7c);
      pcVar18 = pcStack_80;
      func_0x016fea14(iVar3,piVar15,pcStack_80);
      func_0x016fea14(piVar4,iVar3,pcVar18);
      puVar6 = *(undefined4 **)(*(int *)(uVar13 + 0x1c) + 0x18);
      piStack_7c = piVar4;
      if (-1 < *(int *)(*(int *)(*(int *)(uVar13 + 0x1c) + 0x14) + 0x14)) {
        piStack_7c = (int *)*piVar4;
      }
      uVar7 = *puVar6;
      pcVar18 = (code *)puVar6[2];
      piVar14[-2] = (int)&cStack_75;
      (*pcVar18)(uVar7,puVar6,uStack_88._4_4_,&piStack_7c);
      pcVar19 = pcStack_80;
    } while (cStack_75 == '\0');
    func_0x016fea14(piVar15,iVar3,pcStack_80);
    piVar4 = piStack_8c;
    func_0x016fea14(piStack_8c,piVar15,pcVar19);
    uVar13 = 10;
LAB_0243e668:
    do {
      if (pcVar16 != (code *)0x0) {
        iVar10 = *(int *)pcVar16;
        uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
        if (uVar11 != 0) {
          piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
          do {
            pcVar19 = (code *)piVar25[-1];
            if (pcVar19 == (code *)**(undefined4 **)(iRam0243e860 + 0x243e680)) {
              puVar6 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
              goto LAB_0243e6c8;
            }
            uVar11 = uVar11 - 1;
            piVar25 = piVar25 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)
                 func_0x016cc99c(pcVar16,(code *)**(undefined4 **)(iRam0243e860 + 0x243e680),0);
LAB_0243e6c8:
        (*(code *)*puVar6)(pcVar16,puVar6[1]);
      }
      if (iVar17 != 0) {
        func_0x0165b6dc(iVar17);
      }
      piVar25 = piStack_94;
      if (uVar13 == 0xb) {
LAB_0243e700:
        func_0x016fea2c(piStack_94,pcStack_80);
        piVar4 = piVar25;
LAB_0243e710:
        pcVar16 = pcStack_80;
        func_0x016fea14(piVar15,piVar4,pcStack_80);
        func_0x016fea14(uStack_90,piVar15,pcVar16);
      }
      else {
        if (uVar13 == 10) goto LAB_0243e710;
        if (uVar13 == 0) goto LAB_0243e700;
      }
      if ((int *)**(int **)(iRam0243e864 + 0x243e740) == piStack_74) {
        return (int *)**(int **)(iRam0243e864 + 0x243e740);
      }
      func_0x017015a8();
LAB_0243e754:
      uVar7 = *(undefined4 *)(iRam0243e854 + 0x243e760);
LAB_0243e768:
      uVar7 = func_0x0165b434(uVar7);
      uVar7 = func_0x026fd688(uVar7,0);
      func_0x0165b590(uVar7,uVar13);
      uVar27 = func_0x0165b3c4();
      iVar17 = (int)uVar27;
      if ((int)((ulonglong)uVar27 >> 0x20) != 1) goto LAB_0243e7bc;
      piVar4 = (int *)func_0x017010e8(iVar17);
      iVar17 = *piVar4;
      uVar13 = 0;
      func_0x0171ece4();
      piVar4 = piStack_8c;
    } while( true );
  }
  piVar4 = (int *)func_0x017010e8(uVar11);
  iVar17 = *piVar4;
  iVar3 = 0;
  piVar4 = (int *)func_0x0171ece4();
  piVar14 = piVar15;
LAB_0243e168:
  iVar5 = 0;
  iVar10 = 0;
LAB_0243e170:
  if (piVar14 != (int *)0x0) {
    iVar8 = *piVar14;
    uVar11 = (uint)*(ushort *)(iVar8 + 0xb6);
    if (uVar11 != 0) {
      piVar4 = (int *)(*(int *)(iVar8 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(iRam0243e33c + 0x243e188)) {
          puVar6 = (undefined4 *)(iVar8 + *piVar4 * 8 + 0xc0);
          goto LAB_0243e1d0;
        }
        uVar11 = uVar11 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(piVar14,**(int **)(iRam0243e33c + 0x243e188),0);
LAB_0243e1d0:
    piVar4 = (int *)(*(code *)*puVar6)(piVar14,puVar6[1]);
  }
  if (iVar17 != 0) {
    piVar4 = (int *)func_0x0165b6dc(iVar17);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      *piStack_48 = iVar10;
      piStack_48[1] = iVar5;
      return piStack_48;
    }
    if (iVar3 != 0) {
      return piVar4;
    }
  }
  *piStack_48 = 0;
  piStack_48[1] = 0;
  return (int *)0x0;
LAB_0243e7bc:
  if (pcVar16 != (code *)0x0) {
    iVar10 = *(int *)pcVar16;
    uVar11 = (uint)*(ushort *)(iVar10 + 0xb6);
    if (uVar11 != 0) {
      piVar25 = (int *)(*(int *)(iVar10 + 0x58) + 4);
      do {
        piVar15 = (int *)piVar25[-1];
        if (piVar15 == (int *)**(uint **)(iRam0243e868 + 0x243e7d4)) {
          puVar6 = (undefined4 *)(iVar10 + *piVar25 * 8 + 0xc0);
          goto LAB_0243e81c;
        }
        uVar11 = uVar11 - 1;
        piVar25 = piVar25 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(pcVar16,(int *)**(uint **)(iRam0243e868 + 0x243e7d4),0);
LAB_0243e81c:
    (*(code *)*puVar6)(pcVar16,puVar6[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar17);
  uVar27 = func_0x01178c80();
  piVar25 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar23 = (uint)uVar27;
  uVar11 = extraout_r3_01;
  uVar12 = extraout_r2_01;
  if ((bool)uVar26) {
    uVar12 = (uint)piVar15 | 0xdc00;
    uVar11 = (uint)piVar15 | 0x3c0;
    piVar25 = (int *)((uint)pcVar19 | 0x70000);
    piVar4 = (int *)((uint)pcVar16 | 0x24000000);
  }
  piVar14[-1] = 0x243e848;
  piVar14[-2] = (int)&stack0xffffffb0;
  piVar14[-3] = iVar3;
  piVar14[-4] = (int)piVar4;
  piVar14[-5] = 0;
  piVar14[-6] = iVar17;
  piVar14[-7] = (int)piVar15;
  piVar14[-8] = (int)pcVar19;
  piVar14[-9] = (int)pcVar16;
  iVar10 = *(int *)(uVar11 + 0x1c);
  piVar14[-0x16] = uVar12;
  if (iVar10 == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243edc8 + 0x243e89c));
    func_0x0165b424(*(undefined4 *)(iRam0243edcc + 0x243e8a8));
    if (*(int *)(uVar11 + 0x1c) == 0) {
      func_0x016cc90c(uVar11);
    }
  }
  if (piVar25 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243edd0 + 0x243ec88);
  }
  else {
    if (piVar14[-0x16] != 0) {
      iVar3 = **(int **)(uVar11 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar17 = *piVar25;
      piVar14[-0x1f] = uVar23;
      piVar14[-0x18] = uVar11;
      uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(int *)(iVar17 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar3) {
            puVar6 = (undefined4 *)(iVar17 + *piVar4 * 8 + 0xc0);
            goto LAB_0243e944;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar25,iVar3,0);
LAB_0243e944:
      piVar4 = (int *)(*(code *)*puVar6)(piVar25,puVar6[1]);
      piVar14[-0x17] = (int)piVar4;
      do {
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        iVar17 = piVar14[-0x18];
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar15[-1] == **(int **)(iRam0243edd8 + 0x243e978)) {
              puVar6 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0xc0);
              goto LAB_0243e9c4;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(iRam0243edd8 + 0x243e978),0);
LAB_0243e9c4:
        iVar3 = (*(code *)*puVar6)(piVar4,puVar6[1]);
        if (iVar3 == 0) {
          iVar3 = 0;
          piVar14[-0x19] = 0;
          piVar14[-0x1a] = 0;
          piVar14[-0x1b] = 0;
          piVar14[-0x15] = 0;
          piVar14[-0x1c] = 0;
          iVar8 = 0xb;
          iVar17 = 0;
          iVar10 = 0;
          iVar24 = 0;
          iVar20 = 0;
          iVar5 = 0;
          piVar14[-0x1d] = 0;
          goto LAB_0243eb70;
        }
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(iVar17 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar17 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar17 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar3) {
              puVar6 = (undefined4 *)(iVar17 + *piVar15 * 8 + 0xc0);
              goto LAB_0243ea54;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,iVar3,0);
LAB_0243ea54:
        (*(code *)*puVar6)(piVar14 + -0x14,piVar4,puVar6[1]);
        iVar3 = piVar14[-0x16];
        iVar24 = piVar14[-0xc];
        iVar10 = piVar14[-0xb];
        iVar8 = *(int *)(iVar3 + 0x14);
        uVar7 = *(undefined4 *)(iVar3 + 0x20);
        iVar20 = piVar14[-0x10];
        iVar5 = piVar14[-0x12];
        iVar17 = piVar14[-10];
        piVar14[-0x15] = *(int *)(iVar3 + 0xc);
        piVar14[-0x27] = iVar20;
        piVar14[-0x26] = piVar14[-0xf];
        piVar14[-0x1e] = piVar14[-0x11];
        piVar14[-0x28] = piVar14[-0x11];
        piVar14[-0x1a] = piVar14[-0xe];
        piVar14[-0x25] = piVar14[-0xe];
        piVar14[-0x19] = piVar14[-0xd];
        piVar14[-0x24] = piVar14[-0xd];
        piVar14[-0x20] = iVar8;
        piVar14[-0x1b] = piVar14[-0xf];
        piVar14[-0x23] = iVar24;
        piVar14[-0x22] = iVar10;
        piVar14[-0x21] = iVar17;
        piVar14[-0x1d] = piVar14[-0x14];
        piVar14[-0x1c] = piVar14[-0x13];
        iVar3 = (*(code *)piVar14[-0x15])(uVar7,piVar14[-0x14],piVar14[-0x13],iVar5);
        piVar4 = (int *)piVar14[-0x17];
      } while (iVar3 == 0);
      iVar8 = 10;
      iVar3 = 0;
      piVar14[-0x15] = iVar20;
      iVar20 = piVar14[-0x1e];
      goto LAB_0243eb70;
    }
    uVar7 = *(undefined4 *)(iRam0243edd4 + 0x243ec94);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar11);
  uVar27 = func_0x0165b3c4();
  iVar10 = (int)uVar27;
  if ((int)((ulonglong)uVar27 >> 0x20) == 1) {
    piVar4 = (int *)func_0x017010e8(iVar10);
    iVar3 = *piVar4;
    func_0x0171ece4();
    piVar4 = (int *)piVar14[-0x17];
    piVar14[-0x19] = 0;
    piVar14[-0x1a] = 0;
    piVar14[-0x1b] = 0;
    piVar14[-0x15] = 0;
    piVar14[-0x1c] = 0;
    piVar14[-0x1d] = 0;
    iVar17 = 0;
    iVar10 = 0;
    iVar24 = 0;
    iVar20 = 0;
    iVar5 = 0;
    iVar8 = 0;
LAB_0243eb70:
    if (piVar4 != (int *)0x0) {
      iVar9 = *piVar4;
      uVar11 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(iRam0243eddc + 0x243eb8c)) {
            iVar21 = piVar14[-0x17];
            puVar6 = (undefined4 *)(iVar9 + *piVar4 * 8 + 0xc0);
            goto LAB_0243ebdc;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar11 != 0);
      }
      iVar21 = piVar14[-0x17];
      puVar6 = (undefined4 *)func_0x016cc99c(iVar21,**(int **)(iRam0243eddc + 0x243eb8c),0);
LAB_0243ebdc:
      (*(code *)*puVar6)(iVar21,puVar6[1]);
    }
    piVar4 = (int *)0x0;
    if (iVar3 != 0) {
      piVar4 = (int *)func_0x0165b6dc();
    }
    if (iVar8 != 0xb) {
      if (iVar8 == 10) {
        piVar4 = (int *)piVar14[-0x1f];
        *piVar4 = piVar14[-0x1d];
        iVar3 = piVar14[-0x1c];
        piVar4[8] = iVar24;
        piVar4[1] = iVar3;
        piVar4[2] = iVar5;
        piVar4[3] = iVar20;
        piVar4[4] = piVar14[-0x15];
        piVar4[5] = piVar14[-0x1b];
        piVar4[6] = piVar14[-0x1a];
        iVar3 = piVar14[-0x19];
        piVar4[9] = iVar10;
        piVar4[10] = iVar17;
        piVar4[7] = iVar3;
        return piVar4;
      }
      if (iVar8 != 0) {
        return piVar4;
      }
    }
    puVar6 = (undefined4 *)piVar14[-0x1f];
    uVar7 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uVar1 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    *puVar6 = 0;
    puVar6[1] = uVar7;
    puVar6[2] = uVar1;
    puVar6[3] = uVar2;
    puVar6[7] = 0;
    puVar6[8] = uVar7;
    puVar6[9] = uVar1;
    puVar6[10] = uVar2;
    puVar6[4] = 0;
    puVar6[5] = uVar7;
    puVar6[6] = uVar1;
    puVar6[7] = uVar2;
    return (int *)0x1c;
  }
  if (piVar14[-0x17] != 0) {
    iVar5 = *(int *)piVar14[-0x17];
    uVar12 = (uint)*(ushort *)(iVar5 + 0xb6);
    if (uVar12 != 0) {
      piVar15 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        iVar17 = piVar15[-1];
        if (iVar17 == **(int **)(iRam0243ede0 + 0x243ed54)) {
          puVar6 = (undefined4 *)(iVar5 + *piVar15 * 8 + 0xc0);
          goto LAB_0243ed9c;
        }
        uVar12 = uVar12 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(piVar14[-0x17],**(int **)(iRam0243ede0 + 0x243ed54),0);
LAB_0243ed9c:
    (*(code *)*puVar6)(piVar14[-0x17],puVar6[1]);
  }
  uVar26 = 1;
  func_0x016ff924(iVar10);
  uVar27 = func_0x01178c80();
  piVar15 = (int *)((ulonglong)uVar27 >> 0x20);
  uVar12 = extraout_r3_02;
  uVar13 = extraout_r2_02;
  if ((bool)uVar26) {
    uVar13 = uVar11 | 0x2d00000;
    uVar12 = uVar11 | 0xc8000;
    piVar4 = (int *)0x6c;
    uVar23 = 0xa40;
  }
  piVar14[-0x29] = 0x243edc8;
  piVar14[-0x2a] = (int)&stack0xffffffb0;
  piVar14[-0x2b] = iVar3;
  piVar14[-0x2c] = (int)piVar4;
  piVar14[-0x2d] = uVar23;
  piVar14[-0x2e] = iVar17;
  piVar14[-0x2f] = uVar11;
  piVar14[-0x30] = iVar10;
  piVar14[-0x31] = 0;
  if (*(int *)(uVar12 + 0x1c) == 0) {
    func_0x0165b424(*(undefined4 *)(iRam0243f1e4 + 0x243ee14));
    func_0x0165b424(*(undefined4 *)(iRam0243f1e8 + 0x243ee20));
    if (*(int *)(uVar12 + 0x1c) == 0) {
      func_0x016cc90c(uVar12);
    }
  }
  if (piVar15 == (int *)0x0) {
    uVar7 = *(undefined4 *)(iRam0243f1ec + 0x243f0f8);
  }
  else {
    if (uVar13 != 0) {
      piVar4 = *(int **)(uVar12 + 0x1c);
      piVar14[-0x35] = (int)uVar27;
      iVar3 = *piVar4;
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = func_0x016cc8b0(iVar3);
      }
      iVar17 = *piVar15;
      uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
      if (uVar11 != 0) {
        piVar4 = (int *)(*(int *)(iVar17 + 0x58) + 4);
        do {
          if (piVar4[-1] == iVar3) {
            puVar6 = (undefined4 *)(iVar17 + *piVar4 * 8 + 0xc0);
            goto LAB_0243eeb4;
          }
          uVar11 = uVar11 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar15,iVar3,0);
LAB_0243eeb4:
      piVar4 = (int *)(*(code *)*puVar6)(piVar15,puVar6[1]);
      piVar25 = *(int **)(iRam0243f1f4 + 0x243eed4);
      do {
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar15[-1] == *piVar25) {
              puVar6 = (undefined4 *)(iVar3 + *piVar15 * 8 + 0xc0);
              goto LAB_0243ef2c;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,*piVar25,0);
LAB_0243ef2c:
        iVar3 = (*(code *)*puVar6)(piVar4,puVar6[1]);
        if (iVar3 == 0) {
          iVar17 = 0;
          iVar3 = 0xb;
          piVar15 = (int *)0x0;
          goto LAB_0243f018;
        }
        if (piVar4 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x016cc8b0(iVar3);
        }
        iVar17 = *piVar4;
        uVar11 = (uint)*(ushort *)(iVar17 + 0xb6);
        if (uVar11 != 0) {
          piVar15 = (int *)(*(int *)(iVar17 + 0x58) + 4);
          do {
            if (piVar15[-1] == iVar3) {
              puVar6 = (undefined4 *)(iVar17 + *piVar15 * 8 + 0xc0);
              goto LAB_0243efbc;
            }
            uVar11 = uVar11 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined4 *)func_0x016cc99c(piVar4,iVar3,0);
LAB_0243efbc:
        (*(code *)*puVar6)(piVar14 + -0x34,piVar4,puVar6[1]);
        iVar8 = piVar14[-0x34];
        iVar5 = piVar14[-0x33];
        iVar10 = piVar14[-0x32];
        uVar7 = *(undefined4 *)(uVar13 + 0x20);
        pcVar16 = *(code **)(uVar13 + 0xc);
        piVar14[-0x36] = *(undefined4 *)(uVar13 + 0x14);
        piVar15 = (int *)(*pcVar16)(uVar7,iVar8,iVar5,iVar10);
      } while (piVar15 == (int *)0x0);
      iVar3 = 10;
      iVar17 = 0;
      goto LAB_0243f024;
    }
    uVar7 = *(undefined4 *)(iRam0243f1f0 + 0x243f104);
  }
  uVar7 = func_0x0165b434(uVar7);
  uVar7 = func_0x026fd688(uVar7,0);
  func_0x0165b590(uVar7,uVar12);
  uVar28 = func_0x0165b3c4();
  uVar11 = (uint)uVar28;
  if ((int)((ulonglong)uVar28 >> 0x20) != 1) {
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      uVar12 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar12 != 0) {
        piVar25 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          iVar17 = piVar25[-1];
          if (iVar17 == **(int **)(iRam0243f1fc + 0x243f170)) {
            puVar6 = (undefined4 *)(iVar3 + *piVar25 * 8 + 0xc0);
            goto LAB_0243f1b8;
          }
          uVar12 = uVar12 - 1;
          piVar25 = piVar25 + 2;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(iRam0243f1fc + 0x243f170),0);
LAB_0243f1b8:
      (*(code *)*puVar6)(piVar4,puVar6[1]);
    }
    uVar26 = 1;
    func_0x016ff924(uVar11);
    uVar28 = func_0x01178c80();
    uVar12 = extraout_r2_03;
    if ((bool)uVar26) {
      uVar12 = uVar11 | 0x10000001;
      uVar23 = (uint)piVar15 | 0x88000;
    }
    piVar14[-0x37] = 0x243f1e4;
    piVar14[-0x38] = uVar23;
    piVar14[-0x39] = iVar17;
    piVar14[-0x3a] = uVar11;
    piVar14[-0x3b] = (int)uVar27;
    piVar14[-0x3c] = (int)piVar15;
    iVar3 = *(int *)(uVar12 + 0x1c);
    if (iVar3 == 0) {
      func_0x016cc90c(uVar12);
      iVar3 = *(int *)(uVar12 + 0x1c);
    }
    uVar7 = func_0x02852564(*(undefined4 *)(iVar3 + 8));
    if ((*(ushort *)(*(int *)(*(int *)(uVar12 + 0x1c) + 0x14) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    piVar4 = (int *)func_0x0165b6d4();
    iVar3 = *(int *)(*(int *)(uVar12 + 0x1c) + 0x18);
    piVar14[-0x3e] = 0;
    piVar14[-0x3d] = iVar3;
    func_0x02804be0(piVar4,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20),uVar7);
    return piVar4;
  }
  piVar15 = (int *)func_0x017010e8(uVar11);
  iVar17 = *piVar15;
  iVar3 = 0;
  piVar15 = (int *)func_0x0171ece4();
LAB_0243f018:
  iVar10 = 0;
  iVar5 = 0;
  iVar8 = 0;
LAB_0243f024:
  if (piVar4 != (int *)0x0) {
    iVar24 = *piVar4;
    uVar11 = (uint)*(ushort *)(iVar24 + 0xb6);
    if (uVar11 != 0) {
      piVar15 = (int *)(*(int *)(iVar24 + 0x58) + 4);
      do {
        if (piVar15[-1] == **(int **)(iRam0243f1f8 + 0x243f03c)) {
          puVar6 = (undefined4 *)(iVar24 + *piVar15 * 8 + 0xc0);
          goto LAB_0243f084;
        }
        uVar11 = uVar11 - 1;
        piVar15 = piVar15 + 2;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined4 *)func_0x016cc99c(piVar4,**(int **)(iRam0243f1f8 + 0x243f03c),0);
LAB_0243f084:
    piVar15 = (int *)(*(code *)*puVar6)(piVar4,puVar6[1]);
  }
  if (iVar17 != 0) {
    piVar15 = (int *)func_0x0165b6dc(iVar17);
  }
  if (iVar3 != 0xb) {
    if (iVar3 == 10) {
      piVar4 = (int *)piVar14[-0x35];
      *piVar4 = iVar8;
      piVar4[1] = iVar5;
      piVar4[2] = iVar10;
      return piVar4;
    }
    if (iVar3 != 0) {
      return piVar15;
    }
  }
  puVar6 = (undefined4 *)piVar14[-0x35];
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  return (int *)0x0;
}


/* ItemChainManager.ReplaceOldSetIDs VA=0x19071BC | public void ReplaceOldSetIDs(List<ItemLinkModel> previousLinks, List<ItemLinkModel> newLinks) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_ReplaceOldSetIDs_19071BC(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_019181a0 + 0x19171dc);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019181a4 + 0x19171f0));
    func_0x0165b424(*(undefined4 *)(_UNK_019181f0 + 0x19171fc));
    func_0x0165b424(*(undefined4 *)(_UNK_019181fc + 0x1917208));
    func_0x0165b424(*(undefined4 *)(_UNK_01918200 + 0x1917214));
    func_0x0165b424(*(undefined4 *)(_UNK_01918204 + 0x1917220));
    func_0x0165b424(*(undefined4 *)(_UNK_01918208 + 0x191722c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191820c + 0x1917238));
    func_0x0165b424(*(undefined4 *)(_UNK_0191823c + 0x1917244));
    func_0x0165b424(*(undefined4 *)(_UNK_01918248 + 0x1917250));
    func_0x0165b424(*(undefined4 *)(_UNK_01918254 + 0x191725c));
    func_0x0165b424(*(undefined4 *)(_UNK_01918258 + 0x1917268));
    func_0x0165b424(*(undefined4 *)(_UNK_0191825c + 0x1917274));
    func_0x0165b424(*(undefined4 *)(_UNK_01918260 + 0x1917280));
    func_0x0165b424(*(undefined4 *)(_UNK_01918264 + 0x191728c));
    func_0x0165b424(*(undefined4 *)(_UNK_01918268 + 0x1917298));
    func_0x0165b424(*(undefined4 *)(_UNK_0191826c + 0x19172a4));
    func_0x0165b424(*(undefined4 *)(_UNK_01918270 + 0x19172b0));
    func_0x0165b424(*(undefined4 *)(_UNK_01918274 + 0x19172bc));
    func_0x0165b424(*(undefined4 *)(_UNK_019182bc + 0x19172c8));
    func_0x0165b424(*(undefined4 *)(_UNK_019182c8 + 0x19172d4));
    func_0x0165b424(*(undefined4 *)(_UNK_019182cc + 0x19172e0));
    func_0x0165b424(*(undefined4 *)(_UNK_019182d0 + 0x19172ec));
    func_0x0165b424(*(undefined4 *)(_UNK_019182d4 + 0x19172f8));
    func_0x0165b424(*(undefined4 *)(_UNK_019182d8 + 0x1917304));
    func_0x0165b424(*(undefined4 *)(_UNK_01918308 + 0x1917310));
    func_0x0165b424(*(undefined4 *)(_UNK_01918310 + 0x191731c));
    func_0x0165b424(*(undefined4 *)(_UNK_01918314 + 0x1917328));
    func_0x0165b424(*(undefined4 *)(_UNK_01918318 + 0x1917334));
    func_0x0165b424(*(undefined4 *)(_UNK_0191831c + 0x1917340));
    func_0x0165b424(*(undefined4 *)(_UNK_01918320 + 0x191734c));
    func_0x0165b424(*(undefined4 *)(_UNK_01918324 + 0x1917358));
    func_0x0165b424(*(undefined4 *)(_UNK_01918328 + 0x1917364));
    func_0x0165b424(*(undefined4 *)(_UNK_0191832c + 0x1917370));
    func_0x0165b424(*(undefined4 *)(_UNK_01918330 + 0x191737c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191837c + 0x1917388));
    func_0x0165b424(*(undefined4 *)(_UNK_01918388 + 0x1917394));
    func_0x0165b424(*(undefined4 *)(_UNK_0191838c + 0x19173a0));
    func_0x0165b424(*(undefined4 *)(_UNK_01918390 + 0x19173ac));
    func_0x0165b424(*(undefined4 *)(_UNK_01918394 + 0x19173b8));
    func_0x0165b424(*(undefined4 *)(_UNK_01918398 + 0x19173c4));
    func_0x0165b424(*(undefined4 *)(_UNK_019183c8 + 0x19173d0));
    func_0x0165b424(*(undefined4 *)(_UNK_019183d4 + 0x19173dc));
    func_0x0165b424(*(undefined4 *)(_UNK_019183d8 + 0x19173e8));
    func_0x0165b424(*(undefined4 *)(_UNK_019183dc + 0x19173f4));
    *pcVar8 = '\x01';
  }
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_7c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_38 = 0;
  uStack_88 = 0;
  uStack_74 = uStack_84;
  uStack_70 = uStack_80;
  iStack_6c = iStack_7c;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  iStack_5c = iStack_7c;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  iStack_4c = iStack_7c;
  uStack_44 = uStack_84;
  uStack_40 = uStack_80;
  iStack_3c = iStack_7c;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  iStack_2c = iStack_7c;
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_019183e0 + 0x1917414));
  func_0x026f769c(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  piVar3 = (int *)(iVar2 + 8);
  *piVar3 = param_2;
  func_0x0165b3c0(piVar3,param_2);
  if (param_3 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,param_3,**(undefined4 **)(_UNK_01918460 + 0x191748c));
  uStack_38 = uStack_98;
  uStack_34 = uStack_94;
  uStack_30 = uStack_90;
  iStack_2c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_01918464 + 0x19174a8);
  while (iVar4 = func_0x01710964(&uStack_38,*puVar12), iVar5 = iStack_2c, iVar4 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(param_1 + 0x24);
    uVar11 = *(undefined4 *)(iVar5 + 8);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *(int *)(iVar4 + 0x10);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    ItemChainManager_UpdateActiveLinkIfNecessary_1905F48
              (param_1,iVar5,uVar11,*(undefined4 *)(iVar4 + 0x1c));
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_019184ec + 0x1917514));
  piVar9 = *(int **)(_UNK_019184f4 + 0x1917528);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar8 = (char *)(_UNK_019184f8 + 0x1917544);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019184fc + 0x1917558));
    *pcVar8 = '\x01';
  }
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar5 = *piVar9;
  }
  iVar5 = **(int **)(iVar5 + 0x5c);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = func_0x01a8ad40(iVar5,0);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(param_1 + 0x24);
  iVar13 = *(int *)(iVar5 + 0x88);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,iVar4,**(undefined4 **)(_UNK_01918500 + 0x19175e4));
  iVar4 = 0;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  uStack_40 = uStack_90;
  iStack_3c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_01918504 + 0x191760c);
  bVar1 = false;
  while (iVar6 = func_0x01710964(&uStack_48,*puVar12), iVar6 != 0) {
    iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_01918510 + 0x191762c));
    func_0x026f769c(iVar7,0);
    iVar6 = iStack_3c;
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    piVar9 = (int *)(iVar7 + 8);
    *piVar9 = iVar6;
    func_0x0165b3c0(piVar9,iVar6);
    iVar6 = *piVar9;
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar6 + 0x14) != 0) {
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *piVar3;
      uVar11 = func_0x0165b6d4(**(undefined4 **)(_UNK_01918514 + 0x191769c));
      func_0x02e51fac(uVar11,iVar7,**(undefined4 **)(_UNK_01918518 + 0x19176b0),0);
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = func_0x02b0b99c(iVar6,uVar11,**(undefined4 **)(_UNK_0191851c + 0x19176d8));
      if (iVar6 != 0) {
        iVar7 = *piVar9;
        iVar6 = *(int *)(iVar6 + 0xc);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = *(int *)(iVar7 + 0x14);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = *(int *)(iVar7 + 0x14);
        if (0x182b6 < iVar7 - 0x3e9U) {
          if (iVar7 < 1000000) {
            iVar7 = iVar7 % 1000;
          }
          else {
            iVar7 = (iVar7 + -1000000) % 1000;
          }
        }
        iVar10 = *piVar9;
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        iVar10 = *(int *)(iVar10 + 0x14);
        if (iVar10 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = iVar6 * 1000 + iVar7 + 1000000;
        *(int *)(iVar10 + 0x14) = iVar6;
        if (iVar13 == 0) {
          func_0x0165b6e0();
        }
        iVar7 = func_0x02b0af9c(iVar13,iVar4,**(undefined4 **)(_UNK_01918520 + 0x19177d8));
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        uVar11 = *(undefined4 *)(iVar7 + 0x14);
        if (*(int *)(**(int **)(_UNK_01918524 + 0x1917800) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar7 = func_0x026f7720(uVar11,0,0);
        bVar1 = true;
        if (iVar7 != 0) {
          if (iVar13 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = func_0x02b0af9c(iVar13,iVar4,**(undefined4 **)(_UNK_01918528 + 0x191784c));
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = *(int *)(iVar7 + 0x14);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = *(int *)(iVar7 + 0x68);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          iVar7 = *(int *)(iVar7 + 0x44);
          if (iVar7 == 0) {
            func_0x0165b6e0();
          }
          *(int *)(iVar7 + 0x14) = iVar6;
        }
      }
    }
    iVar4 = iVar4 + 1;
  }
  func_0x0172cd54(&uStack_48,**(undefined4 **)(_UNK_01918508 + 0x19178b0));
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x18);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,iVar4,**(undefined4 **)(_UNK_01918530 + 0x1917900));
  uStack_58 = uStack_98;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  iStack_4c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_01918534 + 0x1917920);
  puVar14 = *(undefined4 **)(_UNK_01918538 + 0x1917928);
  puVar15 = *(undefined4 **)(_UNK_0191853c + 0x1917930);
  while (iVar4 = func_0x01710964(&uStack_58,*puVar12), iVar4 != 0) {
    iVar13 = func_0x0165b6d4(*puVar14);
    func_0x026f769c(iVar13,0);
    iVar4 = iStack_4c;
    if (iVar13 == 0) {
      func_0x0165b6e0();
    }
    piVar9 = (int *)(iVar13 + 8);
    *piVar9 = iVar4;
    func_0x0165b3c0(piVar9,iVar4);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *piVar3;
    uVar11 = func_0x0165b6d4(**(undefined4 **)(_UNK_01918544 + 0x1917998));
    func_0x02e51fac(uVar11,iVar13,*puVar15,0);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = func_0x02b0b99c(iVar4,uVar11,**(undefined4 **)(_UNK_01918548 + 0x19179c8));
    if (iVar4 != 0) {
      iVar13 = *piVar9;
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar13 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *(int *)(iVar13 + 0x14);
      if (0x182b6 < iVar6 - 0x3e9U) {
        if (999999 < iVar6) {
          iVar6 = iVar6 + -1000000;
        }
        iVar6 = iVar6 % 1000;
      }
      *(int *)(iVar13 + 0x14) = iVar4 * 1000 + iVar6 + 1000000;
      bVar1 = true;
    }
  }
  func_0x0172cd54(&uStack_58,**(undefined4 **)(_UNK_0191854c + 0x1917a78));
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x10);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x20);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,iVar4,**(undefined4 **)(_UNK_01918554 + 0x1917ac8));
  uStack_68 = uStack_98;
  uStack_64 = uStack_94;
  uStack_60 = uStack_90;
  iStack_5c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_01918558 + 0x1917ae8);
  puVar14 = *(undefined4 **)(_UNK_0191855c + 0x1917af0);
  puVar15 = *(undefined4 **)(_UNK_01918560 + 0x1917af8);
  while (iVar4 = func_0x01710964(&uStack_68,*puVar12), iVar4 != 0) {
    iVar13 = func_0x0165b6d4(*puVar14);
    func_0x026f769c(iVar13,0);
    iVar4 = iStack_5c;
    if (iVar13 == 0) {
      func_0x0165b6e0();
    }
    piVar9 = (int *)(iVar13 + 8);
    *piVar9 = iVar4;
    func_0x0165b3c0(piVar9,iVar4);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = *piVar3;
    uVar11 = func_0x0165b6d4(**(undefined4 **)(_UNK_01918568 + 0x1917b60));
    func_0x02e51fac(uVar11,iVar13,*puVar15,0);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar4 = func_0x02b0b99c(iVar4,uVar11,**(undefined4 **)(_UNK_0191856c + 0x1917b90));
    if (iVar4 != 0) {
      iVar13 = *piVar9;
      iVar4 = *(int *)(iVar4 + 0xc);
      if (iVar13 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *(int *)(iVar13 + 0xc);
      if (0x182b6 < iVar6 - 0x3e9U) {
        if (999999 < iVar6) {
          iVar6 = iVar6 + -1000000;
        }
        iVar6 = iVar6 % 1000;
      }
      *(int *)(iVar13 + 0xc) = iVar4 * 1000 + iVar6 + 1000000;
      bVar1 = true;
    }
  }
  func_0x0172cd54(&uStack_68,**(undefined4 **)(_UNK_01918570 + 0x1917c40));
  iVar4 = *(int *)(param_1 + 0x24);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 0x1c);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,iVar4,**(undefined4 **)(_UNK_01918578 + 0x1917c90));
  piVar9 = (int *)(iVar2 + 0x10);
  piVar3 = (int *)(iVar2 + 0xc);
  uStack_78 = uStack_98;
  uStack_74 = uStack_94;
  uStack_70 = uStack_90;
  iStack_6c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_0191857c + 0x1917cb8);
  puVar14 = *(undefined4 **)(_UNK_01918580 + 0x1917cc0);
  while (iVar13 = func_0x01710964(&uStack_78,*puVar12), iVar4 = iStack_6c, iVar13 != 0) {
    if (iStack_6c == 0) {
      func_0x0165b6e0();
    }
    iVar13 = *(int *)(iVar4 + 0x18);
    if (iVar13 == 3) {
      iVar13 = *(int *)(iVar4 + 0x14);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *piVar3;
      if (iVar6 == 0) {
        iVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191858c + 0x1917d14));
        func_0x02e51fac(iVar6,iVar2,**(undefined4 **)(_UNK_01918590 + 0x1917d28),0);
        *piVar3 = iVar6;
        func_0x0165b3c0(piVar3,iVar6);
      }
      if (iVar13 == 0) {
        func_0x0165b6e0();
      }
      iVar13 = func_0x02b0b954(iVar13,iVar6,*puVar14);
      if (iVar13 != 0) {
        *(undefined1 *)(iVar4 + 0x24) = 1;
      }
      iVar13 = *(int *)(iVar4 + 0x18);
    }
    if ((iVar13 == 4) && (iVar13 = *(int *)(iVar4 + 0x70), 0 < iVar13)) {
      iVar6 = *(int *)(param_1 + 0x24);
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = *(int *)(iVar6 + 0x10);
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      if (iVar13 < *(int *)(iVar6 + 0x1c)) {
        iVar13 = *(int *)(iVar4 + 0x14);
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        iVar6 = *piVar9;
        if (iVar6 == 0) {
          iVar6 = func_0x0165b6d4(**(undefined4 **)(_UNK_01918594 + 0x1917de0));
          func_0x02e51fac(iVar6,iVar2,**(undefined4 **)(_UNK_01918598 + 0x1917df4),0);
          *piVar9 = iVar6;
          func_0x0165b3c0(piVar9,iVar6);
        }
        if (iVar13 == 0) {
          func_0x0165b6e0();
        }
        iVar13 = func_0x02b0b954(iVar13,iVar6,*puVar14);
        if (iVar13 != 0) {
          *(undefined1 *)(iVar4 + 0x24) = 1;
        }
      }
    }
    if ((*(char *)(iVar4 + 0x25) != '\0') && (*(char *)(iVar4 + 0x24) == '\0')) {
      *(undefined1 *)(iVar4 + 0x24) = 1;
    }
  }
  func_0x0172cd54(&uStack_78,**(undefined4 **)(_UNK_01918584 + 0x1917e68));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x018ee40c(iVar5,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x0195d52c(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_98,iVar2,**(undefined4 **)(_UNK_019185a0 + 0x1917ed0));
  uStack_88 = uStack_98;
  uStack_84 = uStack_94;
  uStack_80 = uStack_90;
  iStack_7c = iStack_8c;
  puVar12 = *(undefined4 **)(_UNK_019185a4 + 0x1917eec);
  while (iVar5 = func_0x01710964(&uStack_88,*puVar12), iVar2 = iStack_7c, iVar5 != 0) {
    if (iStack_7c == 0) {
      func_0x0165b6e0();
    }
    func_0x0197ae60(iVar2,1,1,0);
  }
  func_0x0172cd54(&uStack_88,**(undefined4 **)(_UNK_019185ac + 0x1917f30));
  pcVar8 = (char *)(_UNK_019185b4 + 0x1917f4c);
  if (bVar1) {
    func_0x01c5865c(0,0);
  }
  piVar3 = *(int **)(_UNK_019185bc + 0x1917f78);
  if (*(int *)(**(int **)(_UNK_019185b8 + 0x1917f64) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f9a3c(0,**(undefined4 **)(_UNK_019185c0 + 0x1917f88));
  if (*(int *)(**(int **)(_UNK_019185c4 + 0x1917f9c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x026f9a40(0,**(undefined4 **)(_UNK_019185c8 + 0x1917fb8));
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019185cc + 0x1917fec));
    *pcVar8 = '\x01';
  }
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar2 = *piVar3;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x194);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x0188dd58(iVar2,0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x01cebf9c(iVar2,0);
  return;
}


/* ItemChainManager.GetDefaultSetIDFromArchivedID VA=0x1908650 | public static int GetDefaultSetIDFromArchivedID(int archivedID) { } */

int ItemChainManager_GetDefaultSetIDFromArchivedID_1908650(int param_1)

{
  if (0x182b6 < param_1 - 0x3e9U) {
    if (999999 < param_1) {
      param_1 = param_1 + -1000000;
    }
    return param_1 % 1000;
  }
  return param_1;
}


/* ItemChainManager.GetSetIDFromArchivedID VA=0x190869C | public static int GetSetIDFromArchivedID(int archivedID) { } */

uint ItemChainManager_GetSetIDFromArchivedID_190869C(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_1 < 1000000) {
    return param_1;
  }
  if ((int)param_1 < 0xf4628) {
    uVar1 = param_1 - 1000000;
    iVar2 = 0;
  }
  else {
    uVar1 = (param_1 - 0xf4628) % 1000;
    iVar2 = (param_1 - 0xf4628) / 1000 + 1;
  }
  if (iVar2 != 0) {
    uVar1 = uVar1 + 100000;
  }
  if (iVar2 != 0) {
    uVar1 = (iVar2 * 1000 + uVar1) - 1000;
  }
  return uVar1;
}


/* ItemChainManager.GetArchivedSetIDFromSetID VA=0x1908710 | public int GetArchivedSetIDFromSetID(int setID, bool checkIfArchived) { } */

int ItemChainManager_GetArchivedSetIDFromSetID_1908710(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_3 == 0) || (iVar1 = func_0x019187d0(param_2), iVar1 != 0)) &&
     (iVar1 = ItemChainManager_GetItemLinkWithItemSet_1907084(param_1,param_2), iVar1 != 0)) {
    if (0x182b6 < param_2 - 0x3e9U) {
      if (param_2 < 1000000) {
        param_2 = param_2 % 1000;
      }
      else {
        param_2 = (param_2 + -1000000) % 1000;
      }
    }
    param_2 = *(int *)(iVar1 + 0xc) * 1000 + param_2 + 1000000;
  }
  return param_2;
}


/* ItemChainManager.GetCurrentIDFromSetID VA=0x1908918 | public int GetCurrentIDFromSetID(int setID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetCurrentIDFromSetID_1908918(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  
  pcVar7 = (char *)(_UNK_01918c14 + 0x1918930);
  if (*pcVar7 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01918c18 + 0x1918944));
    func_0x0165b424(*(undefined4 *)(_UNK_01918c1c + 0x1918950));
    func_0x0165b424(*(undefined4 *)(_UNK_01918c20 + 0x191895c));
    func_0x0165b424(*(undefined4 *)(_UNK_01918c24 + 0x1918968));
    *pcVar7 = '\x01';
  }
  iVar1 = ItemChainManager_GetItemLinkWithItemSet_1907084(param_1,param_2);
  if (iVar1 != 0) {
    iVar2 = ItemChainManager_GetItemChain_1906B1C(param_1,*(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    piVar8 = *(int **)(iVar2 + 0xc);
    if (piVar8 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar3 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01918c28 + 0x19189c4)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
          goto LAB_01918a0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)func_0x016cc99c(piVar8,**(int **)(_UNK_01918c28 + 0x19189c4),0);
LAB_01918a0c:
    iVar3 = (*(code *)*puVar4)(piVar8,puVar4[1]);
    if (*(int *)(iVar1 + 0xc) < iVar3) {
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = func_0x024325f4(*(undefined4 *)(iVar2 + 0xc),
                              **(undefined4 **)(_UNK_01918c2c + 0x1918a40));
      if (*(int *)(iVar1 + 0xc) + 1 < iVar3) {
        piVar8 = *(int **)(_UNK_01918c30 + 0x1918a64);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x0165b5a4();
        }
        pcVar7 = (char *)(_UNK_01918c34 + 0x1918a80);
        if (*pcVar7 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_01918c38 + 0x1918a94));
          *pcVar7 = '\x01';
        }
        iVar3 = *piVar8;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x0165b5a4();
          iVar3 = *piVar8;
        }
        iVar3 = **(int **)(iVar3 + 0x5c);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(iVar3 + 0x9c);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = *(int *)(iVar3 + 0x10);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        piVar8 = *(int **)(iVar2 + 0xc);
        iVar9 = *(int *)(iVar1 + 0xc);
        iVar2 = *(int *)(iVar3 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = *piVar8;
        uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_01918c3c + 0x1918b14)) {
              puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xc0);
              goto LAB_01918b5c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x016cc99c(piVar8,**(int **)(_UNK_01918c3c + 0x1918b14),0);
LAB_01918b5c:
        iVar3 = (*(code *)*puVar4)(piVar8,iVar9 + 1,puVar4[1]);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        if (*(int *)(iVar3 + 0x14) <= iVar2) {
          if (0x182b6 < param_2 - 0x3e9U) {
            if (param_2 < 1000000) {
              param_2 = param_2 % 1000;
            }
            else {
              param_2 = (param_2 + -1000000) % 1000;
            }
          }
          param_2 = *(int *)(iVar1 + 0xc) * 1000 + param_2 + 1000000;
        }
      }
    }
  }
  return param_2;
}


/* ItemChainManager.GetActiveIDFromSetID VA=0x1908C40 | public int GetActiveIDFromSetID(int setID) { } */

/* WARNING: Removing unreachable block (ram,0x01918fc0) */
/* WARNING: Removing unreachable block (ram,0x019190b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetActiveIDFromSetID_1908C40(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_019191e4 + 0x1918c5c);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019191e8 + 0x1918c70));
    func_0x0165b424(*(undefined4 *)(_UNK_019191ec + 0x1918c7c));
    func_0x0165b424(*(undefined4 *)(_UNK_019191f0 + 0x1918c88));
    func_0x0165b424(*(undefined4 *)(_UNK_019191f4 + 0x1918c94));
    func_0x0165b424(*(undefined4 *)(_UNK_019191f8 + 0x1918ca0));
    func_0x0165b424(*(undefined4 *)(_UNK_019191fc + 0x1918cac));
    func_0x0165b424(*(undefined4 *)(_UNK_01919200 + 0x1918cb8));
    func_0x0165b424(*(undefined4 *)(_UNK_01919204 + 0x1918cc4));
    func_0x0165b424(*(undefined4 *)(_UNK_01919208 + 0x1918cd0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191920c + 0x1918cdc));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x1c);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_38 = 0;
  if (iVar9 == 0) {
    func_0x0165b6e0();
  }
  iVar9 = func_0x026f8918(iVar9,param_2,&uStack_28,**(undefined4 **)(_UNK_01919210 + 0x1918d1c));
  if (iVar9 != 0) {
    iVar9 = ItemChainManager_GetItemChain_1906B1C(param_1,uStack_28);
    iVar1 = ItemChainManager_FindActiveLinkBySetID_1906298(param_1,param_2);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    piVar7 = *(int **)(iVar9 + 0xc);
    if (piVar7 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar9 = *piVar7;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_01919214 + 0x1918d78)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
          goto LAB_01918dc4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_01919214 + 0x1918d78),0);
LAB_01918dc4:
    piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
    iStack_4c = 0;
    puVar2 = *(undefined4 **)(_UNK_01919218 + 0x1918df0);
    do {
      if (piVar7 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar9 = *piVar7;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_0191921c + 0x1918e08)) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01918e50;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191921c + 0x1918e08),0);
LAB_01918e50:
      iVar9 = (*(code *)*puVar3)(piVar7,puVar3[1]);
      if (iVar9 == 0) {
        iVar9 = 10;
        break;
      }
      if (piVar7 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar9 = *piVar7;
      uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar9 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01919220 + 0x1918e88)) {
            puVar3 = (undefined4 *)(iVar9 + *piVar6 * 8 + 0xc0);
            goto LAB_01918ed0;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_01919220 + 0x1918e88),0);
LAB_01918ed0:
      iVar9 = (*(code *)*puVar3)(piVar7,puVar3[1]);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar9 + 0x18) == param_2) {
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar9 = 6;
        iStack_4c = *(int *)(iVar1 + 0x18);
        break;
      }
      iVar9 = *(int *)(iVar9 + 0x20);
      if (iVar9 == 0) {
        func_0x0165b6e0();
      }
      func_0x02ad81ec(&uStack_48,iVar9,**(undefined4 **)(_UNK_01919224 + 0x1918f18));
      iVar9 = 0;
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar4 = func_0x0170fd74(&uStack_38,*puVar2), iVar4 != 0) {
        if (iStack_2c == param_2) {
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar4 = *(int *)(iVar1 + 0x20);
          if (iVar4 == 0) {
            func_0x0165b6e0();
          }
          iStack_4c = func_0x02ad71f8(iVar4,iVar9,**(undefined4 **)(_UNK_01919228 + 0x1918f90));
          iVar9 = 6;
          goto LAB_01918fa4;
        }
        iVar9 = iVar9 + 1;
      }
      iVar9 = 3;
LAB_01918fa4:
      func_0x026f8948(&uStack_38,**(undefined4 **)(_UNK_0191922c + 0x1918fb0));
    } while (iVar9 == 3 || iVar9 == 0);
    if (piVar7 != (int *)0x0) {
      iVar1 = *piVar7;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01919234 + 0x1919050)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01919098;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_01919234 + 0x1919050),0);
LAB_01919098:
      (*(code *)*puVar2)(piVar7,puVar2[1]);
    }
    if (iVar9 == 6) {
      param_2 = iStack_4c;
    }
  }
  return param_2;
}


/* ItemChainManager.IsItemArchived VA=0x19087D0 | public static bool IsItemArchived(int setID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_IsItemArchived_19087D0(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  pcVar2 = (char *)(_UNK_01918904 + 0x19187e4);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01918908 + 0x19187f8));
    *pcVar2 = '\x01';
  }
  uVar3 = 1;
  if (param_1 < 1000000) {
    piVar4 = *(int **)(_UNK_0191890c + 0x1918820);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar2 = (char *)(_UNK_01918910 + 0x191883c);
    if (*pcVar2 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01918914 + 0x1918850));
      *pcVar2 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar4;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar1 + 0x194);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar5 + 0x44);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = ItemChainManager_GetItemLinkWithItemSet_1907084(iVar5,param_1);
    uVar3 = 0;
    if (iVar5 != 0) {
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      if ((0 < *(int *)(iVar5 + 0x10)) &&
         (uVar3 = 0, *(int *)(iVar5 + 0x10) <= *(int *)(iVar1 + 0x1c))) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* ItemChainManager.ArchiveSetID VA=0x19085E4 | private static int ArchiveSetID(int setID, int linkIndex) { } */

int ItemChainManager_ArchiveSetID_19085E4(int param_1,int param_2)

{
  if (0x182b6 < param_1 - 0x3e9U) {
    if (999999 < param_1) {
      param_1 = param_1 + -1000000;
    }
    param_1 = param_1 % 1000;
  }
  return param_2 * 1000 + param_1 + 1000000;
}


/* ItemChainManager.IsInventoryLogicActive VA=0x190923C | public bool IsInventoryLogicActive() { } */

bool ItemChainManager_IsInventoryLogicActive_190923C(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    return *(char *)(*(int *)(param_1 + 8) + 9) != '\0';
  }
  return false;
}


/* ItemChainManager.GetLinkCount VA=0x190925C | public int GetLinkCount() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetLinkCount_190925C(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019192b4 + 0x1919270);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019192b8 + 0x1919284));
    *pcVar2 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  return *(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0x18);
}


/* ItemChainManager.GetAllLinksOrderedByUnlockLevel VA=0x19092C0 | public List<ItemLinkModel> GetAllLinksOrderedByUnlockLevel() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_GetAllLinksOrderedByUnlockLevel_19092C0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_019195bc + 0x19192d8);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019195c0 + 0x19192ec));
    func_0x0165b424(*(undefined4 *)(_UNK_019195c4 + 0x19192f8));
    func_0x0165b424(*(undefined4 *)(_UNK_019195c8 + 0x1919304));
    func_0x0165b424(*(undefined4 *)(_UNK_019195cc + 0x1919310));
    func_0x0165b424(*(undefined4 *)(_UNK_019195d0 + 0x191931c));
    func_0x0165b424(*(undefined4 *)(_UNK_019195d4 + 0x1919328));
    func_0x0165b424(*(undefined4 *)(_UNK_019195d8 + 0x1919334));
    func_0x0165b424(*(undefined4 *)(_UNK_019195dc + 0x1919340));
    func_0x0165b424(*(undefined4 *)(_UNK_019195e0 + 0x191934c));
    func_0x0165b424(*(undefined4 *)(_UNK_019195e4 + 0x1919358));
    func_0x0165b424(*(undefined4 *)(_UNK_019195e8 + 0x1919364));
    func_0x0165b424(*(undefined4 *)(_UNK_019195ec + 0x1919370));
    func_0x0165b424(*(undefined4 *)(_UNK_019195f0 + 0x191937c));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_019195f4 + 0x1919398));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_019195f8 + 0x19193b0));
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x026f8924(iVar4,**(undefined4 **)(_UNK_019195fc + 0x19193d4));
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x032f71bc(&uStack_28,iVar4,**(undefined4 **)(_UNK_01919600 + 0x1919400));
  puVar7 = *(undefined4 **)(_UNK_01919604 + 0x1919414);
  puVar5 = *(undefined4 **)(_UNK_01919608 + 0x191941c);
  while (iVar2 = func_0x01716184(&uStack_28,*puVar7), iVar4 = iStack_1c, iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x0165b6e0();
    }
    uVar6 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0b494(iVar1,uVar6,*puVar5);
  }
  func_0x026f8928(&uStack_28,**(undefined4 **)(_UNK_0191960c + 0x191946c));
  piVar8 = *(int **)(_UNK_01919614 + 0x1919480);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar4 = *piVar8;
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xc);
  if (iVar2 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar4 = *piVar8;
    }
    uVar6 = **(undefined4 **)(iVar4 + 0x5c);
    iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919618 + 0x19194c8));
    func_0x026f8898(iVar2,uVar6,**(undefined4 **)(_UNK_0191961c + 0x19194e8),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
    *piVar8 = iVar2;
    func_0x0165b3c0(piVar8,iVar2);
  }
  uVar6 = func_0x0244441c(iVar1,iVar2,**(undefined4 **)(_UNK_01919620 + 0x1919514));
  func_0x024634cc(uVar6,**(undefined4 **)(_UNK_01919624 + 0x1919528));
  return;
}


/* ItemChainManager.GetAllLinksOrderedByArchiveLevel VA=0x190962C | public List<ItemLinkModel> GetAllLinksOrderedByArchiveLevel(bool excludeZero = False, bool excludeInventory = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_GetAllLinksOrderedByArchiveLevel_190962C
               (int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01919a24 + 0x191964c);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01919a28 + 0x1919660));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a2c + 0x191966c));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a30 + 0x1919678));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a34 + 0x1919684));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a38 + 0x1919690));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a3c + 0x191969c));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a40 + 0x19196a8));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a44 + 0x19196b4));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a48 + 0x19196c0));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a4c + 0x19196cc));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a50 + 0x19196d8));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a54 + 0x19196e4));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a58 + 0x19196f0));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a5c + 0x19196fc));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a60 + 0x1919708));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a64 + 0x1919714));
    func_0x0165b424(*(undefined4 *)(_UNK_01919a68 + 0x1919720));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919a6c + 0x191973c));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(int *)(iVar1 + 0xc) = param_1;
  *(undefined1 *)(iVar1 + 9) = param_3;
  *(undefined1 *)(iVar1 + 8) = param_2;
  func_0x0165b3c0((int *)(iVar1 + 0xc),param_1);
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919a70 + 0x1919780));
  func_0x02b0a9f0(iVar2,**(undefined4 **)(_UNK_01919a74 + 0x1919794));
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = func_0x026f8924(iVar5,**(undefined4 **)(_UNK_01919a78 + 0x19197b8));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x032f71bc(&uStack_48,iVar5,**(undefined4 **)(_UNK_01919a7c + 0x19197e4));
  piVar7 = (int *)(iVar1 + 0x10);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar8 = *(undefined4 **)(_UNK_01919a80 + 0x191980c);
  puVar10 = *(undefined4 **)(_UNK_01919a84 + 0x1919814);
  puVar9 = *(undefined4 **)(_UNK_01919a88 + 0x191981c);
  while (iVar3 = func_0x01716184(&uStack_38,*puVar8), iVar5 = iStack_2c, iVar3 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    iVar3 = *piVar7;
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    if (iVar3 == 0) {
      iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919a8c + 0x1919858));
      func_0x026f8108(iVar3,iVar1,**(undefined4 **)(_UNK_01919a90 + 0x191986c),0);
      *piVar7 = iVar3;
      func_0x0165b3c0(piVar7,iVar3);
    }
    uVar6 = func_0x02465edc(uVar6,iVar3,*puVar10);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0b494(iVar2,uVar6,*puVar9);
  }
  func_0x026f8928(&uStack_38,**(undefined4 **)(_UNK_01919a94 + 0x19198cc));
  piVar7 = *(int **)(_UNK_01919a9c + 0x19198e0);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar7;
  }
  iVar5 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar7;
    }
    uVar6 = **(undefined4 **)(iVar1 + 0x5c);
    iVar5 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919aa0 + 0x1919928));
    func_0x026f8898(iVar5,uVar6,**(undefined4 **)(_UNK_01919aa4 + 0x1919948),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0x10);
    *piVar7 = iVar5;
    func_0x0165b3c0(piVar7,iVar5);
  }
  uVar6 = func_0x0244441c(iVar2,iVar5,**(undefined4 **)(_UNK_01919aa8 + 0x1919974));
  func_0x024634cc(uVar6,**(undefined4 **)(_UNK_01919aac + 0x1919988));
  return;
}


/* ItemChainManager.GetArchiveTaskEndTime VA=0x1909ABC | public long GetArchiveTaskEndTime() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_GetArchiveTaskEndTime_1909ABC(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01919b34 + 0x1919ad0);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01919b38 + 0x1919ae4));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01919b3c + 0x1919af8) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  func_0x018bee9c(0);
  if (*(int *)(param_1 + 8) == 0) {
    func_0x0165b6e0();
  }
  return;
}


/* ItemChainManager.GetArchiveReward VA=0x1909B40 | public GameItemReward GetArchiveReward(ItemLinkID linkID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetArchiveReward_1909B40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01919c8c + 0x1919b5c);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01919c90 + 0x1919b70));
    func_0x0165b424(*(undefined4 *)(_UNK_01919c94 + 0x1919b7c));
    func_0x0165b424(*(undefined4 *)(_UNK_01919c98 + 0x1919b88));
    *pcVar5 = '\x01';
  }
  iVar1 = ItemChainManager_GetItemLink_190476C(param_1,param_2);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  uVar2 = ItemChainManager_FindKiteChain_1905B3C(param_1,*(undefined4 *)(iVar1 + 8));
  iVar1 = ItemChainManager_FindKiteLink_1905D00(uVar2,*(undefined4 *)(iVar1 + 0xc));
  iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919c9c + 0x1919bd0));
  func_0x01a2c0c4(iVar3,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar3 + 0xc) = 1;
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar6 = *(int *)(iVar1 + 0x1c);
  if (iVar6 == 0) {
    func_0x0165b6e0();
  }
  uStack_1c = *(undefined4 *)(iVar6 + 8);
  puVar7 = *(undefined4 **)(_UNK_01919ca0 + 0x1919c20);
  uVar2 = func_0x0165b5ac(*puVar7,&uStack_1c);
  iVar1 = *(int *)(iVar1 + 0x1c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  uStack_20 = *(undefined4 *)(iVar1 + 0xc);
  uVar4 = func_0x0165b5ac(*puVar7,&uStack_20);
  uVar2 = func_0x017282d4(**(undefined4 **)(_UNK_01919ca4 + 0x1919c6c),uVar2,uVar4,0);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  func_0x0165b3c0();
  return iVar3;
}


/* ItemChainManager.GetSpawnerBackupItems VA=0x1909CA8 | public List<KiteSpawnerBackupItem> GetSpawnerBackupItems() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_GetSpawnerBackupItems_1909CA8(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01919d48 + 0x1919cbc);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01919d4c + 0x1919cd0));
    func_0x0165b424(*(undefined4 *)(_UNK_01919d50 + 0x1919cdc));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
    uVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01919d54 + 0x1919d24));
    func_0x02b0a9f0(uVar1,**(undefined4 **)(_UNK_01919d58 + 0x1919d38));
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    uVar1 = *(undefined4 *)(iVar3 + 0x10);
  }
  return uVar1;
}


/* ItemChainManager.GetSpawnersToRemoveByArchive VA=0x1909D5C | public List<BoardPosition> GetSpawnersToRemoveByArchive(List<BoardPosition> boardPositions, int setID) { } */

/* WARNING: Removing unreachable block (ram,0x0191b2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetSpawnersToRemoveByArchive_1909D5C
              (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int *piVar19;
  undefined4 *puVar20;
  int iStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar13 = (char *)(_UNK_0191ad44 + 0x1919d7c);
  if (*pcVar13 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad48 + 0x1919d90));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad4c + 0x1919d9c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad50 + 0x1919da8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad54 + 0x1919db4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad58 + 0x1919dc0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad5c + 0x1919dcc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad60 + 0x1919dd8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad64 + 0x1919de4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad68 + 0x1919df0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad6c + 0x1919dfc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad70 + 0x1919e08));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad74 + 0x1919e14));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad78 + 0x1919e20));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad7c + 0x1919e2c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ad80 + 0x1919e38));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae38 + 0x1919e44));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae3c + 0x1919e50));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae40 + 0x1919e5c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae44 + 0x1919e68));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae48 + 0x1919e74));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae4c + 0x1919e80));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae50 + 0x1919e8c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae54 + 0x1919e98));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae58 + 0x1919ea4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae5c + 0x1919eb0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae60 + 0x1919ebc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae64 + 0x1919ec8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae68 + 0x1919ed4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae6c + 0x1919ee0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae70 + 0x1919eec));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ae74 + 0x1919ef8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191aef8 + 0x1919f04));
    func_0x0165b424(*(undefined4 *)(_UNK_0191aefc + 0x1919f10));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af00 + 0x1919f1c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af04 + 0x1919f28));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af08 + 0x1919f34));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af38 + 0x1919f40));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af3c + 0x1919f4c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af40 + 0x1919f58));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af44 + 0x1919f64));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af48 + 0x1919f70));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af4c + 0x1919f7c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af50 + 0x1919f88));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af54 + 0x1919f94));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af58 + 0x1919fa0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af5c + 0x1919fac));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af60 + 0x1919fb8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af64 + 0x1919fc4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af68 + 0x1919fd0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af6c + 0x1919fdc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af70 + 0x1919fe8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af74 + 0x1919ff4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af78 + 0x191a000));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af7c + 0x191a00c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af80 + 0x191a018));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af84 + 0x191a024));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af88 + 0x191a030));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af8c + 0x191a03c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af90 + 0x191a048));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af94 + 0x191a054));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af98 + 0x191a060));
    func_0x0165b424(*(undefined4 *)(_UNK_0191af9c + 0x191a06c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afa0 + 0x191a078));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afa4 + 0x191a084));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afa8 + 0x191a090));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afac + 0x191a09c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afb0 + 0x191a0a8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191afb4 + 0x191a0b4));
    *pcVar13 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191afb8 + 0x191a0d0));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_3;
  func_0x0165b3c0((int *)(iVar1 + 0x10),param_1);
  iVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b0d4 + 0x191a110));
  func_0x02b0a9f0(iVar2,**(undefined4 **)(_UNK_0191b0d8 + 0x191a124));
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0b494(iVar2,param_2,**(undefined4 **)(_UNK_0191b0dc + 0x191a148));
  piVar14 = *(int **)(_UNK_0191b0e0 + 0x191a15c);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar13 = (char *)(_UNK_0191b16c + 0x191a178);
  if (*pcVar13 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191b170 + 0x191a18c));
    *pcVar13 = '\x01';
  }
  iVar3 = *piVar14;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar3 = *piVar14;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x44);
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b174 + 0x191a1cc));
  func_0x02e51fac(uVar4,iVar1,**(undefined4 **)(_UNK_0191b178 + 0x191a1ec),0);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0cb9c(iVar2,uVar4,**(undefined4 **)(_UNK_0191b1f0 + 0x191a210));
  piVar14 = *(int **)(_UNK_0191b1f4 + 0x191a224);
  iVar5 = *piVar14;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar5 = *piVar14;
  }
  iVar18 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x14);
  if (iVar18 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar5 = *piVar14;
    }
    uVar4 = **(undefined4 **)(iVar5 + 0x5c);
    iVar18 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b238 + 0x191a26c));
    func_0x026f8898(iVar18,uVar4,**(undefined4 **)(_UNK_0191b23c + 0x191a28c),0);
    piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x14);
    *piVar14 = iVar18;
    func_0x0165b3c0(piVar14,iVar18);
  }
  uVar4 = func_0x0244441c(iVar2,iVar18,**(undefined4 **)(_UNK_0191b298 + 0x191a2b8));
  iVar2 = func_0x024634cc(uVar4,**(undefined4 **)(_UNK_0191b29c + 0x191a2cc));
  uVar4 = *(undefined4 *)(iVar1 + 8);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = func_0x0191b578(iVar3,uVar4,0);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar3 = *(int *)(iVar3 + 0x14);
  if (iVar3 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = 0;
  iVar3 = func_0x01a06fd8(*(int *)(iVar3 + 0xc) + -1,0);
  uVar11 = *(uint *)(iVar1 + 8);
  if (999999 < (int)uVar11) {
    uVar6 = uVar11 - 0xf4628;
    if ((int)uVar11 < 0xf4628) {
      uVar11 = uVar11 - 1000000;
    }
    else {
      uVar11 = uVar6 % 1000;
      iVar5 = uVar6 / 1000 + 1;
    }
    if (iVar5 != 0) {
      uVar11 = uVar11 + 100000;
    }
    if (iVar5 != 0) {
      uVar11 = (iVar5 * 1000 + uVar11) - 1000;
    }
  }
  uVar4 = ItemChainManager_GetItemLinkWithItemSet_1907084(param_1,uVar11);
  *(undefined4 *)(iVar1 + 0xc) = uVar4;
  func_0x0165b3c0();
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iStack_54 = 0;
  if (*(int *)(iVar5 + 0xc) != 0) {
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar5 + 0x18);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar5 + 0xc);
    uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b3dc + 0x191a418));
    func_0x02e51fac(uVar4,iVar1,**(undefined4 **)(_UNK_0191b3e0 + 0x191a438),0);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = func_0x02b0b954(iVar5,uVar4,**(undefined4 **)(_UNK_0191b43c + 0x191a45c));
    iStack_54 = 0;
    if (iVar5 != 0) {
      iStack_54 = iVar3;
    }
  }
  iVar5 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b478 + 0x191a490));
  func_0x02b0a9f0(iVar5,**(undefined4 **)(_UNK_0191b47c + 0x191a4a4));
  iVar18 = 0;
  puVar20 = *(undefined4 **)(_UNK_0191b480 + 0x191a4bc);
  while( true ) {
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar2 + 0xc) <= iVar18) break;
    iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b484 + 0x191a4e0));
    func_0x026f769c(iVar7,0);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = *puVar20;
    *(undefined4 *)(iVar7 + 8) = 0;
    *(int *)(iVar7 + 0xc) = iVar18;
    iVar8 = func_0x02b0af9c(iVar2,iVar18,uVar4);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    iVar8 = *(int *)(iVar8 + 0x14);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    iVar8 = *(int *)(iVar8 + 0x68);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    iVar8 = *(int *)(iVar8 + 0x44);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = func_0x01a06fd8(*(int *)(iVar8 + 0x10) + -1,0);
    *(undefined4 *)(iVar7 + 0x10) = uVar4;
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar8 = *(int *)(iVar5 + 8);
    uVar11 = *(uint *)(iVar5 + 0xc);
    piVar14 = *(int **)(_UNK_0191b488 + 0x191a594);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar15 = *piVar14;
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    if (uVar11 < *(uint *)(iVar8 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar11 + 1;
      piVar14 = (int *)(iVar8 + uVar11 * 4 + 0x10);
      *piVar14 = iVar7;
      func_0x0165b3c0(piVar14,iVar7);
    }
    else {
      func_0x02b0b274(iVar5,iVar7,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
    }
    iVar18 = iVar18 + 1;
  }
  iVar18 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b48c + 0x191a5f4));
  func_0x02b0a9f0(iVar18,**(undefined4 **)(_UNK_0191b490 + 0x191a608));
  iVar7 = *(int *)(param_1 + 0x24);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = *(int *)(iVar7 + 0x18);
  piVar14 = *(int **)(_UNK_0191b494 + 0x191a638);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(undefined4 *)(iVar7 + 8);
  if (iVar18 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0b494(iVar18,uVar4,**(undefined4 **)(_UNK_0191b498 + 0x191a660));
  iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b49c + 0x191a674));
  func_0x02b0a9f0(iVar7,**(undefined4 **)(_UNK_0191b4a0 + 0x191a688));
  iVar8 = *(int *)(param_1 + 0x24);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  iVar8 = *(int *)(iVar8 + 0x10);
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(undefined4 *)(iVar8 + 0x20);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0b494(iVar7,uVar4,**(undefined4 **)(_UNK_0191b4a4 + 0x191a6d4));
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4a8 + 0x191a6e8));
  func_0x02e51fac(uVar4,iVar1,**(undefined4 **)(_UNK_0191b4ac + 0x191a704),0);
  if (iVar18 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0cb9c(iVar18,uVar4,**(undefined4 **)(_UNK_0191b4b0 + 0x191a728));
  iVar8 = *piVar14;
  if (*(int *)(iVar8 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar8 = *piVar14;
  }
  iVar15 = *(int *)(*(int *)(iVar8 + 0x5c) + 0x18);
  if (iVar15 == 0) {
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar8 = *piVar14;
    }
    uVar4 = **(undefined4 **)(iVar8 + 0x5c);
    iVar15 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4b4 + 0x191a780));
    func_0x026f8898(iVar15,uVar4,**(undefined4 **)(_UNK_0191b4b8 + 0x191a7a0),0);
    piVar9 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x18);
    *piVar9 = iVar15;
    func_0x0165b3c0(piVar9,iVar15);
  }
  uVar4 = func_0x0244441c(iVar18,iVar15,**(undefined4 **)(_UNK_0191b4bc + 0x191a7d0));
  iVar18 = func_0x024634cc(uVar4,**(undefined4 **)(_UNK_0191b4c0 + 0x191a7e4));
  uVar4 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4c4 + 0x191a7f8));
  func_0x02e51fac(uVar4,iVar1,**(undefined4 **)(_UNK_0191b4c8 + 0x191a814),0);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0cb9c(iVar7,uVar4,**(undefined4 **)(_UNK_0191b4cc + 0x191a838));
  iVar1 = *piVar14;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar14;
  }
  iVar8 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c);
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar14;
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    iVar8 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4d0 + 0x191a88c));
    func_0x026f8898(iVar8,uVar4,**(undefined4 **)(_UNK_0191b4d4 + 0x191a8ac),0);
    piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x1c);
    *piVar14 = iVar8;
    func_0x0165b3c0(piVar14,iVar8);
  }
  uVar4 = func_0x0244441c(iVar7,iVar8,**(undefined4 **)(_UNK_0191b4d8 + 0x191a8d8));
  iVar1 = func_0x024634cc(uVar4,**(undefined4 **)(_UNK_0191b4dc + 0x191a8ec));
  iVar7 = 0;
  while( true ) {
    if (iVar18 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar18 + 0xc) <= iVar7) break;
    iVar8 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4e0 + 0x191a924));
    func_0x026f769c(iVar8,0);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    puVar20 = *(undefined4 **)(_UNK_0191b4e4 + 0x191a950);
    *(undefined4 *)(iVar8 + 8) = 1;
    *(int *)(iVar8 + 0xc) = iVar7;
    iVar15 = func_0x02b0af9c(iVar18,iVar7,*puVar20);
    if (iVar15 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = func_0x01a06fd8(*(int *)(iVar15 + 0x10) + -1,0);
    *(undefined4 *)(iVar8 + 0x10) = uVar4;
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar16 = *(int *)(iVar5 + 8);
    uVar11 = *(uint *)(iVar5 + 0xc);
    piVar14 = *(int **)(_UNK_0191b4e8 + 0x191a9b0);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar15 = *piVar14;
    if (iVar16 == 0) {
      func_0x0165b6e0();
    }
    if (uVar11 < *(uint *)(iVar16 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar11 + 1;
      piVar14 = (int *)(iVar16 + uVar11 * 4 + 0x10);
      *piVar14 = iVar8;
      func_0x0165b3c0(piVar14,iVar8);
    }
    else {
      func_0x02b0b274(iVar5,iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
    }
    iVar7 = iVar7 + 1;
  }
  iVar7 = 0;
  while( true ) {
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar1 + 0xc) <= iVar7) break;
    iVar8 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b4ec + 0x191aa34));
    func_0x026f769c(iVar8,0);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    puVar20 = *(undefined4 **)(_UNK_0191b4f0 + 0x191aa60);
    *(undefined4 *)(iVar8 + 8) = 2;
    *(int *)(iVar8 + 0xc) = iVar7;
    iVar15 = func_0x02b0af9c(iVar1,iVar7,*puVar20);
    if (iVar15 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = func_0x01a06fd8(*(int *)(iVar15 + 8) + -1,0);
    *(undefined4 *)(iVar8 + 0x10) = uVar4;
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar16 = *(int *)(iVar5 + 8);
    uVar11 = *(uint *)(iVar5 + 0xc);
    piVar14 = *(int **)(_UNK_0191b4f4 + 0x191aac0);
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
    iVar15 = *piVar14;
    if (iVar16 == 0) {
      func_0x0165b6e0();
    }
    if (uVar11 < *(uint *)(iVar16 + 0xc)) {
      *(uint *)(iVar5 + 0xc) = uVar11 + 1;
      piVar14 = (int *)(iVar16 + uVar11 * 4 + 0x10);
      *piVar14 = iVar8;
      func_0x0165b3c0(piVar14,iVar8);
    }
    else {
      func_0x02b0b274(iVar5,iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
    }
    iVar7 = iVar7 + 1;
  }
  piVar14 = *(int **)(_UNK_0191b4f8 + 0x191ab20);
  iVar7 = *piVar14;
  if (*(int *)(iVar7 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar7 = *piVar14;
  }
  iVar8 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x20);
  if (iVar8 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      func_0x0165b5a4();
      piVar14 = *(int **)(_UNK_0191b500 + 0x191ab70);
      iVar7 = *piVar14;
    }
    else {
      piVar14 = *(int **)(_UNK_0191b4fc + 0x191ab60);
    }
    uVar4 = **(undefined4 **)(iVar7 + 0x5c);
    iVar8 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b504 + 0x191ab80));
    func_0x026f8898(iVar8,uVar4,**(undefined4 **)(_UNK_0191b508 + 0x191aba0),0);
    piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x20);
    *piVar14 = iVar8;
    func_0x0165b3c0(piVar14,iVar8);
  }
  uVar4 = func_0x02444b70(iVar5,iVar8,**(undefined4 **)(_UNK_0191b50c + 0x191abcc));
  iVar5 = func_0x024634cc(uVar4,**(undefined4 **)(_UNK_0191b510 + 0x191abe0));
  iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b514 + 0x191abf4));
  func_0x02ad6c4c(iVar7,**(undefined4 **)(_UNK_0191b518 + 0x191ac04));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_48,iVar5,**(undefined4 **)(_UNK_0191b51c + 0x191ac2c));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  while (iVar8 = func_0x01710964(&uStack_38,**(undefined4 **)(_UNK_0191b534 + 0x191ac50)),
        iVar5 = iStack_2c, iVar8 != 0) {
    if (iStack_54 < iVar3) {
      if (iStack_2c == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar5 + 8) == 0) {
        uVar4 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        iVar15 = *(int *)(iVar7 + 8);
        uVar11 = *(uint *)(iVar7 + 0xc);
        piVar14 = *(int **)(_UNK_0191b530 + 0x191aec8);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        iVar8 = *piVar14;
        if (iVar15 == 0) {
          func_0x0165b6e0();
        }
        if (uVar11 < *(uint *)(iVar15 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar11 + 1;
          *(undefined4 *)(iVar15 + uVar11 * 4 + 0x10) = uVar4;
        }
        else {
          func_0x02ad74f4(iVar7,uVar4,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
      }
      iStack_54 = *(int *)(iVar5 + 0x10) + iStack_54;
    }
    else {
      if (iStack_2c == 0) {
        func_0x0165b6e0();
      }
      if (*(int *)(iVar5 + 8) == 1) {
        uVar4 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar18 == 0) {
          func_0x0165b6e0();
        }
        iVar8 = func_0x02b0af9c(iVar18,uVar4,**(undefined4 **)(_UNK_0191b528 + 0x191ada4));
        iVar15 = *(int *)(param_1 + 0x28);
        if (iVar8 == 0) {
          func_0x0165b6e0();
        }
        uVar4 = *(undefined4 *)(iVar5 + 0xc);
        uVar17 = *(undefined4 *)(iVar8 + 0x14);
        if (iVar15 == 0) {
          func_0x0165b6e0();
        }
        ItemChainManager_RemoveQuery_190B650(iVar15,uVar17,1,uVar4);
        iVar5 = *(int *)(param_1 + 0x24);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar5 + 0x18);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar5 + 8);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        func_0x02b0ca74(iVar5,iVar8,**(undefined4 **)(_UNK_0191b52c + 0x191ae28));
      }
      else if (*(int *)(iVar5 + 8) == 2) {
        uVar4 = *(undefined4 *)(iVar5 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar8 = func_0x02b0af9c(iVar1,uVar4,**(undefined4 **)(_UNK_0191b520 + 0x191acb0));
        iVar15 = *(int *)(param_1 + 0x28);
        if (iVar8 == 0) {
          func_0x0165b6e0();
        }
        uVar4 = *(undefined4 *)(iVar5 + 0xc);
        uVar17 = *(undefined4 *)(iVar8 + 0xc);
        if (iVar15 == 0) {
          func_0x0165b6e0();
        }
        ItemChainManager_RemoveQuery_190B650(iVar15,uVar17,2,uVar4);
        iVar5 = *(int *)(param_1 + 0x24);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar5 + 0x10);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = *(int *)(iVar5 + 0x20);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        func_0x02b0ca74(iVar5,iVar8,**(undefined4 **)(_UNK_0191b524 + 0x191ad34));
      }
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191b538 + 0x191afc8));
  piVar14 = *(int **)(_UNK_0191b53c + 0x191afdc);
  iVar1 = *piVar14;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar14;
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
  if (iVar3 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar14;
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191b548 + 0x191b024));
    func_0x026f87e4(iVar3,uVar4,**(undefined4 **)(_UNK_0191b54c + 0x191b044),0);
    piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 0x24);
    *piVar14 = iVar3;
    func_0x0165b3c0(piVar14,iVar3);
  }
  piVar14 = (int *)func_0x024449fc(iVar7,iVar3,**(undefined4 **)(_UNK_0191b550 + 0x191b070));
  if (piVar14 == (int *)0x0) {
    func_0x0165b6e0();
  }
  iVar1 = *piVar14;
  uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar11 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_0191b554 + 0x191b098)) {
        puVar20 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
        goto LAB_0191b0f0;
      }
      uVar11 = uVar11 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar11 != 0);
  }
  puVar20 = (undefined4 *)func_0x016cc99c(piVar14,**(int **)(_UNK_0191b554 + 0x191b098),0);
LAB_0191b0f0:
  piVar14 = (int *)(*(code *)*puVar20)(piVar14,puVar20[1]);
  piVar9 = *(int **)(_UNK_0191b55c + 0x191b110);
  piVar19 = *(int **)(_UNK_0191b560 + 0x191b118);
  puVar20 = *(undefined4 **)(_UNK_0191b564 + 0x191b120);
  do {
    if (piVar14 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar14;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == *piVar9) {
          puVar10 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_0191b188;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined4 *)func_0x016cc99c(piVar14,*piVar9,0);
LAB_0191b188:
    iVar1 = (*(code *)*puVar10)(piVar14,puVar10[1]);
    if (iVar1 == 0) break;
    if (piVar14 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar14;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar12[-1] == *piVar19) {
          puVar10 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
          goto LAB_0191b204;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined4 *)func_0x016cc99c(piVar14,*piVar19,0);
LAB_0191b204:
    uVar4 = (*(code *)*puVar10)(piVar14,puVar10[1]);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0cd50(iVar2,uVar4,*puVar20);
  } while( true );
  if (piVar14 != (int *)0x0) {
    iVar1 = *piVar14;
    uVar11 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar9[-1] == **(int **)(_UNK_0191b568 + 0x191b25c)) {
          puVar20 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
          goto LAB_0191b2ac;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar11 != 0);
    }
    puVar20 = (undefined4 *)func_0x016cc99c(piVar14,**(int **)(_UNK_0191b568 + 0x191b25c),0);
LAB_0191b2ac:
    (*(code *)*puVar20)(piVar14,puVar20[1]);
  }
  return iVar2;
}


/* ItemChainManager.GetPossibleArchiveLinks VA=0x190BA00 | public List<ItemLinkModel> GetPossibleArchiveLinks() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetPossibleArchiveLinks_190BA00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined1 *extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  uint extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  uint uVar3;
  uint extraout_r3_06;
  uint extraout_r3_07;
  uint extraout_r3_08;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int unaff_r6;
  undefined4 uVar9;
  int iVar10;
  int unaff_r7;
  int *piVar11;
  int unaff_r8;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  pcVar6 = (char *)(_UNK_0191bb50 + 0x191ba14);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb54 + 0x191ba28));
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb58 + 0x191ba34));
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb5c + 0x191ba40));
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb60 + 0x191ba4c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb64 + 0x191ba58));
    func_0x0165b424(*(undefined4 *)(_UNK_0191bb68 + 0x191ba64));
    *pcVar6 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  uVar1 = func_0x026f8924(iVar4,**(undefined4 **)(_UNK_0191bb6c + 0x191ba88));
  piVar11 = *(int **)(_UNK_0191bb70 + 0x191baa0);
  iVar4 = *piVar11;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar4 = *piVar11;
  }
  iVar7 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x28);
  if (iVar7 == 0) {
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar4 = *piVar11;
    }
    uVar9 = **(undefined4 **)(iVar4 + 0x5c);
    iVar7 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191bb74 + 0x191bae8));
    func_0x026f8108(iVar7,uVar9,**(undefined4 **)(_UNK_0191bb78 + 0x191bb08),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 0x28);
    *piVar11 = iVar7;
    func_0x0165b3c0(piVar11,iVar7);
  }
  iVar4 = func_0x02465edc(uVar1,iVar7,**(undefined4 **)(_UNK_0191bb7c + 0x191bb34));
  iVar7 = **(int **)(_UNK_0191bb80 + 0x191bb48);
  puVar12 = &stack0xfffffff0;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar14 = iVar4 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar2 = func_0x0165b6d4();
    func_0x02b0ab2c(iVar2,iVar4,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar2;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam02463550 + 0x246353c));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    puVar12 = extraout_r3;
  }
  *(undefined4 *)(puVar12 + -4) = 0x2463550;
  *(int *)(puVar12 + -8) = unaff_r6;
  *(undefined4 *)(puVar12 + -0xc) = 0;
  piVar11 = (int *)(puVar12 + -0x10);
  *piVar11 = iVar7;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    func_0x016cc90c(iVar4);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b20e48(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 8));
    return iVar7;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam024635d8 + 0x24635c4));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar4);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_00 | 0x780);
  }
  piVar11[-1] = 0x24635d8;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11 = piVar11 + -4;
  *piVar11 = iVar4;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar4 = func_0x0165b6d4();
    func_0x02b4ca04(iVar4,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar4;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam02463660 + 0x246364c));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_01 | 0x3c00);
  }
  piVar11[-1] = 0x2463660;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11 = piVar11 + -4;
  *piVar11 = iVar7;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    func_0x016cc90c(iVar4);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02b55720(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 8));
    return iVar7;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam024636e8 + 0x24636d4));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar4);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_02 | 0x1a00);
  }
  piVar11[-1] = 0x24636e8;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11 = piVar11 + -4;
  *piVar11 = iVar4;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar4 = func_0x0165b6d4();
    (*(code *)**(undefined4 **)(*(int *)(iVar7 + 0x1c) + 8))(iVar4,(int)uVar16);
    return iVar4;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam02463774 + 0x2463760));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_03 | 0xdc00);
  }
  piVar11[-1] = 0x2463774;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11 = piVar11 + -4;
  *piVar11 = iVar7;
  if (*(int *)(iVar4 + 0x1c) == 0) {
    func_0x016cc90c(iVar4);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar4 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar7 = func_0x0165b6d4();
    func_0x02be9490(iVar7,(int)uVar16,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 8));
    return iVar7;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam024637fc + 0x24637e8));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar4);
  uVar16 = func_0x0165b3c4();
  iVar7 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_04 | 0x5400);
  }
  piVar11[-1] = 0x24637fc;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11 = piVar11 + -4;
  *piVar11 = iVar4;
  if (*(int *)(iVar7 + 0x1c) == 0) {
    func_0x016cc90c(iVar7);
  }
  uVar14 = (int)uVar16 == 0;
  if (!(bool)uVar14) {
    if ((*(ushort *)(*(int *)(*(int *)(iVar7 + 0x1c) + 4) + 0xbd) & 1) == 0) {
      func_0x016cc8b0();
    }
    iVar4 = func_0x0165b6d4();
    func_0x02c05e28(iVar4,(int)uVar16,*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 8));
    return iVar4;
  }
  uVar1 = func_0x0165b434(*(undefined4 *)(iRam02463884 + 0x2463870));
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,iVar7);
  uVar16 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar16 >> 0x20);
  if ((bool)uVar14) {
    piVar11 = (int *)(extraout_r3_05 | 0x33000);
  }
  piVar11[-1] = 0x2463884;
  piVar11[-2] = unaff_r6;
  piVar11[-3] = 0;
  piVar11[-4] = iVar7;
  if (*(int *)(extraout_r2 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2);
  }
  if ((int)uVar16 == 0) {
    uVar1 = *(undefined4 *)(iRam02463904 + 0x24638e4);
  }
  else {
    if (iVar4 != 0) {
      uVar1 = 0;
      uVar3 = *(uint *)(*(int *)(extraout_r2 + 0x1c) + 4);
      iVar4 = piVar11[-4];
      uVar17 = CONCAT44(piVar11[-3],piVar11[-2]);
      uVar13 = piVar11[-1];
      goto LAB_02463a18;
    }
    uVar1 = *(undefined4 *)(iRam02463908 + 0x24638f0);
  }
  uVar14 = 1;
  uVar1 = func_0x0165b434(uVar1);
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,extraout_r2);
  uVar3 = 0x2463904;
  uVar17 = func_0x0165b3c4();
  iVar2 = (int)((ulonglong)uVar17 >> 0x20);
  iVar7 = (int)uVar17;
  if ((bool)uVar14) {
    uVar3 = extraout_r3_06 | 0xec0;
  }
  piVar11[-5] = uVar3;
  piVar11[-6] = (int)uVar16;
  piVar11[-7] = iVar4;
  piVar15 = piVar11 + -8;
  *piVar15 = extraout_r2;
  if (*(int *)(extraout_r2_00 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_00);
  }
  if (iVar7 == 0) {
    uVar1 = *(undefined4 *)(iRam02463988 + 0x2463968);
  }
  else {
    if (iVar2 != 0) {
      iVar4 = *(int *)(*(int *)(extraout_r2_00 + 0x1c) + 4);
      iVar5 = *piVar15;
      iVar8 = piVar11[-7];
      iVar10 = piVar11[-6];
      piVar11[-5] = piVar11[-5];
      piVar11[-6] = unaff_r8;
      piVar11[-7] = unaff_r7;
      *piVar15 = iVar10;
      piVar11[-9] = iVar8;
      piVar11[-10] = iVar5;
      piVar11 = *(int **)(iVar4 + 0x1c);
      if (piVar11 == (int *)0x0) {
        func_0x016cc90c(iVar4);
        piVar11 = *(int **)(iVar4 + 0x1c);
      }
      if ((*(ushort *)(*piVar11 + 0xbd) & 1) == 0) {
        func_0x016cc8b0();
      }
      iVar5 = func_0x0165b6d4();
      func_0x02924cfc(iVar5,0xfffffffe,*(undefined4 *)(*(int *)(iVar4 + 0x1c) + 4));
      if (iVar5 == 0) {
        func_0x0165b6e0();
      }
      *(int *)(iVar5 + 0x20) = iVar7;
      func_0x0165b3c0((int *)(iVar5 + 0x20),iVar7);
      *(int *)(iVar5 + 0x28) = iVar2;
      func_0x0165b3c0((int *)(iVar5 + 0x28),iVar2);
      *(undefined4 *)(iVar5 + 0x18) = 0;
      func_0x0165b3c0((undefined4 *)(iVar5 + 0x18),0);
      return iVar5;
    }
    uVar1 = *(undefined4 *)(iRam0246398c + 0x2463974);
  }
  uVar14 = 1;
  uVar1 = func_0x0165b434(uVar1);
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,extraout_r2_00);
  uVar3 = 0x2463988;
  uVar17 = func_0x0165b3c4();
  iVar4 = (int)((ulonglong)uVar17 >> 0x20);
  if ((bool)uVar14) {
    uVar3 = extraout_r3_07 | 0x680;
  }
  piVar11[-9] = uVar3;
  piVar11[-10] = iVar7;
  piVar11[-0xb] = iVar2;
  piVar11 = piVar11 + -0xc;
  *piVar11 = extraout_r2_00;
  if (*(int *)(extraout_r2_01 + 0x1c) == 0) {
    func_0x016cc90c(extraout_r2_01);
  }
  if ((int)uVar17 == 0) {
    uVar1 = *(undefined4 *)(iRam02463a10 + 0x24639f0);
  }
  else {
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x024639e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar4 = (*(code *)**(undefined4 **)(*(int *)(extraout_r2_01 + 0x1c) + 4))((int)uVar17,iVar4,0)
      ;
      return iVar4;
    }
    uVar1 = *(undefined4 *)(iRam02463a14 + 0x24639fc);
  }
  uVar14 = 1;
  uVar1 = func_0x0165b434(uVar1);
  uVar1 = func_0x026fd688(uVar1,0);
  func_0x0165b590(uVar1,extraout_r2_01);
  uVar13 = 0x2463a10;
  uVar16 = func_0x0165b3c4();
  uVar1 = extraout_r2_02;
  uVar3 = extraout_r3_08;
  iVar4 = extraout_r2_01;
  if ((bool)uVar14) {
    uVar13 = extraout_r3_08 | 0x3800;
  }
LAB_02463a18:
  uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
  piVar11[-1] = uVar13;
  piVar11[-2] = unaff_r8;
  piVar11[-3] = unaff_r7;
  piVar11[-4] = (int)uVar17;
  piVar11[-5] = (int)((ulonglong)uVar17 >> 0x20);
  piVar11[-6] = iVar4;
  piVar11 = *(int **)(uVar3 + 0x1c);
  if (piVar11 == (int *)0x0) {
    func_0x016cc90c(uVar3);
    piVar11 = *(int **)(uVar3 + 0x1c);
  }
  if ((*(ushort *)(*piVar11 + 0xbd) & 1) == 0) {
    func_0x016cc8b0();
  }
  iVar4 = func_0x0165b6d4();
  func_0x02924424(iVar4,0xfffffffe,*(undefined4 *)(*(int *)(uVar3 + 0x1c) + 4));
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  *(undefined4 *)(iVar4 + 0x20) = (int)uVar16;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x20),(int)uVar16);
  *(undefined4 *)(iVar4 + 0x28) = uVar9;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x28),uVar9);
  *(undefined4 *)(iVar4 + 0x18) = uVar1;
  func_0x0165b3c0((undefined4 *)(iVar4 + 0x18),uVar1);
  return iVar4;
}


/* ItemChainManager.LookupSetIDInParentLink VA=0x190BB84 | public int LookupSetIDInParentLink(int lookupSetID, int parentSetID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_LookupSetIDInParentLink_190BB84
              (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar8 = (char *)(_UNK_0191be30 + 0x191bba4);
  if (*pcVar8 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191be34 + 0x191bbb8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191be38 + 0x191bbc4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191be3c + 0x191bbd0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191be40 + 0x191bbdc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191be44 + 0x191bbe8));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = ItemChainManager_GetItemLinkWithItemSet_1907084(param_1,param_3);
  iVar2 = param_2;
  if (iVar1 != 0) {
    iVar2 = ItemChainManager_GetItemChainData_1906B78(param_1,*(undefined4 *)(iVar1 + 8));
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = func_0x0191be64(iVar2);
    iVar2 = func_0x0191bef0(iVar1,param_2);
    if (iVar2 == 0) {
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      func_0x02b0bf88(&uStack_48,iVar3,**(undefined4 **)(_UNK_0191be48 + 0x191bc74));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar10 = *(undefined4 **)(_UNK_0191be4c + 0x191bc90);
      do {
        iVar3 = func_0x01710964(&uStack_38,*puVar10);
        iVar2 = iStack_2c;
        if (iVar3 == 0) {
          func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191be5c + 0x191bd84));
          return param_2;
        }
        if (iStack_2c == 0) {
          func_0x0165b6e0();
        }
        iVar2 = ItemChainManager_GetItemChain_1906B1C(param_1,*(undefined4 *)(iVar2 + 0xc));
        if (iVar2 == 0) {
          func_0x0165b6e0();
        }
        piVar7 = *(int **)(iVar2 + 0xc);
        uVar9 = *(undefined4 *)(iVar1 + 0xc);
        if (piVar7 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar2 = *piVar7;
        uVar5 = (uint)*(ushort *)(iVar2 + 0xb6);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(int *)(iVar2 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(_UNK_0191be50 + 0x191bcf0)) {
              puVar4 = (undefined4 *)(iVar2 + *piVar6 * 8 + 0xc0);
              goto LAB_0191bd38;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191be50 + 0x191bcf0),0);
LAB_0191bd38:
        uVar9 = (*(code *)*puVar4)(piVar7,uVar9,puVar4[1]);
        iVar2 = func_0x0191bef0(uVar9,param_2);
      } while (iVar2 == 0);
      func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191be54 + 0x191bd6c));
    }
  }
  return iVar2;
}


/* ItemChainManager.GetMatchingIDFromAnotherLink VA=0x190BEF0 | private static int GetMatchingIDFromAnotherLink(ItemLinkModel parentLink, int lookupSetID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ItemChainManager_GetMatchingIDFromAnotherLink_190BEF0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_0191c0bc + 0x191bf08);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191c0c0 + 0x191bf1c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c0c4 + 0x191bf28));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c0c8 + 0x191bf34));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c0cc + 0x191bf40));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191c0d0 + 0x191bf54));
  func_0x026f769c(iVar1,0);
  if (0x182b6 < param_2 - 0x3e9U) {
    if (param_2 < 1000000) {
      param_2 = param_2 % 1000;
    }
    else {
      param_2 = (param_2 + -1000000) % 1000;
    }
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(int *)(iVar1 + 8) = param_2;
  if (param_1 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = iVar2;
  if (0x182b6 < iVar2 - 0x3e9U) {
    if (iVar2 < 1000000) {
      iVar3 = iVar2 % 1000;
    }
    else {
      iVar3 = (iVar2 + -1000000) % 1000;
    }
  }
  if (iVar3 != *(int *)(iVar1 + 8)) {
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191c0d4 + 0x191c06c));
    func_0x02e5125c(iVar3,iVar1,**(undefined4 **)(_UNK_0191c0d8 + 0x191c08c),0);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    if (iVar3 == 0) {
      func_0x048c64dc(8,0,**(undefined4 **)(_UNK_0191c0dc + 0x191c0b0));
    }
    if (0 < *(int *)(iVar2 + 0xc)) {
      iVar1 = 4;
      do {
        iVar5 = *(int *)(iVar2 + 8);
        if (iVar5 == 0) {
          func_0x0165b6e0();
        }
        if (*(uint *)(iVar5 + 0xc) <= iVar1 - 4U) {
          func_0x0165b6e4();
        }
        uVar6 = *(undefined4 *)(iVar5 + iVar1 * 4);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        iVar5 = (**(code **)(iVar3 + 0xc))
                          (*(undefined4 *)(iVar3 + 0x20),uVar6,*(undefined4 *)(iVar3 + 0x14));
        if (iVar5 != 0) {
          iVar3 = *(int *)(iVar2 + 8);
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          if (*(uint *)(iVar3 + 0xc) <= iVar1 - 4U) {
            func_0x0165b6e4();
          }
          return *(int *)(iVar3 + iVar1 * 4);
        }
        iVar5 = iVar1 + -3;
        iVar1 = iVar1 + 1;
      } while (iVar5 < *(int *)(iVar2 + 0xc));
    }
    return 0;
  }
  return iVar2;
}


/* ItemChainManager.IsSpawnerSellable VA=0x190C0E8 | public bool IsSpawnerSellable(int querySetID, int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_IsSpawnerSellable_190C0E8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0191c3ac + 0x191c108);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3b0 + 0x191c11c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3b4 + 0x191c128));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3b8 + 0x191c134));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3bc + 0x191c140));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3c0 + 0x191c14c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191c3c4 + 0x191c158));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191c3c8 + 0x191c170));
  func_0x026f769c(iVar1,0);
  if (999999 < (int)param_2) {
    uVar2 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar2 % 1000;
      iVar5 = uVar2 / 1000 + 1;
    }
    if (iVar5 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar5 != 0) {
      param_2 = (iVar5 * 1000 + param_2) - 1000;
    }
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(param_1 + 0x24);
  *(uint *)(iVar1 + 8) = param_2;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
    iVar5 = *(int *)(param_1 + 0x24);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar5 + 0x18);
    uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191c3cc + 0x191c248));
    func_0x02b0a9f0(uVar3,**(undefined4 **)(_UNK_0191c3d0 + 0x191c260));
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    puVar8 = (undefined4 *)(iVar5 + 0xc);
    *puVar8 = uVar3;
    func_0x0165b3c0(puVar8,uVar3);
  }
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0x18);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar5 + 0xc);
  uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191c3d4 + 0x191c2b0));
  func_0x02e51fac(uVar3,iVar1,**(undefined4 **)(_UNK_0191c3d8 + 0x191c2d0),0);
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = func_0x02b0b954(iVar5,uVar3,**(undefined4 **)(_UNK_0191c3dc + 0x191c2f4));
  uVar3 = 1;
  if (iVar5 == 0) {
    uVar3 = 0;
    iVar5 = func_0x01a06fd8(param_3 + -1,0);
    iVar7 = *(int *)(param_1 + 0x28);
    uVar6 = *(undefined4 *)(iVar1 + 8);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = ItemChainManager_GetMaxPointsForSetIDQuery_190C3E8(iVar7,uVar6,&iStack_24);
    if ((iVar7 != iVar5) || (1 < iStack_24)) {
      iVar7 = func_0x0191c678(param_1,*(undefined4 *)(iVar1 + 8));
      uVar3 = 0;
      iVar7 = func_0x01a06fd8(iVar7 + -1,0);
      uVar6 = *(undefined4 *)(iVar1 + 8);
      iVar1 = *(int *)(param_1 + 0x28);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = ItemChainManager_GetTotalPointsForSetIDQuery_190CA84(iVar1,uVar6);
      if (iVar7 <= iVar1 - iVar5) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}


/* ItemChainManager.CurrentRequiredLevelForSpawner VA=0x190C678 | private int CurrentRequiredLevelForSpawner(int querySetID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_CurrentRequiredLevelForSpawner_190C678(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_0191ca28 + 0x191c694);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca2c + 0x191c6a8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca30 + 0x191c6b4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca34 + 0x191c6c0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca38 + 0x191c6cc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca3c + 0x191c6d8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca40 + 0x191c6e4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca44 + 0x191c6f0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca48 + 0x191c6fc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca4c + 0x191c708));
    func_0x0165b424(*(undefined4 *)(_UNK_0191ca50 + 0x191c714));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191ca54 + 0x191c730));
  iVar7 = 0;
  func_0x026f769c(iVar1,0);
  if (999999 < (int)param_2) {
    uVar2 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar2 % 1000;
      iVar7 = uVar2 / 1000 + 1;
    }
    if (iVar7 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar7 != 0) {
      param_2 = (iVar7 * 1000 + param_2) - 1000;
    }
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  *(uint *)(iVar1 + 8) = param_2;
  iVar7 = ItemChainManager_GetSpawnerBackupItems_1909CA8(param_1);
  if (iVar7 == 0) {
    func_0x0165b6e0();
    iVar7 = 0;
    func_0x02b0cf60(0,**(undefined4 **)(_UNK_0191ca5c + 0x191c804));
    func_0x0165b6e0();
  }
  else {
    func_0x02b0cf60(iVar7,**(undefined4 **)(_UNK_0191ca58 + 0x191c7e4));
  }
  func_0x02b0bf88(&uStack_48,iVar7,**(undefined4 **)(_UNK_0191ca60 + 0x191c824));
  piVar5 = (int *)(iVar1 + 0xc);
  uVar4 = 0;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar10 = *(undefined4 **)(_UNK_0191ca64 + 0x191c850);
  while (iVar3 = func_0x01710964(&uStack_38,*puVar10), iVar7 = iStack_2c, iVar3 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(iVar7 + 8);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar9 + 0x10);
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (*(int *)(iVar9 + 0x1c) < iVar3) break;
    iVar3 = *piVar5;
    iVar7 = *(int *)(iVar7 + 0xc);
    if (iVar3 == 0) {
      iVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191ca68 + 0x191c8c4));
      func_0x02e51fac(iVar3,iVar1,**(undefined4 **)(_UNK_0191ca6c + 0x191c8d8),0);
      *piVar5 = iVar3;
      func_0x0165b3c0(piVar5,iVar3);
    }
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = func_0x02b0b99c(iVar7,iVar3,**(undefined4 **)(_UNK_0191ca70 + 0x191c910));
    if (iVar7 != 0) {
      uVar8 = *(undefined4 *)(iVar7 + 0xc);
      if (*(int *)(**(int **)(_UNK_0191ca74 + 0x191c930) + 0x74) == 0) {
        func_0x0165b5a4(**(int **)(_UNK_0191ca74 + 0x191c930));
      }
      uVar4 = func_0x0172aff4(uVar4,uVar8,0);
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191ca7c + 0x191c96c));
  return uVar4;
}


/* ItemChainManager.GetNextArchivedChainAndLink VA=0x190CC94 | public Tuple<int, int> GetNextArchivedChainAndLink() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_GetNextArchivedChainAndLink_190CC94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_0191cf10 + 0x191ccac);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf14 + 0x191ccc0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf18 + 0x191cccc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf1c + 0x191ccd8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf20 + 0x191cce4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf24 + 0x191ccf0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf28 + 0x191ccfc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf2c + 0x191cd08));
    func_0x0165b424(*(undefined4 *)(_UNK_0191cf30 + 0x191cd14));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = func_0x026f8924(iVar5,**(undefined4 **)(_UNK_0191cf34 + 0x191cd44));
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  func_0x032f71bc(&uStack_40,iVar5,**(undefined4 **)(_UNK_0191cf38 + 0x191cd70));
  iVar5 = -1;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  iStack_24 = iStack_34;
  puVar6 = *(undefined4 **)(_UNK_0191cf3c + 0x191cd90);
  do {
    while( true ) {
      iVar1 = func_0x01716184(&uStack_30,*puVar6);
      iVar3 = iStack_24;
      if (iVar1 == 0) {
        iVar1 = -1;
        iVar5 = -1;
        goto LAB_0191cdec;
      }
      if (iVar5 != -1) break;
      if (iStack_24 == 0) {
        func_0x0165b6e0();
      }
      iVar5 = *(int *)(iVar3 + 0xc);
    }
    if (iStack_24 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar3 + 0xc);
  } while (iVar5 <= iVar1);
  iVar5 = *(int *)(iVar3 + 8);
LAB_0191cdec:
  func_0x026f8928(&uStack_30,**(undefined4 **)(_UNK_0191cf40 + 0x191cdf8));
  if (iVar1 == -1 || iVar5 == -1) {
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = 0;
    iVar3 = func_0x0172a564(iVar3,0,**(undefined4 **)(_UNK_0191cf44 + 0x191ce30));
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar3 + 0xc);
  }
  uVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_0191cf48 + 0x191ce58));
  func_0x031dd268(uVar2,iVar5,iVar1,**(undefined4 **)(_UNK_0191cf4c + 0x191ce74));
  return uVar2;
}


/* ItemChainManager.CreateSpawnerQueryDictionary VA=0x190CF58 | public void CreateSpawnerQueryDictionary() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_CreateSpawnerQueryDictionary_190CF58(int param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r2;
  int extraout_r3;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    func_0x01a71b20(iVar6,0);
    iVar7 = *(int *)(param_1 + 0x24);
    iVar6 = iVar7;
    if (iVar7 == 0) {
      func_0x0165b6e0();
      iVar6 = *(int *)(param_1 + 0x24);
      if (iVar6 == 0) {
        uVar12 = func_0x0165b6e0();
        iVar7 = (int)((ulonglong)uVar12 >> 0x20);
        iVar6 = (int)uVar12;
        pcVar4 = (char *)(_UNK_0191d40c + 0x191d038);
        if (*pcVar4 == '\0') {
          func_0x0165b424(*(undefined4 *)(_UNK_0191d410 + 0x191d050));
          func_0x0165b424(*(undefined4 *)(_UNK_0191d414 + 0x191d05c));
          func_0x0165b424(*(undefined4 *)(_UNK_0191d418 + 0x191d068));
          func_0x0165b424(*(undefined4 *)(_UNK_0191d41c + 0x191d074));
          func_0x0165b424(*(undefined4 *)(_UNK_0191d420 + 0x191d080));
          func_0x0165b424(*(undefined4 *)(_UNK_0191d424 + 0x191d08c));
          *pcVar4 = '\x01';
        }
        if (*(char *)(iVar6 + 8) == '\0') {
          iVar8 = 0;
          puVar11 = *(undefined4 **)(_UNK_0191d428 + 0x191d0b8);
          while( true ) {
            if (iVar7 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar7 + 0xc) <= iVar8) break;
            iVar1 = func_0x02b0af9c(iVar7,iVar8,*puVar11);
            if (iVar1 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar1 + 0x14) != 0) {
              iVar1 = func_0x02b0af9c(iVar7,iVar8,*puVar11);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              iVar1 = *(int *)(iVar1 + 0x14);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              uVar5 = *(uint *)(iVar1 + 0x14);
              if (999999 < (int)uVar5) {
                uVar2 = uVar5 - 0xf4628;
                if ((int)uVar5 < 0xf4628) {
                  uVar5 = uVar5 - 1000000;
                  iVar1 = 0;
                }
                else {
                  uVar5 = uVar2 % 1000;
                  iVar1 = uVar2 / 1000 + 1;
                }
                if (iVar1 != 0) {
                  uVar5 = uVar5 + 100000;
                }
                if (iVar1 != 0) {
                  uVar5 = (iVar1 * 1000 + uVar5) - 1000;
                }
              }
              iVar1 = func_0x02b0af9c(iVar7,iVar8,*puVar11);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              iVar1 = *(int *)(iVar1 + 0x14);
              if (iVar1 == 0) {
                func_0x0165b6e0();
              }
              ItemChainManager_AddToQueryList_190E8D0
                        (iVar6,uVar5,0,iVar8,*(undefined4 *)(iVar1 + 0x10),1);
            }
            iVar8 = iVar8 + 1;
          }
          iVar7 = 0;
          puVar11 = *(undefined4 **)(_UNK_0191d42c + 0x191d210);
          while( true ) {
            if (extraout_r2 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(extraout_r2 + 0xc) <= iVar7) break;
            iVar8 = func_0x02b0af9c(extraout_r2,iVar7,*puVar11);
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            uVar5 = *(uint *)(iVar8 + 0x14);
            if (999999 < (int)uVar5) {
              uVar2 = uVar5 - 0xf4628;
              if ((int)uVar5 < 0xf4628) {
                uVar5 = uVar5 - 1000000;
                iVar8 = 0;
              }
              else {
                uVar5 = uVar2 % 1000;
                iVar8 = uVar2 / 1000 + 1;
              }
              if (iVar8 != 0) {
                uVar5 = uVar5 + 100000;
              }
              if (iVar8 != 0) {
                uVar5 = (iVar8 * 1000 + uVar5) - 1000;
              }
            }
            iVar8 = func_0x02b0af9c(extraout_r2,iVar7,*puVar11);
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            ItemChainManager_AddToQueryList_190E8D0
                      (iVar6,uVar5,1,iVar7,*(undefined4 *)(iVar8 + 0x10),1);
            iVar7 = iVar7 + 1;
          }
          iVar7 = 0;
          puVar11 = *(undefined4 **)(_UNK_0191d430 + 0x191d314);
          while( true ) {
            if (extraout_r3 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(extraout_r3 + 0xc) <= iVar7) break;
            iVar8 = func_0x02b0af9c(extraout_r3,iVar7,*puVar11);
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            uVar5 = *(uint *)(iVar8 + 0xc);
            if (999999 < (int)uVar5) {
              uVar2 = uVar5 - 0xf4628;
              if ((int)uVar5 < 0xf4628) {
                uVar5 = uVar5 - 1000000;
                iVar8 = 0;
              }
              else {
                uVar5 = uVar2 % 1000;
                iVar8 = uVar2 / 1000 + 1;
              }
              if (iVar8 != 0) {
                uVar5 = uVar5 + 100000;
              }
              if (iVar8 != 0) {
                uVar5 = (iVar8 * 1000 + uVar5) - 1000;
              }
            }
            iVar8 = func_0x02b0af9c(extraout_r3,iVar7,*puVar11);
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            ItemChainManager_AddToQueryList_190E8D0
                      (iVar6,uVar5,2,iVar7,*(undefined4 *)(iVar8 + 8),1);
            iVar7 = iVar7 + 1;
          }
          *(undefined1 *)(iVar6 + 8) = 1;
        }
        return;
      }
    }
    iVar6 = *(int *)(iVar6 + 0x18);
    uVar10 = *(undefined4 *)(iVar7 + 8);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(iVar6 + 8);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar6 = *(int *)(iVar7 + 0x10);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *(int *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(iVar6 + 0x20);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    ItemChainManager_InitializeSpawnerQuery_190D018(iVar7,uVar10,uVar9,uVar3);
  }
  return;
}


/* ItemChainManager.InitializeItemRewardConversion VA=0x19040D8 | public void InitializeItemRewardConversion() { } */

/* WARNING: Removing unreachable block (ram,0x01cb1f68) */
/* WARNING: Removing unreachable block (ram,0x01cb1f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_InitializeItemRewardConversion_19040D8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_01cb2058 + 0x1cb1ba4);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01cb205c + 0x1cb1bb8),0);
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2060 + 0x1cb1bc4));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2064 + 0x1cb1bd0));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2068 + 0x1cb1bdc));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb206c + 0x1cb1be8));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2070 + 0x1cb1bf4));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2074 + 0x1cb1c00));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2078 + 0x1cb1c0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb207c + 0x1cb1c18));
    func_0x0165b424(*(undefined4 *)(_UNK_01cb2080 + 0x1cb1c24));
    *pcVar6 = '\x01';
  }
  func_0x01cb1a8c();
  piVar10 = *(int **)(_UNK_01cb2084 + 0x1cb1c3c);
  iVar7 = *(int *)(*(int *)(*piVar10 + 0x5c) + 4);
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  iVar7 = func_0x02b0b63c(iVar7,param_1,**(undefined4 **)(_UNK_01cb2088 + 0x1cb1c60));
  if (iVar7 == 0) {
    iVar7 = *(int *)(*(int *)(*piVar10 + 0x5c) + 4);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    iVar9 = *(int *)(iVar7 + 8);
    uVar8 = *(uint *)(iVar7 + 0xc);
    piVar3 = *(int **)(_UNK_01cb208c + 0x1cb1ca8);
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    iVar11 = *piVar3;
    if (iVar9 == 0) {
      func_0x0165b6e0();
    }
    if (uVar8 < *(uint *)(iVar9 + 0xc)) {
      *(uint *)(iVar7 + 0xc) = uVar8 + 1;
      piVar3 = (int *)(iVar9 + uVar8 * 4 + 0x10);
      *piVar3 = (int)param_1;
      func_0x0165b3c0(piVar3,param_1);
    }
    else {
      func_0x02b0b274(iVar7,param_1,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38)
                     );
    }
  }
  if ((**(int **)(*piVar10 + 0x5c) != 0) &&
     (iVar7 = func_0x029bbb38(**(int **)(*piVar10 + 0x5c),
                              **(undefined4 **)(_UNK_01cb2090 + 0x1cb1d14)), 0 < iVar7)) {
    iVar7 = **(int **)(*piVar10 + 0x5c);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    piVar10 = (int *)func_0x029bcb04(iVar7,**(undefined4 **)(_UNK_01cb2094 + 0x1cb1d44));
    piVar3 = *(int **)(_UNK_01cb2098 + 0x1cb1d60);
    piVar12 = *(int **)(_UNK_01cb209c + 0x1cb1d68);
LAB_01cb1d64:
    if (piVar10 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar7 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar3) {
          puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
          goto LAB_01cb1dc0;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar3,0);
LAB_01cb1dc0:
    iVar7 = (*(code *)*puVar2)(piVar10,puVar2[1]);
    if (iVar7 != 0) {
      if (piVar10 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar7 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar8 != 0) {
        piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar12) {
            puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
            goto LAB_01cb1e34;
          }
          uVar8 = uVar8 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar10,*piVar12,0);
LAB_01cb1e34:
      (*(code *)*puVar2)(&uStack_30,piVar10,puVar2[1]);
      iVar7 = func_0x01cb20ac(uStack_30);
      uVar4 = 2;
      if (iVar7 != 0) {
        uVar4 = 1;
      }
      func_0x01cb21d0(&uStack_30,uVar4);
      uVar1 = uStack_2c;
      uVar4 = uStack_30;
      if (param_1 != (int *)0x0) {
        iVar7 = *param_1;
        uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar8 != 0) {
          piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01cb20a0 + 0x1cb1e84)) {
              puVar2 = (undefined4 *)(iVar7 + *piVar5 * 8 + 200);
              goto LAB_01cb1ecc;
            }
            uVar8 = uVar8 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined4 *)func_0x016cc99c(param_1,**(int **)(_UNK_01cb20a0 + 0x1cb1e84),1);
LAB_01cb1ecc:
        (*(code *)*puVar2)(param_1,uVar4,uVar1,puVar2[1]);
      }
      goto LAB_01cb1d64;
    }
    if (piVar10 != (int *)0x0) {
      iVar7 = *piVar10;
      uVar8 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar8 != 0) {
        piVar3 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar3[-1] == **(int **)(_UNK_01cb20a4 + 0x1cb1f08)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar3 * 8 + 0xc0);
            goto LAB_01cb1f50;
          }
          uVar8 = uVar8 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar10,**(int **)(_UNK_01cb20a4 + 0x1cb1f08),0);
LAB_01cb1f50:
      (*(code *)*puVar2)(piVar10,puVar2[1]);
    }
    func_0x01cb25d4();
  }
  return;
}


/* ItemChainManager.ItemRewardConvertUpdated VA=0x190D434 | public void ItemRewardConvertUpdated(ItemRewardConvertEvent.FeatureStatusUpdated e) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ItemChainManager_ItemRewardConvertUpdated_190D434
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar3 = (char *)(_UNK_0191d6dc + 0x191d454);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191d6e0 + 0x191d468));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d6e4 + 0x191d474));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d6e8 + 0x191d480));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d6ec + 0x191d48c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191d6f0 + 0x191d498));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x14);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x026f8924(iVar4,**(undefined4 **)(_UNK_0191d6f4 + 0x191d4d4));
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x032f71bc(&uStack_50,iVar4,**(undefined4 **)(_UNK_0191d6f8 + 0x191d500));
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  puVar6 = *(undefined4 **)(_UNK_0191d6fc + 0x191d51c);
  while (iVar1 = func_0x01716184(&uStack_38,*puVar6), iVar4 = iStack_2c, iVar1 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    uVar2 = ItemChainManager_FindKiteChain_1905B3C(param_1,*(undefined4 *)(iVar4 + 8));
    iVar4 = ItemChainManager_FindKiteLink_1905D00(uVar2,*(undefined4 *)(iVar4 + 0xc));
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar4 + 0x1c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
      uVar2 = uRam00000008;
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        iVar1 = 0;
        func_0x0165b6e0();
      }
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 8);
    }
    iVar1 = func_0x01cb46c4(param_2,param_3,uVar2,*(undefined4 *)(iVar1 + 0xc),&uStack_40,0);
    uVar2 = uStack_40;
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        func_0x0165b6e0();
        uVar5 = uStack_3c;
        iVar1 = *(int *)(iVar4 + 0x1c);
        uRam00000008 = uVar2;
        if (iVar1 == 0) {
          iVar1 = 0;
          func_0x0165b6e0();
        }
      }
      else {
        *(undefined4 *)(iVar1 + 8) = uStack_40;
        uVar5 = uStack_3c;
      }
      *(undefined4 *)(iVar1 + 0xc) = uVar5;
    }
  }
  func_0x026f8928(&uStack_38,**(undefined4 **)(_UNK_0191d700 + 0x191d628));
  return;
}


/* ItemChainManager.GetParentChainSpawnerSetId VA=0x190D70C | public int GetParentChainSpawnerSetId(int childSpawnerSetId) { } */

/* WARNING: Removing unreachable block (ram,0x0191daa4) */
/* WARNING: Removing unreachable block (ram,0x0191dab0) */
/* WARNING: Removing unreachable block (ram,0x0191de04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_GetParentChainSpawnerSetId_190D70C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0191dff4 + 0x191d728);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191dff8 + 0x191d73c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191dffc + 0x191d748));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e000 + 0x191d754));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e004 + 0x191d760));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e008 + 0x191d76c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e00c + 0x191d778));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e010 + 0x191d784));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e014 + 0x191d790));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e018 + 0x191d79c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e01c + 0x191d7a8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e020 + 0x191d7b4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e024 + 0x191d7c0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e028 + 0x191d7cc));
    *pcVar6 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 0xc);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_50 = 0;
  iStack_28 = 0;
  uStack_38 = 0;
  if (iVar8 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_48,iVar8,**(undefined4 **)(_UNK_0191e02c + 0x191d818));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar11 = *(undefined4 **)(_UNK_0191e030 + 0x191d834);
  piVar7 = *(int **)(_UNK_0191e034 + 0x191d83c);
  do {
    do {
      iVar1 = func_0x01710964(&uStack_38,*puVar11);
      iVar8 = iStack_2c;
      if (iVar1 == 0) goto LAB_0191db28;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar1 = func_0x026f7930(iVar8,0,0);
    } while (iVar1 != 0);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    piVar7 = *(int **)(iVar8 + 0x14);
    if (piVar7 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar7;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_0191e038 + 0x191d8a8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0191d8f0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e038 + 0x191d8a8),0);
LAB_0191d8f0:
    piVar7 = (int *)(*(code *)*puVar2)(piVar7,puVar2[1]);
    do {
      if (piVar7 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0191e03c + 0x191d920)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_0191d968;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e03c + 0x191d920),0);
LAB_0191d968:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (iVar1 == 0) goto LAB_0191da2c;
      if (piVar7 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar1 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0191e040 + 0x191d9a4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_0191d9ec;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e040 + 0x191d9a4),0);
LAB_0191d9ec:
      iVar1 = (*(code *)*puVar2)(piVar7,puVar2[1]);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
    } while ((*(int *)(iVar1 + 0x18) == 0) || (*(int *)(*(int *)(iVar1 + 0x18) + 8) != param_2));
    iStack_50 = iVar8;
LAB_0191da2c:
    if (piVar7 != (int *)0x0) {
      iVar8 = *piVar7;
      uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_0191e044 + 0x191da44)) {
            puVar2 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
            goto LAB_0191da8c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e044 + 0x191da44),0);
LAB_0191da8c:
      (*(code *)*puVar2)(piVar7,puVar2[1]);
    }
    piVar7 = *(int **)(_UNK_0191e048 + 0x191dac4);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar8 = func_0x026f7720(iStack_50,0,0);
  } while (iVar8 == 0);
LAB_0191db28:
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191e04c + 0x191db34));
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar9 = 0;
  iVar8 = func_0x026f7930(iStack_50,0,0);
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    if (iVar8 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_48,iVar8,**(undefined4 **)(_UNK_0191e050 + 0x191db94));
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    uStack_30 = uStack_40;
    iStack_2c = iStack_3c;
    puVar2 = *(undefined4 **)(_UNK_0191e054 + 0x191dbb0);
    do {
      do {
        iVar1 = func_0x01710964(&uStack_38,*puVar11);
        iVar8 = iStack_2c;
        if (iVar1 == 0) {
          iVar8 = 0;
          goto LAB_0191dc30;
        }
        if (*(int *)(**(int **)(_UNK_0191e058 + 0x191dbc8) + 0x74) == 0) {
          func_0x0165b5a4();
        }
        iVar1 = func_0x026f7930(iVar8,0,0);
      } while (iVar1 != 0);
      if (iVar8 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = func_0x0191be64(iVar8);
    } while ((iVar1 == 0) || (iVar1 = func_0x02b0b63c(iVar1,iStack_50,*puVar2), iVar1 == 0));
LAB_0191dc30:
    func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191e070 + 0x191dc3c));
    if (*(int *)(**(int **)(_UNK_0191e078 + 0x191dc50) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar9 = 0;
    iVar1 = func_0x026f7930(iVar8,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x18);
      if (iVar8 == 0) {
        func_0x0165b6e0();
      }
      uVar10 = *(undefined4 *)(iVar8 + 0xc);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = func_0x026f88d4(iVar1,uVar10,&iStack_28,**(undefined4 **)(_UNK_0191e07c + 0x191dcb4));
      iVar1 = iStack_28;
      if (iVar3 == 0) {
        piVar7 = *(int **)(iVar8 + 0x14);
        if (piVar7 != (int *)0x0) {
          iVar1 = *piVar7;
          uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(_UNK_0191e084 + 0x191dcf8)) {
                puVar11 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto LAB_0191dd40;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar4 != 0);
          }
          puVar11 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e084 + 0x191dcf8),0);
LAB_0191dd40:
          iVar1 = (*(code *)*puVar11)(piVar7,puVar11[1]);
          if (0 < iVar1) {
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            piVar7 = *(int **)(iVar8 + 0x14);
            if (piVar7 == (int *)0x0) {
              func_0x0165b6e0();
            }
            iVar8 = *piVar7;
            uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
            if (uVar4 != 0) {
              piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(_UNK_0191e088 + 0x191dd84)) {
                  puVar11 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xc0);
                  goto LAB_0191ddcc;
                }
                uVar4 = uVar4 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar4 != 0);
            }
            puVar11 = (undefined4 *)func_0x016cc99c(piVar7,**(int **)(_UNK_0191e088 + 0x191dd84),0);
LAB_0191ddcc:
            uVar9 = 0;
            iVar8 = (*(code *)*puVar11)(piVar7,0,puVar11[1]);
            if (iVar8 == 0) {
              func_0x0165b6e0();
            }
            if (*(int *)(iVar8 + 0x18) != 0) {
              uVar9 = *(undefined4 *)(*(int *)(iVar8 + 0x18) + 8);
            }
          }
        }
      }
      else {
        if (iStack_28 == 0) {
          func_0x0165b6e0();
        }
        uVar9 = *(undefined4 *)(iVar1 + 0x18);
      }
    }
  }
  return uVar9;
}


/* ItemChainManager.GetChildChainSpawnerSetId VA=0x190E08C | public int GetChildChainSpawnerSetId(int parentSpawnerSetId) { } */

/* WARNING: Removing unreachable block (ram,0x0191e42c) */
/* WARNING: Removing unreachable block (ram,0x0191e438) */
/* WARNING: Removing unreachable block (ram,0x0191e628) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ItemChainManager_GetChildChainSpawnerSetId_190E08C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_0191e850 + 0x191e0a8);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0191e854 + 0x191e0bc));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e858 + 0x191e0c8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e85c + 0x191e0d4));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e860 + 0x191e0e0));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e864 + 0x191e0ec));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e868 + 0x191e0f8));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e86c + 0x191e104));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e870 + 0x191e110));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e874 + 0x191e11c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e878 + 0x191e128));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e87c + 0x191e134));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e880 + 0x191e140));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e884 + 0x191e14c));
    func_0x0165b424(*(undefined4 *)(_UNK_0191e888 + 0x191e158));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0xc);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_50 = 0;
  iStack_28 = 0;
  uStack_38 = 0;
  if (iVar7 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_48,iVar7,**(undefined4 **)(_UNK_0191e88c + 0x191e19c));
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  puVar13 = *(undefined4 **)(_UNK_0191e890 + 0x191e1b8);
  piVar12 = *(int **)(_UNK_0191e894 + 0x191e1c0);
  piVar10 = *(int **)(_UNK_0191e898 + 0x191e1c8);
  do {
    do {
      iVar1 = func_0x01710964(&uStack_38,*puVar13);
      iVar7 = iStack_2c;
      if (iVar1 == 0) goto LAB_0191e4b4;
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar1 = func_0x026f7930(iVar7,0,0);
    } while (iVar1 != 0);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    piVar8 = *(int **)(iVar7 + 0x14);
    if (piVar8 == (int *)0x0) {
      func_0x0165b6e0();
    }
    iVar1 = *piVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_0191e278;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x016cc99c(piVar8,*piVar10,0);
LAB_0191e278:
    piVar10 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
    do {
      if (piVar10 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar1 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0191e89c + 0x191e2a8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_0191e2f0;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar10,**(int **)(_UNK_0191e89c + 0x191e2a8),0);
LAB_0191e2f0:
      iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      if (iVar1 == 0) goto LAB_0191e3b4;
      if (piVar10 == (int *)0x0) {
        func_0x0165b6e0();
      }
      iVar1 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0191e8a0 + 0x191e32c)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0xc0);
            goto LAB_0191e374;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar10,**(int **)(_UNK_0191e8a0 + 0x191e32c),0);
LAB_0191e374:
      iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
    } while ((*(int *)(iVar1 + 0x18) == 0) || (*(int *)(*(int *)(iVar1 + 0x18) + 8) != param_2));
    iStack_50 = iVar7;
LAB_0191e3b4:
    if (piVar10 != (int *)0x0) {
      iVar7 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar8[-1] == **(int **)(_UNK_0191e8a4 + 0x191e3cc)) {
            puVar2 = (undefined4 *)(iVar7 + *piVar8 * 8 + 0xc0);
            goto LAB_0191e414;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined4 *)func_0x016cc99c(piVar10,**(int **)(_UNK_0191e8a4 + 0x191e3cc),0);
LAB_0191e414:
      (*(code *)*puVar2)(piVar10,puVar2[1]);
    }
    if (*(int *)(*piVar12 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar7 = func_0x026f7720(iStack_50,0,0);
    piVar10 = *(int **)(_UNK_0191e8a8 + 0x191e474);
  } while (iVar7 == 0);
LAB_0191e4b4:
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_0191e8ac + 0x191e4c0));
  if (*(int *)(*piVar12 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar9 = 0;
  iVar7 = func_0x026f7930(iStack_50,0,0);
  if (iVar7 == 0) {
    if (iStack_50 == 0) {
      func_0x0165b6e0();
    }
    uVar14 = func_0x0191be64(iStack_50);
    iVar7 = (int)((ulonglong)uVar14 >> 0x20);
    iVar1 = (int)uVar14;
    if (iVar1 != 0) {
      iVar7 = *(int *)(iVar1 + 0xc);
    }
    if (iVar1 != 0 && iVar7 != 0) {
      uVar9 = 0;
      iVar7 = func_0x02b0af9c(iVar1,0,**(undefined4 **)(_UNK_0191e8b0 + 0x191e538));
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar1 = func_0x026f7930(iVar7,0,0);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (iVar7 == 0) {
          func_0x0165b6e0();
        }
        uVar11 = *(undefined4 *)(iVar7 + 0xc);
        if (iVar1 == 0) {
          func_0x0165b6e0();
        }
        iVar3 = func_0x026f88d4(iVar1,uVar11,&iStack_28,**(undefined4 **)(_UNK_0191e8b4 + 0x191e5a8)
                               );
        iVar1 = iStack_28;
        if (iVar3 == 0) {
          piVar10 = *(int **)(iVar7 + 0x14);
          if (piVar10 != (int *)0x0) {
            iVar1 = *piVar10;
            uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar4 != 0) {
              piVar12 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar12[-1] == **(int **)(_UNK_0191e8c8 + 0x191e5ec)) {
                  puVar13 = (undefined4 *)(iVar1 + *piVar12 * 8 + 0xc0);
                  goto LAB_0191e64c;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 2;
              } while (uVar4 != 0);
            }
            puVar13 = (undefined4 *)func_0x016cc99c(piVar10,**(int **)(_UNK_0191e8c8 + 0x191e5ec),0)
            ;
LAB_0191e64c:
            iVar1 = (*(code *)*puVar13)(piVar10,puVar13[1]);
            if (0 < iVar1) {
              if (iVar7 == 0) {
                func_0x0165b6e0();
              }
              piVar10 = *(int **)(iVar7 + 0x14);
              if (piVar10 == (int *)0x0) {
                func_0x0165b6e0();
              }
              iVar7 = *piVar10;
              uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
              if (uVar4 != 0) {
                piVar12 = (int *)(*(int *)(iVar7 + 0x58) + 4);
                do {
                  if (piVar12[-1] == **(int **)(_UNK_0191e8cc + 0x191e690)) {
                    puVar13 = (undefined4 *)(iVar7 + *piVar12 * 8 + 0xc0);
                    goto LAB_0191e6d8;
                  }
                  uVar4 = uVar4 - 1;
                  piVar12 = piVar12 + 2;
                } while (uVar4 != 0);
              }
              puVar13 = (undefined4 *)
                        func_0x016cc99c(piVar10,**(int **)(_UNK_0191e8cc + 0x191e690),0);
LAB_0191e6d8:
              uVar9 = 0;
              iVar7 = (*(code *)*puVar13)(piVar10,0,puVar13[1]);
              if (iVar7 == 0) {
                func_0x0165b6e0();
              }
              if (*(int *)(iVar7 + 0x18) != 0) {
                uVar9 = *(undefined4 *)(*(int *)(iVar7 + 0x18) + 8);
              }
            }
          }
        }
        else {
          if (iStack_28 == 0) {
            func_0x0165b6e0();
          }
          uVar9 = *(undefined4 *)(iVar1 + 0x18);
        }
      }
    }
  }
  return uVar9;
}


/* BoardPositionEntity.ctor VA=0x1912B00 | public void .ctor(Coordinate index, CellEntity cell, ItemEntity item) { } */

/* WARNING: Possible PIC construction at 0x01922b30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01922b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardPositionEntity_ctor_1912B00
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  
  func_0x026f769c(param_1,0);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  *puVar3 = param_4;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  if (*(int *)(_UNK_01621600 + 0x16215c0) != 0) {
    puVar2 = (uint *)(&UNK_0164584c + _UNK_01621604 + ((uint)puVar3 >> 0x11) * 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}


/* BoardPositionEntity.ctor VA=0x1912B48 | public void .ctor(Coordinate index) { } */

void BoardPositionEntity_ctor_1912B48(int param_1,undefined4 param_2,undefined4 param_3)

{
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}


/* BoardPositionEntity.ctor VA=0x1912B6C | public void .ctor() { } */

void BoardPositionEntity_ctor_1912B6C(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* BoardPositionEntity.Clear VA=0x1912B74 | public void Clear() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardPositionEntity_Clear_1912B74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  pcVar4 = (char *)(iRam01922d10 + 0x1922b8c);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(iRam01922d14 + 0x1922ba0));
    func_0x0165b424(*(undefined4 *)(iRam01922d18 + 0x1922bac));
    *pcVar4 = '\x01';
  }
  piVar5 = (int *)(param_1 + 0x14);
  if (*piVar5 != 0) {
    piVar6 = *(int **)(iRam01922d1c + 0x1922bd0);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar4 = (char *)(iRam01922d20 + 0x1922bec);
    if (*pcVar4 == '\0') {
      func_0x0165b424(*(undefined4 *)(iRam01922d24 + 0x1922c00));
      *pcVar4 = '\x01';
    }
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar6;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x194);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar7 = *piVar5;
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar7 == 0) {
      func_0x0165b6e0();
    }
    uVar8 = *(undefined4 *)(iVar7 + 0x14);
    if (*(int *)(**(int **)(iRam01922d28 + 0x1922c74) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar2 = func_0x01c55c94(param_1 + 8,0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    ItemChainManager_RemoveQuery_190B650(iVar1,uVar8,0,uVar2);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  func_0x0165b3c0(piVar5,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    func_0x0165b6e0();
    iVar1 = *(int *)(param_1 + 0x10);
    uRam00000018 = 0;
    if (iVar1 == 0) {
      uVar9 = func_0x0165b6e0();
      iVar1 = (int)((ulonglong)uVar9 >> 0x20);
      pcVar4 = (char *)(_UNK_01922e88 + 0x1922d48);
      if (*pcVar4 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_01922e8c + 0x1922d5c));
        func_0x0165b424(*(undefined4 *)(_UNK_01922e90 + 0x1922d68));
        *pcVar4 = '\x01';
      }
      piVar5 = (int *)((int)uVar9 + 0x14);
      *piVar5 = iVar1;
      func_0x0165b3c0(piVar5,iVar1);
      piVar5 = *(int **)(_UNK_01922e94 + 0x1922d8c);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      pcVar4 = (char *)(_UNK_01922e98 + 0x1922da8);
      if (*pcVar4 == '\0') {
        func_0x0165b424(*(undefined4 *)(_UNK_01922e9c + 0x1922dbc));
        *pcVar4 = '\x01';
      }
      iVar7 = *piVar5;
      if (*(int *)(iVar7 + 0x74) == 0) {
        func_0x0165b5a4();
        iVar7 = *piVar5;
      }
      iVar7 = **(int **)(iVar7 + 0x5c);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar7 + 0x194);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar7 + 0x44);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      iVar7 = *(int *)(iVar7 + 0x28);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      uVar8 = *(undefined4 *)(iVar1 + 0x14);
      if (*(int *)(**(int **)(_UNK_01922ea0 + 0x1922e30) + 0x74) == 0) {
        func_0x0165b5a4();
      }
      uVar2 = func_0x01c55c94((int)uVar9 + 8,0);
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        func_0x0165b6e0();
      }
      ItemChainManager_AddToQueryList_190E8D0(iVar7,uVar8,0,uVar2,uVar3,0);
      return;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  return;
}


/* BoardPositionEntity.SetItem VA=0x1912D2C | public void SetItem(ItemEntity itemEntity) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardPositionEntity_SetItem_1912D2C(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_01922e88 + 0x1922d48);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01922e8c + 0x1922d5c));
    func_0x0165b424(*(undefined4 *)(_UNK_01922e90 + 0x1922d68));
    *pcVar4 = '\x01';
  }
  *(int *)(param_1 + 0x14) = param_2;
  func_0x0165b3c0((int *)(param_1 + 0x14),param_2);
  piVar5 = *(int **)(_UNK_01922e94 + 0x1922d8c);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar4 = (char *)(_UNK_01922e98 + 0x1922da8);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01922e9c + 0x1922dbc));
    *pcVar4 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar5;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x194);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  if (*(int *)(**(int **)(_UNK_01922ea0 + 0x1922e30) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar2 = func_0x01c55c94(param_1 + 8,0);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  ItemChainManager_AddToQueryList_190E8D0(iVar1,uVar6,0,uVar2,uVar3,0);
  return;
}


/* BoardPositionEntity.ToString VA=0x1912EA4 | public override string ToString() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardPositionEntity_ToString_1912EA4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_019230e0 + 0x1922ebc);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019230e4 + 0x1922ed0));
    func_0x0165b424(*(undefined4 *)(_UNK_019230e8 + 0x1922edc));
    func_0x0165b424(*(undefined4 *)(_UNK_019230ec + 0x1922ee8));
    func_0x0165b424(*(undefined4 *)(_UNK_019230f0 + 0x1922ef4));
    func_0x0165b424(*(undefined4 *)(_UNK_019230f4 + 0x1922f00));
    func_0x0165b424(*(undefined4 *)(_UNK_019230f8 + 0x1922f0c));
    func_0x0165b424(*(undefined4 *)(_UNK_019230fc + 0x1922f18));
    func_0x0165b424(*(undefined4 *)(_UNK_01923100 + 0x1922f24));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)func_0x0165b6d4(**(undefined4 **)(_UNK_01923104 + 0x1922f38));
  func_0x026f778c(piVar1,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,**(undefined4 **)(_UNK_01923108 + 0x1922f64),0);
  if (*(int *)(**(int **)(_UNK_0192310c + 0x1922f78) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uStack_1c = *(undefined4 *)(param_1 + 8);
  puVar6 = *(undefined4 **)(_UNK_01923110 + 0x1922f98);
  uVar2 = func_0x0165b5ac(*puVar6,&uStack_1c);
  uStack_20 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = func_0x0165b5ac(*puVar6,&uStack_20);
  uVar2 = func_0x017282d4(**(undefined4 **)(_UNK_01923114 + 0x1922fd4),uVar2,uVar3,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar5 == (int *)0x0) {
    func_0x0165b6e0();
  }
  uVar2 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  puVar6 = *(undefined4 **)(_UNK_0192311c + 0x192303c);
  uVar2 = func_0x01701168(**(undefined4 **)(_UNK_01923118 + 0x1923030),uVar2,*puVar6,0);
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  func_0x026f77f0(piVar1,uVar2,0);
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
    uVar2 = func_0x01701168(**(undefined4 **)(_UNK_01923120 + 0x1923090),uVar2,*puVar6,0);
    if (piVar1 == (int *)0x0) {
      func_0x0165b6e0();
    }
    func_0x026f77f0(piVar1,uVar2,0);
  }
  if (piVar1 == (int *)0x0) {
    func_0x0165b6e0();
  }
  (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  return;
}


/* BoardData.GetBoardItemDataFallback VA=0x19132C0 | public BoardItemData GetBoardItemDataFallback(int setID, int level, bool skipWarning = False, bool fromEventBoard = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardData_GetBoardItemDataFallback_19132C0
          (undefined4 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iStack_24;
  uint uStack_20;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_01923550 + 0x19232e0);
  if (*pcVar6 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923554 + 0x19232f8));
    func_0x0165b424(*(undefined4 *)(_UNK_01923558 + 0x1923304));
    func_0x0165b424(*(undefined4 *)(_UNK_0192355c + 0x1923310));
    func_0x0165b424(*(undefined4 *)(_UNK_01923560 + 0x192331c));
    func_0x0165b424(*(undefined4 *)(_UNK_01923564 + 0x1923328));
    func_0x0165b424(*(undefined4 *)(_UNK_01923568 + 0x1923334));
    *pcVar6 = '\x01';
  }
  iVar1 = 0;
  iStack_1c = 0;
  if (999999 < (int)param_2) {
    uVar5 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar5 % 1000;
      iVar1 = uVar5 / 1000 + 1;
    }
    if (iVar1 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar1 != 0) {
      param_2 = (iVar1 * 1000 + param_2) - 1000;
    }
  }
  iVar1 = func_0x01923230(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x01923588(iVar1,param_2,&iStack_1c);
  iVar1 = iStack_1c;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    if (param_3 <= *(int *)(iVar1 + 0xc)) {
      uVar3 = func_0x02b0af9c(iVar1,param_3 + -1,**(undefined4 **)(_UNK_0192356c + 0x1923540));
      return uVar3;
    }
  }
  if (param_4 == 0) {
    puVar7 = *(undefined4 **)(_UNK_01923570 + 0x1923428);
    uStack_20 = param_2;
    uVar3 = func_0x0165b5ac(*puVar7,&uStack_20);
    iStack_24 = param_3;
    uVar4 = func_0x0165b5ac(*puVar7,&iStack_24);
    uVar3 = func_0x017282d4(**(undefined4 **)(_UNK_01923574 + 0x192345c),uVar3,uVar4,0);
    if (*(int *)(**(int **)(_UNK_01923578 + 0x1923470) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    func_0x018b45f0(uVar3,0);
  }
  uVar3 = 0;
  if (param_5 != 0) {
    piVar8 = *(int **)(_UNK_0192357c + 0x19234a4);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar6 = (char *)(_UNK_01923580 + 0x19234c0);
    if (*pcVar6 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01923584 + 0x19234d4));
      *pcVar6 = '\x01';
    }
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar8;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x44);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar3 = func_0x0192362c(iVar1,param_2,param_3,0);
  }
  return uVar3;
}


/* BoardData.GetBoardItemDictionaryHandler VA=0x1913230 | private BoardItemDictionaryHandler GetBoardItemDictionaryHandler() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetBoardItemDictionaryHandler_1913230(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_019232b4 + 0x1923244);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019232b8 + 0x1923258));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 0xfc);
  if (iVar1 != 0) {
    return iVar1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x70);
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  uVar2 = func_0x0165b6d4(**(undefined4 **)(_UNK_019232bc + 0x1923280));
  func_0x01923aa4(uVar2,uVar5,uVar4);
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  func_0x0165b3c0((int *)(param_1 + 0xfc),uVar2);
  return *(int *)(param_1 + 0xfc);
}


/* BoardData.GetInitialPositionData VA=0x1913C84 | public BoardPositionData GetInitialPositionData(int index) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetInitialPositionData_1913C84(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01923e50 + 0x1923ca0);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923e54 + 0x1923cb4));
    func_0x0165b424(*(undefined4 *)(_UNK_01923e58 + 0x1923cc0));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  iVar1 = func_0x01923b78(param_1);
  if (iVar1 == 0) {
    iVar1 = func_0x01bbac8c(0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = func_0x02b0af9c(iVar1,param_2,**(undefined4 **)(_UNK_01923e6c + 0x1923e20));
    iVar1 = func_0x01ccefb8(param_2,&uStack_1c,0);
    if (iVar1 != 0) {
      uVar2 = uStack_1c;
    }
  }
  else {
    piVar4 = *(int **)(_UNK_01923e5c + 0x1923cec);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar3 = (char *)(_UNK_01923e60 + 0x1923d08);
    if (*pcVar3 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01923e64 + 0x1923d1c));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar4;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x194);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = func_0x017f98f0(iVar5,0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = func_0x01ec5190(iVar1,uVar2,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x7c);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x6c);
    }
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar2 = func_0x02b0af9c(iVar1,param_2,**(undefined4 **)(_UNK_01923e68 + 0x1923dc8));
  }
  return uVar2;
}


/* BoardData.IsEvent VA=0x1913B78 | public bool IsEvent() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoardData_IsEvent_1913B78(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01923bdc + 0x1923b8c);
  if (*pcVar2 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923be0 + 0x1923ba0));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01923be4 + 0x1923bb4) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  (*(code *)&UNK_0571ebe0)(uVar1,0,0);
  return;
}


/* BoardData.GetLevelData VA=0x1913E70 | public LevelData GetLevelData() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetLevelData_1913E70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_01923ff0 + 0x1923e84);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923ff4 + 0x1923e98));
    func_0x0165b424(*(undefined4 *)(_UNK_01923ff8 + 0x1923ea4));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_01923ffc + 0x1923eb8) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar1 = func_0x026f7720(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01bbac8c(0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x30);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x14);
  }
  else {
    piVar5 = *(int **)(_UNK_01924000 + 0x1923ef0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    pcVar3 = (char *)(_UNK_01924004 + 0x1923f0c);
    if (*pcVar3 == '\0') {
      func_0x0165b424(*(undefined4 *)(_UNK_01924008 + 0x1923f20));
      *pcVar3 = '\x01';
    }
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x0165b5a4();
      iVar1 = *piVar5;
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = *(int *)(iVar1 + 0x194);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar6 = *(int *)(param_1 + 0x10);
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar6 == 0) {
      func_0x0165b6e0();
    }
    uVar4 = func_0x017f98f0(iVar6,0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = func_0x01ec5190(iVar1,uVar4,0);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    puVar2 = (undefined4 *)(iVar1 + 0x5c);
  }
  return *puVar2;
}


/* BoardData.GetFirstCellPosition VA=0x191400C | public Vector2 GetFirstCellPosition() { } */

void BoardData_GetFirstCellPosition_191400C(undefined4 *param_1)

{
  *param_1 = 0xc0400000;
  param_1[1] = 0x40600000;
  return;
}


/* BoardData.GetListPosition VA=0x1914028 | public int GetListPosition(Coordinate coordinate) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetListPosition_1914028(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01924088 + 0x1924044);
  if (*pcVar1 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0192408c + 0x1924058));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01924090 + 0x192406c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  return *(int *)(param_1 + 0x20) * param_2 + param_3;
}


/* BoardData.GetBoardItemSetItems VA=0x1914094 | public List<BoardItemData> GetBoardItemSetItems(int setID) { } */

undefined4 BoardData_GetBoardItemSetItems_1914094(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_14;
  
  iVar4 = 0;
  iStack_14 = 0;
  iVar1 = BoardData_GetBoardItemDictionaryHandler_1913230();
  if (999999 < (int)param_2) {
    uVar2 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar2 % 1000;
      iVar4 = uVar2 / 1000 + 1;
    }
    if (iVar4 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar4 != 0) {
      param_2 = (iVar4 * 1000 + param_2) - 1000;
    }
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar4 = func_0x01923588(iVar1,param_2,&iStack_14);
  iVar1 = iStack_14;
  uVar3 = 0;
  if (iVar4 != 0) {
    if (iStack_14 == 0) {
      func_0x0165b6e0(0);
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar3;
}


/* BoardData.GetAllBoardDataItems VA=0x1914164 | public List<BoardItemData> GetAllBoardDataItems() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetAllBoardDataItems_1914164(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_019243c8 + 0x192417c);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019243cc + 0x1924190));
    func_0x0165b424(*(undefined4 *)(_UNK_019243d0 + 0x192419c));
    func_0x0165b424(*(undefined4 *)(_UNK_019243d4 + 0x19241a8));
    func_0x0165b424(*(undefined4 *)(_UNK_019243d8 + 0x19241b4));
    func_0x0165b424(*(undefined4 *)(_UNK_019243dc + 0x19241c0));
    func_0x0165b424(*(undefined4 *)(_UNK_019243e0 + 0x19241cc));
    func_0x0165b424(*(undefined4 *)(_UNK_019243e4 + 0x19241d8));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iStack_3c = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_019243e8 + 0x19241f8));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_019243ec + 0x1924214));
  iVar2 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x01924408(iVar2);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_50,iVar2,**(undefined4 **)(_UNK_019243f0 + 0x1924260));
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  iStack_2c = iStack_44;
  puVar6 = *(undefined4 **)(_UNK_019243f4 + 0x1924280);
  puVar7 = *(undefined4 **)(_UNK_019243f8 + 0x1924288);
  while (iVar3 = func_0x01710964(&uStack_38,*puVar6), iVar2 = iStack_2c, iVar3 != 0) {
    iVar3 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    uVar5 = *(undefined4 *)(iVar2 + 0xc);
    if (iVar3 == 0) {
      func_0x0165b6e0();
    }
    iVar3 = func_0x01923588(iVar3,uVar5,&iStack_3c);
    iVar2 = iStack_3c;
    if (iVar3 != 0) {
      if (iStack_3c == 0) {
        func_0x0165b6e0();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      func_0x02b0b494(iVar1,uVar5,*puVar7);
    }
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01924400 + 0x192431c));
  return iVar1;
}


/* BoardData.GetBoardItemSetItems VA=0x19146A0 | public List<BoardItemData> GetBoardItemSetItems(Type[] types) { } */

/* WARNING: Removing unreachable block (ram,0x01924964) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetBoardItemSetItems_19146A0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_01924a94 + 0x19246bc);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01924a98 + 0x19246d0));
    func_0x0165b424(*(undefined4 *)(_UNK_01924a9c + 0x19246dc));
    func_0x0165b424(*(undefined4 *)(_UNK_01924aa0 + 0x19246e8));
    func_0x0165b424(*(undefined4 *)(_UNK_01924aa4 + 0x19246f4));
    func_0x0165b424(*(undefined4 *)(_UNK_01924aa8 + 0x1924700));
    func_0x0165b424(*(undefined4 *)(_UNK_01924aac + 0x192470c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ab0 + 0x1924718));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ab4 + 0x1924724));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ab8 + 0x1924730));
    func_0x0165b424(*(undefined4 *)(_UNK_01924abc + 0x192473c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ac0 + 0x1924748));
    *pcVar4 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01924ac4 + 0x1924764));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_01924ac8 + 0x1924784));
  iVar2 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = func_0x01924408(iVar2);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_58,iVar2,**(undefined4 **)(_UNK_01924acc + 0x19247d0));
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  iStack_2c = iStack_4c;
  while (iVar3 = func_0x01710964(&uStack_38,**(undefined4 **)(_UNK_01924ae0 + 0x19247f4)),
        iVar2 = iStack_2c, iVar3 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0bf88(&uStack_58,iVar2,**(undefined4 **)(_UNK_01924ad0 + 0x1924830));
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    iStack_3c = iStack_4c;
    while (iVar3 = func_0x01710964(&uStack_48,**(undefined4 **)(_UNK_01924ad4 + 0x1924854)),
          iVar2 = iStack_3c, iVar3 != 0) {
      uVar6 = 0;
      while( true ) {
        if (param_2 == 0) {
          func_0x0165b6e0();
        }
        if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar6) break;
        if (*(uint *)(param_2 + 0xc) <= uVar6) {
          func_0x0165b6e4();
        }
        piVar5 = *(int **)(param_2 + 0x10 + uVar6 * 4);
        if (piVar5 == (int *)0x0) {
          func_0x0165b6e0();
        }
        iVar3 = (**(code **)(*piVar5 + 0x480))(piVar5,iVar2,*(undefined4 *)(*piVar5 + 0x484));
        if (iVar3 != 0) {
          if (iVar1 == 0) {
            func_0x0165b6e0();
          }
          iVar3 = *(int *)(iVar1 + 8);
          uVar7 = *(uint *)(iVar1 + 0xc);
          piVar5 = *(int **)(_UNK_01924ad8 + 0x19248ec);
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
          iVar8 = *piVar5;
          if (iVar3 == 0) {
            func_0x0165b6e0();
          }
          if (uVar7 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar1 + 0xc) = uVar7 + 1;
            piVar5 = (int *)(iVar3 + uVar7 * 4 + 0x10);
            *piVar5 = iVar2;
            func_0x0165b3c0(piVar5,iVar2);
          }
          else {
            func_0x02b0b274(iVar1,iVar2,
                            *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
        }
        uVar6 = uVar6 + 1;
      }
    }
    func_0x0172cd54(&uStack_48,**(undefined4 **)(_UNK_01924adc + 0x1924954));
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01924ae4 + 0x19249b4));
  return iVar1;
}


/* BoardData.GetBoardItemSet VA=0x1914AF4 | public BoardItemSetData GetBoardItemSet(int setID, bool checkBothGroups = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetBoardItemSet_1914AF4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  pcVar3 = (char *)(_UNK_01924cec + 0x1924b10);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01924cf0 + 0x1924b24));
    func_0x0165b424(*(undefined4 *)(_UNK_01924cf4 + 0x1924b30));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01924cf8 + 0x1924b44);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar3 = (char *)(_UNK_01924cfc + 0x1924b60);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01924d00 + 0x1924b74));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar1 = *piVar4;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x194);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x44);
  uVar5 = param_2;
  if (0x182b6 < param_2 - 0x3e9) {
    if ((int)param_2 < 1000000) {
      uVar5 = (int)param_2 % 1000;
    }
    else {
      uVar5 = (int)(param_2 - 1000000) % 1000;
    }
  }
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = ItemChainManager_FindActiveLinkDataByDefaultSetID_1906530(iVar1,uVar5);
  piVar4 = *(int **)(_UNK_01924d04 + 0x1924c54);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar2 = func_0x026f7720(iVar1,0,0);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar1 = func_0x01922730(iVar1,param_2);
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar1 = func_0x026f7720(uVar6,0,0);
      if (iVar1 != 0) {
        return uVar6;
      }
    }
  }
  iVar1 = 0;
  if (999999 < (int)param_2) {
    uVar5 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar5 % 1000;
      iVar1 = uVar5 / 1000 + 1;
    }
    if (iVar1 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar1 != 0) {
      param_2 = (iVar1 * 1000 + param_2) - 1000;
    }
  }
  iVar1 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (param_3 == 0) {
    func_0x01923588(iVar1,param_2,&stack0xffffffec);
  }
  else {
    func_0x01924d08();
  }
  return 0;
}


/* BoardData.GetBoardItemSetFallback VA=0x190B578 | public BoardItemSetData GetBoardItemSetFallback(int setID, bool checkBothGroups = False) { } */

undefined4 BoardData_GetBoardItemSetFallback_190B578(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_14;
  
  iVar1 = 0;
  uStack_14 = 0;
  if (999999 < (int)param_2) {
    uVar2 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
    }
    else {
      param_2 = uVar2 % 1000;
      iVar1 = uVar2 / 1000 + 1;
    }
    if (iVar1 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar1 != 0) {
      param_2 = (iVar1 * 1000 + param_2) - 1000;
    }
  }
  iVar1 = BoardData_GetBoardItemDictionaryHandler_1913230();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  if (param_3 == 0) {
    iVar1 = func_0x01923588(iVar1,param_2,&uStack_14);
  }
  else {
    iVar1 = func_0x01924d08();
  }
  if (iVar1 == 0) {
    uStack_14 = 0;
  }
  return uStack_14;
}


/* BoardData.GetBoosterItemData VA=0x1914DD4 | public BoosterItemData GetBoosterItemData(int ID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetBoosterItemData_1914DD4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01924eb4 + 0x1924dec);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01924eb8 + 0x1924e00));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ebc + 0x1924e0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ec0 + 0x1924e18));
    func_0x0165b424(*(undefined4 *)(_UNK_01924ec4 + 0x1924e24));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01924ec8 + 0x1924e38));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  puVar2 = *(undefined4 **)(_UNK_01924ecc + 0x1924e60);
  iVar4 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar3 = func_0x0165b6d4(*puVar2);
  func_0x02e51fac(iVar3,iVar1,**(undefined4 **)(_UNK_01924ed0 + 0x1924e84),0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  if (iVar3 == 0) {
    func_0x048c64dc(8,0,**(undefined4 **)(_UNK_01924ed4 + 0x1924ea8));
  }
  if (0 < *(int *)(iVar4 + 0xc)) {
    iVar1 = 4;
    do {
      iVar6 = *(int *)(iVar4 + 8);
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      if (*(uint *)(iVar6 + 0xc) <= iVar1 - 4U) {
        func_0x0165b6e4();
      }
      uVar7 = *(undefined4 *)(iVar6 + iVar1 * 4);
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar7,*(undefined4 *)(iVar3 + 0x14));
      if (iVar6 != 0) {
        iVar3 = *(int *)(iVar4 + 8);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        if (*(uint *)(iVar3 + 0xc) <= iVar1 - 4U) {
          func_0x0165b6e4();
        }
        return *(undefined4 *)(iVar3 + iVar1 * 4);
      }
      iVar6 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar6 < *(int *)(iVar4 + 0xc));
  }
  return 0;
}


/* BoardData.GetBoosterItemData VA=0x1914EE0 | public BoosterItemData GetBoosterItemData(BoosterType boosterType) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetBoosterItemData_1914EE0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_01924fc0 + 0x1924ef8);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01924fc4 + 0x1924f0c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924fc8 + 0x1924f18));
    func_0x0165b424(*(undefined4 *)(_UNK_01924fcc + 0x1924f24));
    func_0x0165b424(*(undefined4 *)(_UNK_01924fd0 + 0x1924f30));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01924fd4 + 0x1924f44));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  puVar2 = *(undefined4 **)(_UNK_01924fd8 + 0x1924f6c);
  iVar4 = *(int *)(param_1 + 0x68);
  *(undefined4 *)(iVar1 + 8) = param_2;
  iVar3 = func_0x0165b6d4(*puVar2);
  func_0x02e51fac(iVar3,iVar1,**(undefined4 **)(_UNK_01924fdc + 0x1924f90),0);
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  if (iVar3 == 0) {
    func_0x048c64dc(8,0,**(undefined4 **)(_UNK_01924fe0 + 0x1924fb4));
  }
  if (0 < *(int *)(iVar4 + 0xc)) {
    iVar1 = 4;
    do {
      iVar6 = *(int *)(iVar4 + 8);
      if (iVar6 == 0) {
        func_0x0165b6e0();
      }
      if (*(uint *)(iVar6 + 0xc) <= iVar1 - 4U) {
        func_0x0165b6e4();
      }
      uVar7 = *(undefined4 *)(iVar6 + iVar1 * 4);
      if (iVar3 == 0) {
        func_0x0165b6e0();
      }
      iVar6 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),uVar7,*(undefined4 *)(iVar3 + 0x14));
      if (iVar6 != 0) {
        iVar3 = *(int *)(iVar4 + 8);
        if (iVar3 == 0) {
          func_0x0165b6e0();
        }
        if (*(uint *)(iVar3 + 0xc) <= iVar1 - 4U) {
          func_0x0165b6e4();
        }
        return *(undefined4 *)(iVar3 + iVar1 * 4);
      }
      iVar6 = iVar1 + -3;
      iVar1 = iVar1 + 1;
    } while (iVar6 < *(int *)(iVar4 + 0xc));
  }
  return 0;
}


/* BoardData.GetBoosterSprite VA=0x1914FEC | public Sprite GetBoosterSprite(BoosterType boosterType) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetBoosterSprite_1914FEC(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01925080 + 0x1925004);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925084 + 0x1925018));
    *pcVar4 = '\x01';
  }
  iVar1 = BoardData_GetBoosterItemData_1914EE0(param_1,param_2);
  if (*(int *)(**(int **)(_UNK_01925088 + 0x192503c) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  uVar3 = 0;
  iVar2 = func_0x026f7930(iVar1,0,0);
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x28);
  }
  return uVar3;
}


/* BoardData.GetItemPrice VA=0x191508C | public int GetItemPrice(ItemEntity item) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetItemPrice_191508C(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01925210 + 0x19250a4);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925214 + 0x19250b8));
    func_0x0165b424(*(undefined4 *)(_UNK_01925218 + 0x19250c4));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
    func_0x0165b6e0();
  }
  uVar4 = *(uint *)(param_2 + 0x14);
  if (999999 < (int)uVar4) {
    uVar1 = uVar4 - 0xf4628;
    if ((int)uVar4 < 0xf4628) {
      uVar4 = uVar4 - 1000000;
      iVar2 = 0;
    }
    else {
      uVar4 = uVar1 % 1000;
      iVar2 = uVar1 / 1000 + 1;
    }
    if (iVar2 != 0) {
      uVar4 = uVar4 + 100000;
    }
    if (iVar2 != 0) {
      uVar4 = (iVar2 * 1000 + uVar4) - 1000;
    }
  }
  iVar2 = BoardData_GetBoardItemSetFallback_190B578(param_1,uVar4,0);
  piVar6 = *(int **)(_UNK_0192521c + 0x1925168);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar3 = func_0x026f7930(iVar2,0,0);
  if (iVar3 == 0) {
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x0165b5a4();
    }
    iVar3 = func_0x026f7930(iVar2,0,0);
    if (iVar3 == 0) {
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = *(int *)(param_2 + 0x10);
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar4 = iVar3 - 1;
      if (*(uint *)(iVar2 + 0xc) <= uVar4) {
        func_0x048d8a1c(0,uVar4,**(undefined4 **)(_UNK_01925220 + 0x1925204));
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar4) {
        func_0x0165b6e4();
      }
      return *(undefined4 *)(iVar2 + uVar4 * 4 + 0x10);
    }
  }
  return 0xffffffff;
}


/* BoardData.GetItemBubbleData VA=0x1915224 | public Tuple<int, int> GetItemBubbleData(ItemInfo itemInfo, out BalanceBubbleConfigModel.BalanceBubbleItemModel bubbleData) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetItemBubbleData_1915224
              (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_019253f0 + 0x1925244);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_019253f4 + 0x192525c));
    func_0x0165b424(*(undefined4 *)(_UNK_019253f8 + 0x1925268));
    func_0x0165b424(*(undefined4 *)(_UNK_019253fc + 0x1925274));
    func_0x0165b424(*(undefined4 *)(_UNK_01925400 + 0x1925280));
    func_0x0165b424(*(undefined4 *)(_UNK_01925404 + 0x192528c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  uStack_24 = 0;
  iVar1 = func_0x01bbae8c(param_2,param_3,&uStack_24,0);
  *param_4 = uStack_24;
  func_0x0165b3c0(param_4);
  uVar3 = param_2;
  if (999999 < (int)param_2) {
    if ((int)param_2 < 0xf4628) {
      uVar3 = param_2 - 1000000;
    }
    else {
      uVar3 = (param_2 - 0xf4628) % 1000;
      iVar5 = (param_2 - 0xf4628) / 1000 + 1;
    }
    if (iVar5 != 0) {
      uVar3 = uVar3 + 100000;
    }
    if (iVar5 != 0) {
      uVar3 = (iVar5 * 1000 + uVar3) - 1000;
    }
  }
  uVar2 = BoardData_GetBoardItemSetFallback_190B578(param_1,uVar3,0);
  if (*(int *)(**(int **)(_UNK_01925408 + 0x1925350) + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar5 = func_0x026f7930(uVar2,0,0);
  if (iVar5 == 0) {
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    iVar5 = *(int *)(iVar1 + 8);
    bVar6 = iVar5 != -1;
    if (bVar6) {
      iVar5 = *(int *)(iVar1 + 0xc);
    }
    if ((bVar6 && iVar5 != -1) && (iVar5 = func_0x01925414(param_1,param_2,param_3), iVar5 == 0)) {
      return iVar1;
    }
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0192540c + 0x19253a4));
  func_0x031dd268(iVar1,0xffffffff,0xffffffff,**(undefined4 **)(_UNK_01925410 + 0x19253c0));
  return iVar1;
}


/* BoardData.GetItemBubbleData VA=0x1915508 | public Tuple<int, int> GetItemBubbleData(ItemEntity item, out BalanceBubbleConfigModel.BalanceBubbleItemModel bubbleData) { } */

void BoardData_GetItemBubbleData_1915508(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  func_0x018dcb18(&uStack_18,param_2,0,0);
  BoardData_GetItemBubbleData_1915224(param_1,uStack_18,uStack_14,param_3);
  return;
}


/* BoardData.GetItemJellyPrice VA=0x1915544 | public int GetItemJellyPrice(ItemEntity item) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 BoardData_GetItemJellyPrice_1915544(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_01925758 + 0x1925560);
  if (*pcVar3 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0192575c + 0x1925574));
    func_0x0165b424(*(undefined4 *)(_UNK_01925760 + 0x1925580));
    func_0x0165b424(*(undefined4 *)(_UNK_01925764 + 0x192558c));
    func_0x0165b424(*(undefined4 *)(_UNK_01925768 + 0x1925598));
    *pcVar3 = '\x01';
  }
  iStack_1c = 0;
  iVar1 = func_0x01bbac8c(0);
  iVar2 = iVar1;
  if (iVar1 == 0) {
    iVar2 = func_0x0165b6e0();
  }
  iVar1 = *(int *)(iVar1 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  if ((iVar1 != 0 && iVar2 != 0) && (iVar2 = BoardData_IsEvent_1913B78(param_1), iVar2 == 0)) {
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = BoardData_GetListPosition_1914028
                      (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    iVar4 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x0165b6e0();
    }
    if (iVar2 < *(int *)(iVar4 + 0xc)) {
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x0165b6e0();
      }
      iVar2 = func_0x02b0af9c(iVar1,iVar2,**(undefined4 **)(_UNK_0192576c + 0x1925660));
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      if (*(char *)(iVar2 + 0x10) != '\0') {
        return *(undefined4 *)(iVar2 + 0x14);
      }
    }
    iVar2 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
  }
  else {
    iVar2 = BoardData_GetBoardItemDictionaryHandler_1913230(param_1);
    if (param_2 == 0) {
      func_0x0165b6e0();
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar1 = func_0x01923588(iVar2,uVar5,&iStack_1c);
  iVar2 = iStack_1c;
  uVar5 = 0;
  if (iVar1 != 0) {
    if (iStack_1c == 0) {
      func_0x0165b6e0();
    }
    iVar2 = *(int *)(iVar2 + 0x20);
    if (*(int *)(**(int **)(_UNK_01925770 + 0x19256e0) + 0x74) == 0) {
      func_0x0165b5a4();
    }
    uVar5 = 0;
    iVar1 = func_0x026f7930(iVar2,0,0);
    if (iVar1 == 0) {
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar1 = *(int *)(param_2 + 0x10);
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar5 = func_0x02ad71f8(iVar2,iVar1 + -1,**(undefined4 **)(_UNK_01925774 + 0x1925740));
    }
  }
  return uVar5;
}


/* BoardData.GetBoardItemData VA=0x1915778 | public BoardItemData GetBoardItemData(ItemInfo itemInfo, bool skipWarning = False) { } */

void BoardData_GetBoardItemData_1915778(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (999999 < (int)param_2) {
    uVar1 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
      iVar2 = 0;
    }
    else {
      param_2 = uVar1 % 1000;
      iVar2 = uVar1 / 1000 + 1;
    }
    if (iVar2 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar2 != 0) {
      param_2 = (iVar2 * 1000 + param_2) - 1000;
    }
  }
  func_0x0192362c(param_1,param_2);
  return;
}


/* BoardData.GetBoardItemData VA=0x191362C | public BoardItemData GetBoardItemData(int setID, int level, bool skipWarning = False) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
BoardData_GetBoardItemData_191362C
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_01923a54 + 0x192364c);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923a58 + 0x1923664));
    func_0x0165b424(*(undefined4 *)(_UNK_01923a5c + 0x1923670));
    func_0x0165b424(*(undefined4 *)(_UNK_01923a60 + 0x192367c));
    func_0x0165b424(*(undefined4 *)(_UNK_01923a64 + 0x1923688));
    func_0x0165b424(*(undefined4 *)(_UNK_01923a68 + 0x1923694));
    func_0x0165b424(*(undefined4 *)(_UNK_01923a6c + 0x19236a0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_01923a70 + 0x19236b4));
  func_0x026f769c(iVar1,0);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  piVar6 = *(int **)(_UNK_01923a74 + 0x19236dc);
  *(undefined4 *)(iVar1 + 8) = param_3;
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  pcVar4 = (char *)(_UNK_01923a78 + 0x19236fc);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01923a7c + 0x1923710));
    *pcVar4 = '\x01';
  }
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x0165b5a4();
    iVar2 = *piVar6;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = *(int *)(iVar2 + 0x194);
  if (iVar2 == 0) {
    func_0x0165b6e0();
  }
  iVar5 = *(int *)(iVar2 + 0x44);
  iVar2 = param_2;
  if (0x182b6 < param_2 - 0x3e9U) {
    if (param_2 < 1000000) {
      iVar2 = param_2 % 1000;
    }
    else {
      iVar2 = (param_2 + -1000000) % 1000;
    }
  }
  if (iVar5 == 0) {
    func_0x0165b6e0();
  }
  iVar2 = ItemChainManager_FindActiveLinkDataByDefaultSetID_1906530(iVar5,iVar2);
  piVar6 = *(int **)(_UNK_01923a80 + 0x19237e8);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    func_0x0165b5a4();
  }
  iVar5 = func_0x026f7720(iVar2,0,0);
  if (iVar5 != 0) {
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    iVar2 = func_0x01922730(iVar2,param_2);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      iVar2 = *(int *)(iVar2 + 0x14);
      uVar3 = func_0x0165b6d4(**(undefined4 **)(_UNK_01923a84 + 0x1923850));
      func_0x02e51fac(uVar3,iVar1,**(undefined4 **)(_UNK_01923a88 + 0x1923864),0);
      if (iVar2 == 0) {
        func_0x0165b6e0();
      }
      uVar3 = func_0x02b0b99c(iVar2,uVar3,**(undefined4 **)(_UNK_01923a8c + 0x192388c));
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x0165b5a4();
      }
      iVar2 = func_0x026f7720(uVar3,0,0);
      if (iVar2 != 0) {
        return uVar3;
      }
    }
  }
  uVar3 = BoardData_GetBoardItemDataFallback_19132C0
                    (param_1,param_2,*(undefined4 *)(iVar1 + 8),param_4,0);
  return uVar3;
}


/* BoardData.GetBoardItemDataFallback VA=0x1915804 | public BoardItemData GetBoardItemDataFallback(ItemInfo itemInfo, bool skipWarning = False) { } */

void BoardData_GetBoardItemDataFallback_1915804
               (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  
  if (999999 < (int)param_2) {
    uVar1 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
      iVar2 = 0;
    }
    else {
      param_2 = uVar1 % 1000;
      iVar2 = uVar1 / 1000 + 1;
    }
    if (iVar2 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar2 != 0) {
      param_2 = (iVar2 * 1000 + param_2) - 1000;
    }
  }
  BoardData_GetBoardItemDataFallback_19132C0(param_1,param_2,param_3,param_4,0);
  return;
}


/* BoardData.IsItemMaxLevel VA=0x1915414 | public bool IsItemMaxLevel(int setID, int level) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardData_IsItemMaxLevel_1915414(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01925500 + 0x1925430);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925504 + 0x1925444));
    *pcVar4 = '\x01';
  }
  if (999999 < (int)param_2) {
    uVar1 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
      iVar2 = 0;
    }
    else {
      param_2 = uVar1 % 1000;
      iVar2 = uVar1 / 1000 + 1;
    }
    if (iVar2 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar2 != 0) {
      param_2 = (iVar2 * 1000 + param_2) - 1000;
    }
  }
  bVar3 = false;
  iVar2 = BoardData_GetBoardItemSetFallback_190B578(param_1,param_2,0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    bVar3 = *(int *)(iVar2 + 0xc) == param_3;
  }
  return bVar3;
}


/* BoardData.IsItemMaxLevel VA=0x1915B34 | public bool IsItemMaxLevel(ItemInfo itemInfo) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool BoardData_IsItemMaxLevel_1915B34(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01925c20 + 0x1925b50);
  if (*pcVar4 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_01925c24 + 0x1925b64));
    *pcVar4 = '\x01';
  }
  if (999999 < (int)param_2) {
    uVar1 = param_2 - 0xf4628;
    if ((int)param_2 < 0xf4628) {
      param_2 = param_2 - 1000000;
      iVar2 = 0;
    }
    else {
      param_2 = uVar1 % 1000;
      iVar2 = uVar1 / 1000 + 1;
    }
    if (iVar2 != 0) {
      param_2 = param_2 + 100000;
    }
    if (iVar2 != 0) {
      param_2 = (iVar2 * 1000 + param_2) - 1000;
    }
  }
  bVar3 = false;
  iVar2 = BoardData_GetBoardItemSetFallback_190B578(param_1,param_2,0);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 0x14);
    if (iVar2 == 0) {
      func_0x0165b6e0();
    }
    bVar3 = *(int *)(iVar2 + 0xc) == param_3;
  }
  return bVar3;
}


/* BoardData.IsCollectable VA=0x1915C28 | public bool IsCollectable(int setID) { } */

bool BoardData_IsCollectable_1915C28(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xcc);
  bVar1 = true;
  bVar3 = iVar2 != param_2;
  if (bVar3) {
    iVar2 = *(int *)(param_1 + 0xd0);
  }
  if (bVar3 && iVar2 != param_2) {
    bVar1 = *(int *)(param_1 + 0xd4) == param_2;
  }
  return bVar1;
}


/* BoardData.GetAllSets VA=0x1915C54 | public List<BoardItemSetData> GetAllSets() { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int BoardData_GetAllSets_1915C54(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int aiStack_24 [2];
  
  iVar4 = BoardData_GetBoardItemDictionaryHandler_1913230();
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  pcVar5 = (char *)(_UNK_01924658 + 0x1924420);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_0192465c + 0x1924434));
    func_0x0165b424(*(undefined4 *)(_UNK_01924660 + 0x1924440));
    func_0x0165b424(*(undefined4 *)(_UNK_01924664 + 0x192444c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924668 + 0x1924458));
    func_0x0165b424(*(undefined4 *)(_UNK_0192466c + 0x1924464));
    func_0x0165b424(*(undefined4 *)(_UNK_01924670 + 0x1924470));
    func_0x0165b424(*(undefined4 *)(_UNK_01924674 + 0x192447c));
    func_0x0165b424(*(undefined4 *)(_UNK_01924678 + 0x1924488));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_24[0] = 0;
  uStack_38 = 0;
  iVar1 = func_0x0165b6d4(**(undefined4 **)(_UNK_0192467c + 0x19244a4));
  func_0x02b0a9f0(iVar1,**(undefined4 **)(_UNK_01924680 + 0x19244c4));
  func_0x01925dd4(iVar4,aiStack_24);
  iVar4 = aiStack_24[0];
  if (aiStack_24[0] == 0) {
    func_0x0165b6e0();
  }
  puVar7 = *(undefined4 **)(_UNK_01924684 + 0x19244f8);
  uVar2 = func_0x02fcf37c(iVar4,*puVar7);
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  puVar8 = *(undefined4 **)(_UNK_01924688 + 0x1924520);
  func_0x02b0b494(iVar1,uVar2,*puVar8);
  iVar4 = func_0x01925f3c();
  if (iVar4 == 0) {
    func_0x0165b6e0();
  }
  func_0x02b0bf88(&uStack_38,iVar4,**(undefined4 **)(_UNK_0192468c + 0x192454c));
  puVar6 = *(undefined4 **)(_UNK_01924690 + 0x1924560);
  while (iVar3 = func_0x01710964(&uStack_38,*puVar6), iVar4 = iStack_2c, iVar3 != 0) {
    if (iStack_2c == 0) {
      func_0x0165b6e0();
    }
    uVar2 = func_0x02fcf37c(iVar4,*puVar7);
    if (iVar1 == 0) {
      func_0x0165b6e0();
    }
    func_0x02b0b494(iVar1,uVar2,*puVar8);
  }
  func_0x0172cd54(&uStack_38,**(undefined4 **)(_UNK_01924694 + 0x19245bc));
  return iVar1;
}


/* BoardData.GetEnergyUpdateNextMs VA=0x1915C78 | public long GetEnergyUpdateNextMs() { } */

void BoardData_GetEnergyUpdateNextMs_1915C78(int param_1)

{
  func_0x016fdbc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x38));
  return;
}


/* BoardData.GetMaxUserEnergy VA=0x1915C98 | public int GetMaxUserEnergy() { } */

undefined4 BoardData_GetMaxUserEnergy_1915C98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  int iVar4;
  undefined4 unaff_lr;
  
  iVar1 = BoardData_IsEvent_1913B78();
  if (iVar1 == 0) {
    return *(undefined4 *)(param_1 + 0x38);
  }
  iVar4 = *(int *)(param_1 + 0x10);
  uVar2 = extraout_r2;
  uVar3 = extraout_r3;
  if (iVar4 == 0) {
    func_0x0165b6e0(iVar1);
    uVar2 = extraout_r2_00;
    uVar3 = extraout_r3_00;
  }
  iVar1 = func_0x017f9924(iVar4,0,uVar2,uVar3,unaff_r4,unaff_lr);
  if (iVar1 == 0) {
    return 100;
  }
  iVar1 = func_0x017f9924();
  if (iVar1 == 0) {
    func_0x0165b6e0();
  }
  return *(undefined4 *)(iVar1 + 0x58);
}


/* BoardData.IsSpecialTaskItem VA=0x1915CD0 | public bool IsSpecialTaskItem(int setID) { } */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte BoardData_IsSpecialTaskItem_1915CD0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar4 = BoardData_IsEvent_1913B78();
  if ((iVar4 != 0) || (iVar4 = *(int *)(param_1 + 0xe0), iVar4 == 0)) {
    return 0;
  }
  pcVar5 = (char *)(_UNK_018717f4 + 0x1871670);
  if (*pcVar5 == '\0') {
    func_0x0165b424(*(undefined4 *)(_UNK_018717f8 + 0x1871684),param_2,0);
    func_0x0165b424(*(undefined4 *)(_UNK_018717fc + 0x1871690));
    func_0x0165b424(*(undefined4 *)(_UNK_01871800 + 0x187169c));
    func_0x0165b424(*(undefined4 *)(_UNK_01871804 + 0x18716a8));
    *pcVar5 = '\x01';
  }
  iVar4 = *(int *)(iVar4 + 8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (iVar4 == 0) {
    bVar2 = 0;
  }
  else {
    func_0x02b0bf88(&uStack_30,iVar4,**(undefined4 **)(_UNK_01871808 + 0x18716d8));
    bVar2 = 1;
    iVar4 = 6;
    puVar6 = *(undefined4 **)(_UNK_0187180c + 0x18716f4);
    do {
      iVar3 = func_0x01710964(&uStack_30,*puVar6);
      iVar1 = iStack_24;
      if (iVar3 == 0) {
        bVar2 = 0;
        iVar4 = 7;
        break;
      }
      if (iStack_24 == 0) {
        func_0x0165b6e0();
      }
      iVar3 = *(int *)(iVar1 + 0x10);
      bVar7 = iVar3 != param_2;
      if (bVar7) {
        iVar3 = *(int *)(iVar1 + 0x14);
      }
    } while (bVar7 && iVar3 != param_2);
    func_0x0172cd54(&uStack_30,**(undefined4 **)(_UNK_01871810 + 0x1871734));
    bVar2 = bVar2 & iVar4 == 6;
  }
  return bVar2;
}


/* BoardData.GetCollectableUISprite VA=0x1915D0C | public Sprite GetCollectableUISprite(CollectableType collectableType) { } */

undefined4 BoardData_GetCollectableUISprite_1915D0C(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0x3f) {
    puVar1 = (undefined4 *)(param_1 + 0xf4);
  }
  else if (param_2 == 0x3e) {
    puVar1 = (undefined4 *)(param_1 + 0xf0);
  }
  else {
    puVar1 = (undefined4 *)(param_1 + 0xec);
  }
  return *puVar1;
}


/* BoardData.ctor VA=0x1915D3C | public void .ctor() { } */

void BoardData_ctor_1915D3C(undefined4 param_1)

{
  (*(code *)&UNK_057218d4)(param_1,0);
  return;
}


/* InventoryEntity.ctor VA=0x1936190 | public void .ctor() { } */

void InventoryEntity_ctor_1936190(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* InventoryEntity.ctor VA=0x193713C | public void .ctor() { } */

void InventoryEntity_ctor_193713C(undefined4 param_1)

{
  (*(code *)&SUB_0490157c)(param_1,0);
  return;
}


/* InventoryEntity.ctor VA=0x1937144 | public void .ctor(long endTimeSeconds, int linkId) { } */

void InventoryEntity_ctor_1937144
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  func_0x026f769c(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return;
}


/* InventoryEntity.IsActive VA=0x1937170 | public bool IsActive() { } */

bool InventoryEntity_IsActive_1937170(int param_1)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x15) == '\0';
  }
  return bVar1;
}


/* InventoryEntity.IsWaitingForInitializing VA=0x193718C | public bool IsWaitingForInitializing() { } */

bool InventoryEntity_IsWaitingForInitializing_193718C(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x14) == '\0') {
    bVar1 = *(char *)(param_1 + 0x15) == '\0';
  }
  return bVar1;
}


/* InventoryEntity.IsWaitingForRemoval VA=0x19371AC | public bool IsWaitingForRemoval() { } */

bool InventoryEntity_IsWaitingForRemoval_19371AC(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    return *(char *)(param_1 + 0x15) != '\0';
  }
  return false;
}


/* InventoryEntity.IsReadyForRemoval VA=0x19371CC | public bool IsReadyForRemoval() { } */

bool InventoryEntity_IsReadyForRemoval_19371CC(int param_1)

{
  if (*(char *)(param_1 + 0x14) != '\0') {
    return false;
  }
  return *(char *)(param_1 + 0x15) != '\0';
}


