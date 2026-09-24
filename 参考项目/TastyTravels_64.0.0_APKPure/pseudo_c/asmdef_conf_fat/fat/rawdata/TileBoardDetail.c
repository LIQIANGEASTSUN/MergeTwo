/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.TileBoardDetail$$get_XXX_RowIdentifier RVA 0x172fd98 =====

undefined4 FUN_0173fd98(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// ===== fat.rawdata.TileBoardDetail$$set_XXX_RowIdentifier RVA 0x172fda0 =====

void FUN_0173fda0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}



// ===== fat.rawdata.TileBoardDetail$$.ctor RVA 0x172fda8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173fda8(int *param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0173fe70 + 0x173fdbc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173fe74 + 0x173fdd0));
    func_0x01384978(*(undefined4 *)(_UNK_0173fe78 + 0x173fddc));
    func_0x01384978(*(undefined4 *)(_UNK_0173fe7c + 0x173fde8));
    func_0x01384978(*(undefined4 *)(_UNK_0173fe80 + 0x173fdf4));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173fe84 + 0x173fe08));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_0173fe88 + 0x173fe1c));
  piVar2 = *(int **)(_UNK_0173fe8c + 0x173fe30);
  param_1[5] = iVar1;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0173fe90 + 0x173fe50));
                    /* WARNING: Could not recover jumptable at 0x0173fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.TileBoardDetail$$.ctor RVA 0x172fe94 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173fe94(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  
  pcVar2 = (char *)(_UNK_0173ff30 + 0x173feac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173ff34 + 0x173fec0));
    *pcVar2 = '\x01';
  }
  FUN_0173fda8(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar3,**(undefined4 **)(_UNK_0173ff38 + 0x173ff00));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.TileBoardDetail$$Clone RVA 0x172ff3c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0173ff3c(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0173ff90 + 0x173ff50);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0173ff94 + 0x173ff64));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0173ff98 + 0x173ff78));
  FUN_0173fe94(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.TileBoardDetail$$ProxyInternalMergeFrom RVA 0x172ff9c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0173ff9c(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01740130 + 0x173ffb4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01740134 + 0x173ffc8));
    func_0x01384978(*(undefined4 *)(_UNK_01740138 + 0x173ffd4));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_0174013c + 0x1740004);
    puVar8 = *(undefined4 **)(_UNK_01740140 + 0x174000c);
    do {
      if (uVar1 < 0x19) {
        if (uVar1 == 8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x10) = uVar2;
        }
        else if (uVar1 == 0x12) {
          iVar3 = *piVar7;
          iVar6 = *(int *)(param_1 + 0x14);
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
        else if (uVar1 == 0x18) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
        }
        else {
LAB_01740070:
          uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
          *(undefined4 *)(param_1 + 8) = uVar2;
        }
      }
      else if (uVar1 == 0x20) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x1c) = uVar2;
      }
      else if (uVar1 == 0x28) {
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x20) = uVar2;
      }
      else {
        if (uVar1 != 0x30) goto LAB_01740070;
        uVar2 = func_0x01484f98(param_2,iVar5,0);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.TileBoardDetail$$.cctor RVA 0x1730144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01740144(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_017401b8 + 0x1740154);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017401bc + 0x1740168));
    func_0x01384978(*(undefined4 *)(_UNK_017401c0 + 0x1740174));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_017401c4 + 0x1740188);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_017401c8 + 0x1740198);
  uVar1 = func_0x0244f954(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  return;
}


