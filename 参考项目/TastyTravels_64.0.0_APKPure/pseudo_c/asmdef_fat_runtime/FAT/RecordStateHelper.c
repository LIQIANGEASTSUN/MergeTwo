/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.RecordStateHelper$$Find RVA 0x1c13250 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c23250(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  pcVar6 = (char *)(_UNK_01c2341c + 0x1c23270);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23420 + 0x1c23284));
    func_0x01384978(*(undefined4 *)(_UNK_01c23424 + 0x1c23290));
    *pcVar6 = '\x01';
  }
  iVar7 = 0;
  iVar1 = func_0x0229f06c(0x670,0);
  if (iVar1 == 0) {
    piVar8 = *(int **)(_UNK_01c23428 + 0x1c232f8);
    piVar9 = *(int **)(_UNK_01c2342c + 0x1c23300);
    do {
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar8) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01c23358;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar8,0);
LAB_01c23358:
      iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
      if (iVar1 <= iVar7) {
        *param_3 = 0;
        return 0;
      }
      if (param_2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar9) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01c233cc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(param_2,*piVar9,0);
LAB_01c233cc:
      iVar1 = (*(code *)*puVar3)(param_2,iVar7,puVar3[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar7 = iVar7 + 1;
    } while (*(int *)(iVar1 + 0xc) != param_1);
    *param_3 = iVar1;
    uVar2 = 1;
  }
  else {
    iVar1 = func_0x0229f13c(0x670,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0219236c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RecordStateHelper$$AddOrUpdate RVA 0x1c13430 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c23430(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  
  pcVar8 = (char *)(_UNK_01c2356c + 0x1c23450);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23570 + 0x1c23468));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4073,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x4073,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02215a00(iVar1,param_1,param_2,param_3,param_4,0);
    return;
  }
  if (param_4 == 0) {
    pcVar8 = (char *)(_UNK_01c2387c + 0x1c23658);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01c23880 + 0x1c2366c));
      func_0x01384978(*(undefined4 *)(_UNK_01c23884 + 0x1c23678));
      *pcVar8 = '\x01';
    }
    iVar9 = 0;
    iVar1 = func_0x0229f06c(0x671,0);
    if (iVar1 == 0) {
      piVar6 = *(int **)(_UNK_01c23888 + 0x1c236e0);
      piVar10 = *(int **)(_UNK_01c2388c + 0x1c236e8);
      do {
        if (param_3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_3;
        iVar4 = *piVar6;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == iVar4) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01c23740;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_3,iVar4,0);
LAB_01c23740:
        iVar1 = (*(code *)*puVar3)(param_3,puVar3[1]);
        if (iVar1 <= iVar9) {
          uVar2 = func_0x01c23578(param_1,param_2);
          if (param_3 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *param_3;
          iVar9 = *piVar6;
          uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar5 == 0) goto LAB_01c23844;
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          goto LAB_01c2382c;
        }
        if (param_3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_3;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 != 0) {
          piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar7[-1] == *piVar10) {
              puVar3 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
              goto LAB_01c237b4;
            }
            uVar5 = uVar5 - 1;
            piVar7 = piVar7 + 2;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_3,*piVar10,0);
LAB_01c237b4:
        iVar1 = (*(code *)*puVar3)(param_3,iVar9,puVar3[1]);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar9 = iVar9 + 1;
      } while (*(int *)(iVar1 + 0xc) != param_1);
      *(undefined4 *)(iVar1 + 0x10) = param_2;
    }
    else {
      iVar1 = func_0x0229f13c(0x671,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02177130(iVar1,param_1,param_2,param_3,0);
    }
    return;
  }
  uVar2 = func_0x01c23578();
  if (param_3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_3;
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == **(int **)(_UNK_01c23574 + 0x1c234f8)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
        goto LAB_01c23550;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01c23574 + 0x1c234f8),2);
LAB_01c23550:
                    /* WARNING: Could not recover jumptable at 0x01c23568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_3,uVar2,puVar3[1]);
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 2;
    if (uVar5 == 0) break;
LAB_01c2382c:
    if (piVar6[-1] == iVar9) {
      puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xd0);
      goto LAB_01c23860;
    }
  }
LAB_01c23844:
  puVar3 = (undefined4 *)func_0x014002dc(param_3,iVar9,2);
LAB_01c23860:
                    /* WARNING: Could not recover jumptable at 0x01c23878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_3,uVar2,puVar3[1]);
  return;
}



// ===== FAT.RecordStateHelper$$ToRecord RVA 0x1c13578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c23578(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01c2362c + 0x1c23590);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23630 + 0x1c235a4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x672,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x672,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021926bc + 0x21925c8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021926c0 + 0x21925dc),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021926c4 + 0x21926ac));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c23634 + 0x1c23600));
  func_0x017aca5c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}



// ===== FAT.RecordStateHelper$$UpdateRecord RVA 0x1c13638 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c23638(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_01c2387c + 0x1c23658);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23880 + 0x1c2366c));
    func_0x01384978(*(undefined4 *)(_UNK_01c23884 + 0x1c23678));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x671,0);
  if (iVar1 == 0) {
    piVar9 = *(int **)(_UNK_01c23888 + 0x1c236e0);
    piVar10 = *(int **)(_UNK_01c2388c + 0x1c236e8);
    do {
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      iVar4 = *piVar9;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == iVar4) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01c23740;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar4,0);
LAB_01c23740:
      iVar1 = (*(code *)*puVar2)(param_3,puVar2[1]);
      if (iVar1 <= iVar8) {
        uVar3 = FUN_01c23578(param_1,param_2);
        if (param_3 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *param_3;
        iVar8 = *piVar9;
        uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar5 == 0) goto LAB_01c23844;
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        goto LAB_01c2382c;
      }
      if (param_3 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *param_3;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar10) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01c237b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_3,*piVar10,0);
LAB_01c237b4:
      iVar1 = (*(code *)*puVar2)(param_3,iVar8,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar8 = iVar8 + 1;
    } while (*(int *)(iVar1 + 0xc) != param_1);
    *(undefined4 *)(iVar1 + 0x10) = param_2;
  }
  else {
    iVar1 = func_0x0229f13c(0x671,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02177130(iVar1,param_1,param_2,param_3,0);
  }
  return;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar9 = piVar9 + 2;
    if (uVar5 == 0) break;
LAB_01c2382c:
    if (piVar9[-1] == iVar8) {
      puVar2 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xd0);
      goto LAB_01c23860;
    }
  }
LAB_01c23844:
  puVar2 = (undefined4 *)func_0x014002dc(param_3,iVar8,2);
LAB_01c23860:
                    /* WARNING: Could not recover jumptable at 0x01c23878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(param_3,uVar3,puVar2[1]);
  return;
}



// ===== FAT.RecordStateHelper$$RemoveRecord RVA 0x1c13890 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c23890(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01c23ab4 + 0x1c238a8);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23ab8 + 0x1c238bc));
    func_0x01384978(*(undefined4 *)(_UNK_01c23abc + 0x1c238c8));
    *pcVar7 = '\x01';
  }
  iVar8 = 0;
  iVar1 = func_0x0229f06c(0x677,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x677,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar1 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar8,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x0245496c(&uStack_38,0,0);
    return uVar9;
  }
  piVar11 = *(int **)(_UNK_01c23ac0 + 0x1c23928);
  piVar10 = *(int **)(_UNK_01c23ac4 + 0x1c23930);
  do {
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01c23988;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,*piVar11,0);
LAB_01c23988:
    iVar1 = (*(code *)*puVar2)(param_2,puVar2[1]);
    if (iVar1 <= iVar8) {
      return 0;
    }
    if (param_2 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *param_2;
    iVar3 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == iVar3) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01c239fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar3,0);
LAB_01c239fc:
    iVar1 = (*(code *)*puVar2)(param_2,iVar8,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar8 = iVar8 + 1;
  } while( true );
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  iVar3 = *piVar10;
  uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar4 != 0) {
    piVar10 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar10 * 8 + 0xe0);
        goto LAB_01c23a98;
      }
      uVar4 = uVar4 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_2,iVar3,4);
LAB_01c23a98:
  (*(code *)*puVar2)(param_2,iVar8,puVar2[1]);
  return 1;
}



// ===== FAT.RecordStateHelper$$ToRecord RVA 0x1c13ac8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c23ac8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01c23b7c + 0x1c23ae0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23b80 + 0x1c23af4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x1382,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x1382,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7b7c + 0x21c7a88);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7b80 + 0x21c7a9c),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485238(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021c7b84 + 0x21c7b6c));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c23b84 + 0x1c23b50));
  func_0x017aca5c(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}



// ===== FAT.RecordStateHelper$$ReadBool RVA 0x1c13b88 =====

undefined4 FUN_01c23b88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  
  uVar3 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x1384,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01c23250(param_1,param_2,&iStack_14);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x10)) {
        uVar3 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x1384,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x021928b8(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.RecordStateHelper$$ReadInt RVA 0x1c13c30 =====

undefined4 FUN_01c23c30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_14;
  
  uVar3 = 0;
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x66f,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01c23250(param_1,param_2,&iStack_14);
    iVar1 = iStack_14;
    if (iVar2 != 0) {
      if (iStack_14 == 0) {
        func_0x01384bf0();
      }
      uVar3 = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x66f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x02186284(iVar1,param_1,param_2,0);
  }
  return uVar3;
}



// ===== FAT.RecordStateHelper$$ReadInt RVA 0x1c13ccc =====

undefined4 FUN_01c23ccc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iStack_1c;
  
  iStack_1c = 0;
  iVar1 = func_0x0229f06c(0x170f,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01c23250(param_1,param_2,&iStack_1c);
    iVar1 = iStack_1c;
    if (iVar2 != 0) {
      if (iStack_1c == 0) {
        func_0x01384bf0();
      }
      param_3 = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x170f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = func_0x021d23dc(iVar1,param_1,param_2,param_3,0);
  }
  return param_3;
}



// ===== FAT.RecordStateHelper$$ToRecord RVA 0x1c13d74 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01c23d74(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01c23e48 + 0x1c23d94);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c23e4c + 0x1c23da8));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x4a72,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01c23e50 + 0x1c23e14));
    func_0x017aca5c(iVar1,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(int *)(iVar1 + 0x10) = param_3 - param_5;
    *(undefined4 *)(iVar1 + 0xc) = param_1;
  }
  else {
    iVar1 = func_0x0229f13c(0x4a72,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x022204ac(iVar1,param_1,param_3,param_4,param_5,param_6,0);
  }
  return iVar1;
}



// ===== FAT.RecordStateHelper$$ReadTS RVA 0x1c13e54 =====

int FUN_01c23e54(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  
  iVar3 = 0;
  iStack_24 = 0;
  iVar1 = func_0x0229f06c(0x4a6c,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01c23250(param_1,param_5,&iStack_24);
    iVar1 = iStack_24;
    if (iVar2 != 0) {
      if (iStack_24 == 0) {
        func_0x01384bf0(iVar2,0);
      }
      iVar3 = *(int *)(iVar1 + 0x10) + param_3;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x4a6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = func_0x022201d0(iVar1,param_1,param_3,param_4,param_5,0);
  }
  return iVar3;
}


