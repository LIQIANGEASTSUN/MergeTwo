
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02f9a87c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_02f9b0f4 + 0x2f9a894);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9b0f8 + 0x2f9a8a8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b0fc + 0x2f9a8b4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b100 + 0x2f9a8c0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b104 + 0x2f9a8cc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b108 + 0x2f9a8d8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b10c + 0x2f9a8e4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b110 + 0x2f9a8f0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b114 + 0x2f9a8fc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b118 + 0x2f9a908));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b11c + 0x2f9a914));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b120 + 0x2f9a920));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b124 + 0x2f9a92c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b128 + 0x2f9a938));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b12c + 0x2f9a944));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b130 + 0x2f9a950));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b134 + 0x2f9a95c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b138 + 0x2f9a968));
    func_0x01438628(*(undefined4 *)(_UNK_02f9b13c + 0x2f9a974));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x14e2,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x14e2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar2 + 8);
    uVar7 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar2 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
    uVar1 = func_0x024f56e0(&uStack_30,0,0);
    return uVar1;
  }
  piVar8 = *(int **)(_UNK_02f9b140 + 0x2f9a9d0);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02f9b144 + 0x2f9a9ec);
  iVar2 = func_0x04e4a028(*puVar9);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar2 + 0x10) == '\0') {
    if (*(int *)(*piVar8 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(*puVar9);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar2 + 0x38) != 0 || *(int *)(iVar2 + 0x3c) != 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_02f9b148 + 0x2f9aa18) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x02f9b690();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_02f97c18(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_02f9b160 + 0x2f9ae48) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9b164 + 0x2f9ae64));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_02f9b168 + 0x2f9ae88);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x380);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02f9b16c + 0x2f9aeb8));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f9b170 + 0x2f9aed0));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_02f9b174 + 0x2f9aee8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_02f9b178 + 0x2f9af18);
        puVar11 = *(undefined4 **)(_UNK_02f9b17c + 0x2f9af20);
        do {
          if (*(int *)(**(int **)(_UNK_02f9b180 + 0x2f9af28) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9b184 + 0x2f9af44));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x380);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_02f9b188 + 0x2f9afc4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x02f9b1c4(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              FUN_026ef7d8(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_02f9b18c + 0x2f9b024) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9b190 + 0x2f9b040));
              piVar8 = *(int **)(_UNK_02f9b194 + 0x2f9b054);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x934);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_02f9b198 + 0x2f9b0a0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x024eec50(uVar7,0,0);
              uVar12 = 1;
              if (iVar5 != 0) {
                return 0;
              }
            }
          }
          uVar1 = uVar1 - 1;
          if (0x7fffffff < uVar1) {
            return uVar12;
          }
        } while( true );
      }
    }
    else {
      iVar2 = FUN_02f97c18(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_02f9b19c + 0x2f9ac68) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_02f9b1a0 + 0x2f9ac84);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_02f9b1a4 + 0x2f9aca8);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x380);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02f9b1a8 + 0x2f9acd8));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f9b1ac + 0x2f9acf0));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_02f9b1b0 + 0x2f9ad08));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_02f9b1b4 + 0x2f9ad34);
      puVar14 = *(undefined4 **)(_UNK_02f9b1b8 + 0x2f9ad3c);
      do {
        if (*(int *)(**(int **)(_UNK_02f9b1bc + 0x2f9ad44) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(*puVar9);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x036c7bec(iVar5,*puVar15);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = *(int *)(iVar5 + 0x380);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_02f9b1c0 + 0x2f9add8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02f9b1c4(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            FUN_026ef7d8(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_02f9b14c + 0x2f9aa54);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02f9b150 + 0x2f9aa70);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_02f9b154 + 0x2f9aa84);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x934);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_02f9b158 + 0x2f9aacc);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x024ef144(uVar7,0,0);
  if (iVar5 != 0) {
    return 1;
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(*puVar9);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x934);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f9b15c + 0x2f9ab40),1);
  if (piVar8 == (int *)0x0) {
    func_0x014388e4();
  }
  iVar3 = func_0x014387a8(iVar2,*(undefined4 *)(*piVar8 + 0x20));
  if (iVar3 == 0) {
    uVar4 = func_0x01438904();
    func_0x01438790(uVar4,0);
  }
  if (piVar8[3] == 0) {
    func_0x014388e8();
  }
  piVar8[4] = iVar2;
  func_0x014385cc(piVar8 + 4,iVar2);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0c90c(iVar5,uVar7,piVar8,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar1 = func_0x024eec50(uVar7,0,0);
  return uVar1 ^ 1;
}

