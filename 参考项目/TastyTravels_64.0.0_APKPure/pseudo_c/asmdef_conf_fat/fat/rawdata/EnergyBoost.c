/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EnergyBoost$$.ctor RVA 0x19420a8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019520a8(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01952170 + 0x19520bc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01952174 + 0x19520d0));
    func_0x01384978(*(undefined4 *)(_UNK_01952178 + 0x19520dc));
    func_0x01384978(*(undefined4 *)(_UNK_0195217c + 0x19520e8));
    func_0x01384978(*(undefined4 *)(_UNK_01952180 + 0x19520f4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01952184 + 0x1952108));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01952188 + 0x195211c));
  piVar2 = *(int **)(_UNK_0195218c + 0x1952130);
  param_1[4] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01952190 + 0x1952150));
                    /* WARNING: Could not recover jumptable at 0x0195216c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EnergyBoost$$.ctor RVA 0x1942194 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01952194(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  pcVar6 = (char *)(_UNK_01952254 + 0x19521ac);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01952258 + 0x19521c0));
    *pcVar6 = '\x01';
  }
  FUN_019520a8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar7 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_0195225c + 0x1952200));
  uVar2 = *(undefined2 *)(param_2 + 0x25);
  uVar9 = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x1c) = uVar9;
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar1 = *(undefined1 *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  *(undefined2 *)(param_1 + 0x25) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar3 = func_0x0244f914(uVar4,0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}



// ===== fat.rawdata.EnergyBoost$$Clone RVA 0x1942260 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01952260(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_019522b4 + 0x1952274);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019522b8 + 0x1952288));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_019522bc + 0x195229c));
  FUN_01952194(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EnergyBoost$$ProxyInternalMergeFrom RVA 0x19422c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019522c0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar4 = (char *)(_UNK_0195251c + 0x19522d8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01952520 + 0x19522ec));
    func_0x01384978(*(undefined4 *)(_UNK_01952524 + 0x19522f8));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01952528 + 0x1952328);
    puVar8 = *(undefined4 **)(_UNK_0195252c + 0x1952330);
    do {
      if (uVar1 < 0x29) {
        if (uVar1 < 0x11) {
          if (uVar1 == 8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else if (uVar1 == 0x10) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar2;
          }
          else {
LAB_01952434:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else if (uVar1 == 0x20) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x1c) = uVar2;
        }
        else {
          if (uVar1 != 0x28) goto LAB_01952434;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x20) = uVar2;
        }
      }
      else if (uVar1 < 0x41) {
        if (uVar1 == 0x30) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x25) = lVar9 != 0;
        }
        else if (uVar1 == 0x38) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
        else {
          if (uVar1 != 0x40) goto LAB_01952434;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x26) = lVar9 != 0;
        }
      }
      else if (uVar1 == 0x48) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar2;
      }
      else if (uVar1 == 0x50) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x24) = lVar9 != 0;
      }
      else {
        if (uVar1 != 0x5a) goto LAB_01952434;
        iVar3 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x10);
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x01384ab4();
          iVar3 = *piVar7;
        }
        uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 4);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x036520e8(iVar6,param_2,uVar2,*puVar8);
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EnergyBoost$$get_XXX_RowIdentifier RVA 0x1942530 =====

undefined4 FUN_01952530(int param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// ===== fat.rawdata.EnergyBoost$$set_XXX_RowIdentifier RVA 0x1942538 =====

void FUN_01952538(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}



// ===== fat.rawdata.EnergyBoost$$.cctor RVA 0x1942540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01952540(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_019525b4 + 0x1952550);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_019525b8 + 0x1952564));
    func_0x01384978(*(undefined4 *)(_UNK_019525bc + 0x1952570));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_019525c0 + 0x1952584);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_019525c4 + 0x1952594);
  uVar1 = func_0x0244f954(0x5a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


