/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.EventMonopoly$$.ctor RVA 0x15f0164 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600164(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01600270 + 0x1600178);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600274 + 0x160018c));
    func_0x01384978(*(undefined4 *)(_UNK_01600278 + 0x1600198));
    func_0x01384978(*(undefined4 *)(_UNK_0160027c + 0x16001a4));
    func_0x01384978(*(undefined4 *)(_UNK_01600280 + 0x16001b0));
    func_0x01384978(*(undefined4 *)(_UNK_01600284 + 0x16001bc));
    func_0x01384978(*(undefined4 *)(_UNK_01600288 + 0x16001c8));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_0160028c + 0x16001dc));
  func_0x0244f948(iVar1,**(undefined4 **)(_UNK_01600290 + 0x16001f0));
  puVar2 = *(undefined4 **)(_UNK_01600294 + 0x1600204);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar2);
  func_0x0244f964(iVar1,**(undefined4 **)(_UNK_01600298 + 0x160021c));
  piVar3 = *(int **)(_UNK_0160029c + 0x1600230);
  param_1[8] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_016002a0 + 0x1600250));
                    /* WARNING: Could not recover jumptable at 0x0160026c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.EventMonopoly$$.ctor RVA 0x15f02a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016002a4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pcVar5 = (char *)(_UNK_01600390 + 0x16002bc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600394 + 0x16002d0));
    func_0x01384978(*(undefined4 *)(_UNK_01600398 + 0x16002dc));
    *pcVar5 = '\x01';
  }
  FUN_01600164(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f94c(iVar6,**(undefined4 **)(_UNK_0160039c + 0x1600324));
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  iVar6 = *(int *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0244f968(iVar6,**(undefined4 **)(_UNK_016003a0 + 0x1600354));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar7 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x2c) = uVar7;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar8 = *(undefined8 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  uVar1 = func_0x0244f914(uVar1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.EventMonopoly$$Clone RVA 0x15f03a4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016003a4(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_016003f8 + 0x16003b8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_016003fc + 0x16003cc));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01600400 + 0x16003e0));
  FUN_016002a4(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.EventMonopoly$$ProxyInternalMergeFrom RVA 0x15f0404 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600404(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  
  pcVar4 = (char *)(_UNK_01600744 + 0x1600420);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600748 + 0x1600434));
    func_0x01384978(*(undefined4 *)(_UNK_0160074c + 0x1600440));
    func_0x01384978(*(undefined4 *)(_UNK_01600750 + 0x160044c));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01600754 + 0x160047c);
    puVar8 = *(undefined4 **)(_UNK_01600758 + 0x1600484);
    puVar9 = *(undefined4 **)(_UNK_0160075c + 0x160048c);
    do {
      if (uVar1 < 0x39) {
        if (uVar1 < 0x21) {
          if (uVar1 < 0x11) {
            if (uVar1 == 8) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0xc) = uVar2;
            }
            else {
              if (uVar1 != 0x10) goto LAB_01600634;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x14) = uVar2;
            }
          }
          else if (uVar1 == 0x18) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
            if (uVar1 != 0x20) goto LAB_01600634;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
        }
        else if (uVar1 < 0x2b) {
          if ((uVar1 | 2) == 0x2a) {
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x20);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0244f96c(iVar6,param_2,uVar2,*puVar8);
          }
          else {
LAB_01600634:
            uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar2;
          }
        }
        else if (uVar1 == 0x30) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x24) = uVar2;
        }
        else {
          if (uVar1 != 0x38) goto LAB_01600634;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar2;
        }
      }
      else if (uVar1 < 0x59) {
        if (uVar1 < 0x49) {
          if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
            if (uVar1 != 0x48) goto LAB_01600634;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
        }
        else if (uVar1 == 0x50) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x38) = uVar2;
        }
        else {
          if (uVar1 != 0x58) goto LAB_01600634;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar2;
        }
      }
      else if (uVar1 < 0x69) {
        if (uVar1 == 0x60) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x40) = uVar2;
        }
        else {
          if (uVar1 != 0x68) goto LAB_01600634;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x44) = uVar2;
        }
      }
      else if (uVar1 == 0x72) {
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
        func_0x0244f950(iVar6,param_2,uVar2,*puVar9);
      }
      else {
        if (uVar1 != 0x78) goto LAB_01600634;
        lVar10 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x34) = lVar10 != 0;
      }
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.EventMonopoly$$get_XXX_RowIdentifier RVA 0x15f0760 =====

undefined4 FUN_01600760(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}



// ===== fat.rawdata.EventMonopoly$$set_XXX_RowIdentifier RVA 0x15f0768 =====

void FUN_01600768(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}



// ===== fat.rawdata.EventMonopoly$$.cctor RVA 0x15f0770 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01600770(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_016007fc + 0x1600780);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01600800 + 0x1600794));
    func_0x01384978(*(undefined4 *)(_UNK_01600804 + 0x16007a0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01600808 + 0x16007b4);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0160080c + 0x16007c4);
  uVar1 = func_0x0244f954(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x2a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  return;
}


