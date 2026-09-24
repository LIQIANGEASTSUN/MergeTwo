/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.ObjMergeItem$$.ctor RVA 0x16f8298 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01708298(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_017083e4 + 0x17082ac);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017083e8 + 0x17082c0));
    func_0x01384978(*(undefined4 *)(_UNK_017083ec + 0x17082cc));
    func_0x01384978(*(undefined4 *)(_UNK_017083f0 + 0x17082d8));
    func_0x01384978(*(undefined4 *)(_UNK_017083f4 + 0x17082e4));
    func_0x01384978(*(undefined4 *)(_UNK_017083f8 + 0x17082f0));
    func_0x01384978(*(undefined4 *)(_UNK_017083fc + 0x17082fc));
    func_0x01384978(*(undefined4 *)(_UNK_01708400 + 0x1708308));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01708404 + 0x170831c));
  func_0x036542d8(iVar1,**(undefined4 **)(_UNK_01708408 + 0x1708330));
  puVar6 = *(undefined4 **)(_UNK_0170840c + 0x1708344);
  uVar2 = *puVar6;
  piVar8 = *(int **)(_UNK_01708410 + 0x1708350);
  param_1[5] = iVar1;
  iVar1 = *piVar8;
  param_1[0xd] = iVar1;
  param_1[0xe] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  puVar7 = *(undefined4 **)(_UNK_01708414 + 0x1708370);
  func_0x0364cfb8(iVar1,*puVar7);
  uVar2 = *puVar6;
  param_1[0x12] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar7);
  piVar3 = *(int **)(_UNK_01708418 + 0x1708398);
  iVar4 = *piVar8;
  param_1[0x13] = iVar1;
  iVar1 = *piVar3;
  param_1[0x17] = iVar4;
  param_1[0x18] = iVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_0170841c + 0x17083c4));
                    /* WARNING: Could not recover jumptable at 0x017083e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.ObjMergeItem$$.ctor RVA 0x16f8420 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01708420(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  
  pcVar6 = (char *)(_UNK_017085d8 + 0x1708438);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017085dc + 0x170844c));
    func_0x01384978(*(undefined4 *)(_UNK_017085e0 + 0x1708458));
    *pcVar6 = '\x01';
  }
  FUN_01708298(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  iVar7 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x03651cc4(iVar7,**(undefined4 **)(_UNK_017085e4 + 0x170849c));
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar8;
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x34);
  uVar3 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_2 + 0x43);
  iVar7 = *(int *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  puVar9 = *(undefined4 **)(_UNK_017085e8 + 0x1708564);
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  iVar7 = *(int *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  if (iVar7 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0364acbc(iVar7,*puVar9);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar10 = *(undefined8 *)(param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x6c) = uVar10;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  uVar2 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}



// ===== fat.rawdata.ObjMergeItem$$Clone RVA 0x16f85ec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_017085ec(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01708640 + 0x1708600);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01708644 + 0x1708614));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01708648 + 0x1708628));
  FUN_01708420(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.ObjMergeItem$$ProxyInternalMergeFrom RVA 0x16f864c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0170864c(int param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_01708cf0 + 0x1708668);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01708cf4 + 0x170867c));
    func_0x01384978(*(undefined4 *)(_UNK_01708cf8 + 0x1708688));
    func_0x01384978(*(undefined4 *)(_UNK_01708cfc + 0x1708694));
    *pcVar4 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01708d00 + 0x17086c4);
    puVar8 = *(undefined4 **)(_UNK_01708d04 + 0x17086cc);
    do {
      if (uVar1 < 0x83) {
        if (uVar1 < 0x4e) {
          if (uVar1 < 0x21) {
            if (uVar1 < 0x11) {
              if (uVar1 == 8) {
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0xc) = uVar2;
              }
              else if (uVar1 == 0x10) {
                uVar2 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x10) = uVar2;
              }
              else {
LAB_01708a30:
                uVar2 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
                *(undefined4 *)(param_1 + 8) = uVar2;
              }
            }
            else if (uVar1 == 0x1a) {
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
              func_0x036520e8(iVar6,param_2,uVar2,**(undefined4 **)(_UNK_01708d08 + 0x1708bd0));
            }
            else {
              if (uVar1 != 0x20) goto LAB_01708a30;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x18) = uVar2;
            }
          }
          else if (uVar1 < 0x31) {
            if (uVar1 == 0x28) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar2;
            }
            else {
              if (uVar1 != 0x30) goto LAB_01708a30;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x24) = uVar2;
            }
          }
          else if (uVar1 == 0x38) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x28) = uVar2;
          }
          else if (uVar1 == 0x40) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x2c) = uVar2;
          }
          else {
            if (uVar1 != 0x4d) goto LAB_01708a30;
            uVar2 = func_0x01484f78(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x30) = uVar2;
          }
        }
        else if (uVar1 < 0x69) {
          if (uVar1 < 0x5b) {
            if (uVar1 == 0x52) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
              *(undefined4 *)(param_1 + 0x34) = uVar2;
            }
            else {
              if (uVar1 != 0x5a) goto LAB_01708a30;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
              *(undefined4 *)(param_1 + 0x38) = uVar2;
            }
          }
          else if (uVar1 == 0x60) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x3f) = lVar9 != 0;
          }
          else {
            if (uVar1 != 0x68) goto LAB_01708a30;
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x42) = lVar9 != 0;
          }
        }
        else {
          if (uVar1 < 0x79) {
            if (uVar1 == 0x70) {
              lVar9 = func_0x01484f88(param_2,iVar5,0);
              *(bool *)(param_1 + 0x45) = lVar9 != 0;
              goto LAB_01708a44;
            }
            if (uVar1 != 0x78) goto LAB_01708a30;
LAB_01708a60:
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x48);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
          }
          else {
            if (uVar1 == 0x7a) goto LAB_01708a60;
            if (uVar1 != 0x80 && uVar1 != 0x82) goto LAB_01708a30;
            iVar3 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x4c);
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x01384ab4();
              iVar3 = *piVar7;
            }
            uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xc);
          }
          if (iVar6 == 0) {
            func_0x01384bf0();
          }
          func_0x0364b0e0(iVar6,param_2,uVar2,*puVar8);
        }
      }
      else if (uVar1 < 0xc9) {
        if (uVar1 < 0xa1) {
          if (uVar1 < 0x93) {
            if (uVar1 == 0x88) {
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x54) = uVar2;
            }
            else {
              if (uVar1 != 0x92) goto LAB_01708a30;
              uVar2 = func_0x01484f98(param_2,iVar5,0);
              uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
              *(undefined4 *)(param_1 + 0x5c) = uVar2;
            }
          }
          else if (uVar1 == 0x9a) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            uVar2 = func_0x01484fc8(param_2,iVar5,uVar2,0);
            *(undefined4 *)(param_1 + 0x60) = uVar2;
          }
          else {
            if (uVar1 != 0xa0) goto LAB_01708a30;
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
          }
        }
        else if (uVar1 < 0xb1) {
          if (uVar1 == 0xa8) {
            uVar2 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x70) = uVar2;
          }
          else {
            if (uVar1 != 0xb0) goto LAB_01708a30;
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x3e) = lVar9 != 0;
          }
        }
        else if (uVar1 == 0xb8) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x58) = uVar2;
        }
        else if (uVar1 == 0xc0) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x46) = lVar9 != 0;
        }
        else {
          if (uVar1 != 200) goto LAB_01708a30;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x20) = lVar9 != 0;
        }
      }
      else if (uVar1 < 0xe9) {
        if (uVar1 < 0xd9) {
          if (uVar1 == 0xd0) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x40) = lVar9 != 0;
          }
          else {
            if (uVar1 != 0xd8) goto LAB_01708a30;
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x3c) = lVar9 != 0;
          }
        }
        else if (uVar1 == 0xe0) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x50) = uVar2;
        }
        else {
          if (uVar1 != 0xe8) goto LAB_01708a30;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x44) = lVar9 != 0;
        }
      }
      else if (uVar1 < 0xf9) {
        if (uVar1 == 0xf0) {
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 100) = uVar2;
        }
        else {
          if (uVar1 != 0xf8) goto LAB_01708a30;
          uVar2 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x68) = uVar2;
        }
      }
      else if (uVar1 == 0x100) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x43) = lVar9 != 0;
      }
      else if (uVar1 == 0x108) {
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x41) = lVar9 != 0;
      }
      else {
        if (uVar1 != 0x110) goto LAB_01708a30;
        lVar9 = func_0x01484f88(param_2,iVar5,0);
        *(bool *)(param_1 + 0x3d) = lVar9 != 0;
      }
LAB_01708a44:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.ObjMergeItem$$get_XXX_RowIdentifier RVA 0x16f8d0c =====

undefined4 FUN_01708d0c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== fat.rawdata.ObjMergeItem$$set_XXX_RowIdentifier RVA 0x16f8d14 =====

void FUN_01708d14(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



// ===== fat.rawdata.ObjMergeItem$$.cctor RVA 0x16f8d1c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01708d1c(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01708dc0 + 0x1708d2c);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01708dc4 + 0x1708d40));
    func_0x01384978(*(undefined4 *)(_UNK_01708dc8 + 0x1708d4c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01708dcc + 0x1708d60);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_01708dd0 + 0x1708d70);
  uVar1 = func_0x0244f954(0x1a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x7a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x82,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  return;
}


