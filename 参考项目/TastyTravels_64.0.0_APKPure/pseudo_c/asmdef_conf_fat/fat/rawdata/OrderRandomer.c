/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== fat.rawdata.OrderRandomer$$.ctor RVA 0x1709158 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01719158(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  pcVar4 = (char *)(_UNK_01719320 + 0x171916c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01719324 + 0x1719180));
    func_0x01384978(*(undefined4 *)(_UNK_01719328 + 0x171918c));
    func_0x01384978(*(undefined4 *)(_UNK_0171932c + 0x1719198));
    func_0x01384978(*(undefined4 *)(_UNK_01719330 + 0x17191a4));
    func_0x01384978(*(undefined4 *)(_UNK_01719334 + 0x17191b0));
    func_0x01384978(*(undefined4 *)(_UNK_01719338 + 0x17191bc));
    func_0x01384978(*(undefined4 *)(_UNK_0171933c + 0x17191c8));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_01719340 + 0x17191dc);
  iVar1 = func_0x01384be4(*puVar7);
  puVar8 = *(undefined4 **)(_UNK_01719344 + 0x17191f0);
  func_0x036542d8(iVar1,*puVar8);
  puVar5 = *(undefined4 **)(_UNK_01719348 + 0x1719200);
  param_1[4] = iVar1;
  iVar1 = func_0x01384be4(*puVar5);
  puVar6 = *(undefined4 **)(_UNK_0171934c + 0x1719218);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[6] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01719350 + 0x1719240);
  param_1[8] = iVar1;
  uVar2 = *puVar5;
  param_1[0x16] = *piVar3;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar7;
  param_1[0x17] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x036542d8(iVar1,*puVar8);
  uVar2 = *puVar5;
  param_1[0x18] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0x1e] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0x20] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  uVar2 = *puVar5;
  param_1[0x21] = iVar1;
  iVar1 = func_0x01384be4(uVar2);
  func_0x0364cfb8(iVar1,*puVar6);
  piVar3 = *(int **)(_UNK_01719354 + 0x17192e0);
  param_1[0x22] = iVar1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x035c33f4(param_1,**(undefined4 **)(_UNK_01719358 + 0x1719300));
                    /* WARNING: Could not recover jumptable at 0x0171931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1,*(undefined4 *)(*param_1 + 0x13c));
  return;
}



// ===== fat.rawdata.OrderRandomer$$.ctor RVA 0x170935c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0171935c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  pcVar4 = (char *)(_UNK_01719584 + 0x1719378);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01719588 + 0x171938c));
    func_0x01384978(*(undefined4 *)(_UNK_0171958c + 0x1719398));
    *pcVar4 = '\x01';
  }
  FUN_01719158(param_1);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar5 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar6 = *(undefined4 **)(_UNK_01719590 + 0x17193dc);
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  puVar7 = *(undefined4 **)(_UNK_01719594 + 0x1719414);
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x24);
  uVar9 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x24) = uVar8;
  *(undefined8 *)(param_1 + 0x2c) = uVar9;
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  uVar1 = *(undefined4 *)(param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  iVar5 = *(int *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x03651cc4(iVar5,*puVar6);
  iVar5 = *(int *)(param_2 + 0x78);
  uVar8 = *(undefined8 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x6c) = uVar8;
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x80);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  iVar5 = *(int *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0364acbc(iVar5,*puVar7);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  uVar1 = func_0x0244f914(uVar2,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



// ===== fat.rawdata.OrderRandomer$$Clone RVA 0x1709598 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01719598(undefined4 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_017195ec + 0x17195ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_017195f0 + 0x17195c0));
    *pcVar2 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_017195f4 + 0x17195d4));
  FUN_0171935c(uVar1,param_1);
  return uVar1;
}



// ===== fat.rawdata.OrderRandomer$$ProxyInternalMergeFrom RVA 0x17095f8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017195f8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  pcVar3 = (char *)(_UNK_01719ea0 + 0x1719614);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01719ea4 + 0x1719628));
    func_0x01384978(*(undefined4 *)(_UNK_01719ea8 + 0x1719634));
    func_0x01384978(*(undefined4 *)(_UNK_01719eac + 0x1719640));
    *pcVar3 = '\x01';
  }
  iVar5 = param_2 + 8;
  uVar1 = func_0x01484f58(param_2,iVar5,0);
  if (uVar1 != 0) {
    piVar7 = *(int **)(_UNK_01719eb0 + 0x1719674);
    puVar8 = *(undefined4 **)(_UNK_01719eb4 + 0x171967c);
    do {
      if (uVar1 < 0xe1) {
        if (uVar1 < 0x71) {
          if (uVar1 < 0x23) {
            if (uVar1 < 0x13) {
              if (uVar1 == 8) {
                uVar4 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0xc) = uVar4;
              }
              else {
                if (uVar1 != 0x10 && uVar1 != 0x12) goto LAB_01719b08;
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x18);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 8);
LAB_01719b6c:
                if (iVar6 == 0) {
                  func_0x01384bf0();
                }
                func_0x0364b0e0(iVar6,param_2,uVar4,*puVar8);
              }
            }
            else {
              if (uVar1 != 0x18) {
                if (uVar1 != 0x20 && uVar1 != 0x22) goto LAB_01719b08;
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x20);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc);
                goto LAB_01719b6c;
              }
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x1c) = uVar4;
            }
          }
          else if (uVar1 < 0x59) {
            if (uVar1 == 0x30) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x24) = uVar4;
            }
            else if (uVar1 == 0x40) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x2c) = uVar4;
            }
            else {
              if (uVar1 != 0x58) goto LAB_01719b08;
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x6c) = uVar4;
            }
          }
          else {
            if (uVar1 < 99) {
              if ((uVar1 | 2) == 0x62) {
                iVar2 = *piVar7;
                iVar6 = *(int *)(param_1 + 0x78);
                if (*(int *)(iVar2 + 0x74) == 0) {
                  func_0x01384ab4();
                  iVar2 = *piVar7;
                }
                uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x18);
                goto LAB_01719b6c;
              }
            }
            else {
              if (uVar1 == 0x68) {
                uVar4 = func_0x01484f98(param_2,iVar5,0);
                *(undefined4 *)(param_1 + 0x7c) = uVar4;
                goto LAB_01719b8c;
              }
              if (uVar1 == 0x70) goto LAB_01719a40;
            }
LAB_01719b08:
            uVar4 = func_0x0244f924(*(undefined4 *)(param_1 + 8),param_2,0);
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
        }
        else if (uVar1 < 0xb1) {
          if (uVar1 < 0x93) {
            if (uVar1 == 0x72) {
LAB_01719a40:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x80);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x1c);
            }
            else {
              if (uVar1 != 0x90 && uVar1 != 0x92) goto LAB_01719b08;
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x5c);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
            }
            goto LAB_01719b6c;
          }
          if (uVar1 == 0x98) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x4e) = lVar9 != 0;
          }
          else if (uVar1 == 0xa8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x54) = uVar4;
          }
          else {
            if (uVar1 != 0xb0) goto LAB_01719b08;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x14) = uVar4;
          }
        }
        else if (uVar1 < 0xc9) {
          if (uVar1 == 0xb8) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 100) = uVar4;
          }
          else {
            if (uVar1 != 0xc0) {
              if (uVar1 != 200) goto LAB_01719b08;
LAB_01719b20:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x84);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x20);
              goto LAB_01719b6c;
            }
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x68) = uVar4;
          }
        }
        else if (uVar1 < 0xd1) {
          if (uVar1 == 0xca) goto LAB_01719b20;
          if (uVar1 != 0xd0) goto LAB_01719b08;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x40) = lVar9 != 0;
        }
        else if (uVar1 == 0xd8) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x41) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0xe0) goto LAB_01719b08;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x4f) = lVar9 != 0;
        }
      }
      else if (uVar1 < 0x149) {
        if (uVar1 < 0x111) {
          if (uVar1 < 0xf9) {
            if (uVar1 == 0xe8) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x30) = uVar4;
            }
            else if (uVar1 == 0xf0) {
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x34) = uVar4;
            }
            else {
              if (uVar1 != 0xf8) goto LAB_01719b08;
              uVar4 = func_0x01484f98(param_2,iVar5,0);
              *(undefined4 *)(param_1 + 0x38) = uVar4;
            }
          }
          else if (uVar1 == 0x100) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x3c) = uVar4;
          }
          else if (uVar1 == 0x108) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x42) = lVar9 != 0;
          }
          else {
            if (uVar1 != 0x110) goto LAB_01719b08;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x70) = uVar4;
          }
        }
        else if (uVar1 < 299) {
          if (uVar1 == 0x118) {
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            *(undefined4 *)(param_1 + 0x74) = uVar4;
          }
          else if (uVar1 == 0x120) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x51) = lVar9 != 0;
          }
          else {
            if (uVar1 != 0x12a) goto LAB_01719b08;
            uVar4 = func_0x01484f98(param_2,iVar5,0);
            uVar4 = func_0x01484fc8(param_2,iVar5,uVar4,0);
            *(undefined4 *)(param_1 + 0x58) = uVar4;
          }
        }
        else if (uVar1 < 0x139) {
          if (uVar1 == 0x130) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x49) = lVar9 != 0;
          }
          else {
            if (uVar1 != 0x138) goto LAB_01719b08;
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x50) = lVar9 != 0;
          }
        }
        else if (uVar1 == 0x140) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x4a) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x148) goto LAB_01719b08;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x46) = lVar9 != 0;
        }
      }
      else if (uVar1 < 0x179) {
        if (uVar1 < 0x161) {
          if (uVar1 == 0x150) {
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x48) = lVar9 != 0;
          }
          else if (uVar1 == 0x15a) {
            iVar2 = *piVar7;
            iVar6 = *(int *)(param_1 + 0x10);
            if (*(int *)(iVar2 + 0x74) == 0) {
              func_0x01384ab4();
              iVar2 = *piVar7;
            }
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 4);
LAB_01719c34:
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x036520e8(iVar6,param_2,uVar4,**(undefined4 **)(_UNK_01719eb8 + 0x1719c54));
          }
          else {
            if (uVar1 != 0x160) goto LAB_01719b08;
            lVar9 = func_0x01484f88(param_2,iVar5,0);
            *(bool *)(param_1 + 0x4b) = lVar9 != 0;
          }
        }
        else if (uVar1 == 0x168) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x47) = lVar9 != 0;
        }
        else if (uVar1 == 0x170) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x4d) = lVar9 != 0;
        }
        else {
          if (uVar1 != 0x178) goto LAB_01719b08;
          uVar4 = func_0x01484f98(param_2,iVar5,0);
          *(undefined4 *)(param_1 + 0x28) = uVar4;
        }
      }
      else {
        if (400 < uVar1) {
          if (uVar1 < 0x1a1) {
            if (uVar1 == 0x198) {
              lVar9 = func_0x01484f88(param_2,iVar5,0);
              *(bool *)(param_1 + 0x45) = lVar9 != 0;
              goto LAB_01719b8c;
            }
            if (uVar1 == 0x1a0) goto LAB_01719b48;
          }
          else {
            if (uVar1 == 0x1a2) {
LAB_01719b48:
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x88);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24);
              goto LAB_01719b6c;
            }
            if (uVar1 == 0x1aa) {
              iVar2 = *piVar7;
              iVar6 = *(int *)(param_1 + 0x60);
              if (*(int *)(iVar2 + 0x74) == 0) {
                func_0x01384ab4();
                iVar2 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
              goto LAB_01719c34;
            }
          }
          goto LAB_01719b08;
        }
        if (uVar1 == 0x180) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x44) = lVar9 != 0;
        }
        else if (uVar1 == 0x188) {
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x43) = lVar9 != 0;
        }
        else {
          if (uVar1 != 400) goto LAB_01719b08;
          lVar9 = func_0x01484f88(param_2,iVar5,0);
          *(bool *)(param_1 + 0x4c) = lVar9 != 0;
        }
      }
LAB_01719b8c:
      uVar1 = func_0x01484f58(param_2,iVar5,0);
    } while (uVar1 != 0);
  }
  return;
}



// ===== fat.rawdata.OrderRandomer$$get_XXX_RowIdentifier RVA 0x1709ebc =====

undefined4 FUN_01719ebc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x8c);
}



// ===== fat.rawdata.OrderRandomer$$set_XXX_RowIdentifier RVA 0x1709ec4 =====

void FUN_01719ec4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x8c) = param_2;
  return;
}



// ===== fat.rawdata.OrderRandomer$$.cctor RVA 0x1709ecc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01719ecc(void)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0171a000 + 0x1719edc);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0171a004 + 0x1719ef0));
    func_0x01384978(*(undefined4 *)(_UNK_0171a008 + 0x1719efc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0171a00c + 0x1719f10);
  **(undefined4 **)(*piVar3 + 0x5c) = **(undefined4 **)(_UNK_0171a010 + 0x1719f20);
  uVar1 = func_0x0244f954(0x15a,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4) = uVar1;
  uVar1 = func_0x0244f970(0x12,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8) = uVar1;
  uVar1 = func_0x0244f970(0x22,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc) = uVar1;
  uVar1 = func_0x0244f970(0x92,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10) = uVar1;
  uVar1 = func_0x0244f954(0x1aa,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14) = uVar1;
  uVar1 = func_0x0244f970(0x62,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18) = uVar1;
  uVar1 = func_0x0244f970(0x72,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c) = uVar1;
  uVar1 = func_0x0244f970(0xca,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x20) = uVar1;
  uVar1 = func_0x0244f970(0x1a2,0);
  *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x24) = uVar1;
  return;
}


