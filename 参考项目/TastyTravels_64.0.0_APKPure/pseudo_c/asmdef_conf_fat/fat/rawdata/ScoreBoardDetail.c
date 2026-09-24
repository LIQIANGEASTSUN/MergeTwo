/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ScoreBoardDetail$$get_XXX_RowIdentifier RVA 0x171f74c =====

undefined4 FUN_0172f74c(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.ScoreBoardDetail$$set_XXX_RowIdentifier RVA 0x171f754 =====

void FUN_0172f754(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.ScoreBoardDetail$$.ctor RVA 0x171f75c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172f75c(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0172f868 + 0x172f770);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172f86c + 0x172f784));
    func_0x01384978(*(undefined4 *)(_UNK_0172f870 + 0x172f790));
    func_0x01384978(*(undefined4 *)(_UNK_0172f874 + 0x172f79c));
    func_0x01384978(*(undefined4 *)(_UNK_0172f878 + 0x172f7a8));
    func_0x01384978(*(undefined4 *)(_UNK_0172f87c + 0x172f7b4));
    func_0x01384978(*(undefined4 *)(_UNK_0172f880 + 0x172f7c0));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0172f884 + 0x172f7d4));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0172f888 + 0x172f7e8));
  puVar2 = *(undefined4 **)(_UNK_0172f88c + 0x172f7fc);
  param_1[5] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0364cfb8(iVar1,**(undefined4 **)(_UNK_0172f890 + 0x172f814));
  piVar3 = *(int **)(_UNK_0172f894 + 0x172f828);
  param_1[6] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0172f898 + 0x172f848));
                    /* WARNING: Could not recover jumptable at 0x0172f864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ScoreBoardDetail$$.ctor RVA 0x171f89c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172f89c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_0172f960 + 0x172f8b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172f964 + 0x172f8c8));
    func_0x01384978(*(undefined4 *)(_UNK_0172f968 + 0x172f8d4));
    *pcVar3 = '\x01';
  }
  FUN_0172f75c(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar4,**(undefined4 **)(_UNK_0172f96c + 0x172f914));
  iVar4 = *(int *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar4,**(undefined4 **)(_UNK_0172f970 + 0x172f93c));
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.ScoreBoardDetail$$Clone RVA 0x171f974 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0172f974(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0172f9c8 + 0x172f988);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172f9cc + 0x172f99c));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0172f9d0 + 0x172f9b0));
  FUN_0172f89c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ScoreBoardDetail$$ProxyInternalMergeFrom RVA 0x171f9d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172f9d4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  pcVar3 = (char *)(_UNK_0172fb58 + 0x172f9f0);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172fb5c + 0x172fa04));
    func_0x01384978(*(undefined4 *)(_UNK_0172fb60 + 0x172fa10));
    func_0x01384978(*(undefined4 *)(_UNK_0172fb64 + 0x172fa1c));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0172fb68 + 0x172fa4c);
    puVar8 = *(undefined4 **)(_UNK_0172fb6c + 0x172fa54);
    puVar9 = *(undefined4 **)(_UNK_0172fb70 + 0x172fa5c);
    do {
      if (uVar1 < 0x13) {
        if (uVar1 == 8) {
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar4;
        }
        else {
          if (uVar1 != 0x12) goto LAB_0172fb0c;
          iVar2 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = *piVar7;
          }
          uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x036520e8(iVar6,param_2,uVar4,*puVar8);
        }
      }
      else if ((uVar1 | 2) == 0x1a) {
        iVar2 = *piVar7;
        iVar6 = *(int *)(param_1 + 0x18);
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        func_0x0364b0e0(iVar6,param_2,uVar4,*puVar9);
      }
      else {
LAB_0172fb0c:
        uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
        *(undefined4 *)(param_1 + 8) = uVar4;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ScoreBoardDetail$$.cctor RVA 0x171fb74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0172fb74(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0172fc00 + 0x172fb84);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0172fc04 + 0x172fb98));
    func_0x01384978(*(undefined4 *)(_UNK_0172fc08 + 0x172fba4));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0172fc0c + 0x172fbb8);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0172fc10 + 0x172fbc8);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


