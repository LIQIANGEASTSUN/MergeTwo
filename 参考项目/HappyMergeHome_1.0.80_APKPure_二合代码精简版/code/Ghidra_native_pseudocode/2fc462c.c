
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02fd462c(undefined4 param_1)

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
  
  pcVar6 = (char *)(_UNK_02fd4ea4 + 0x2fd4644);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ea8 + 0x2fd4658));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4eac + 0x2fd4664));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4eb0 + 0x2fd4670));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4eb4 + 0x2fd467c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4eb8 + 0x2fd4688));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ebc + 0x2fd4694));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ec0 + 0x2fd46a0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ec4 + 0x2fd46ac));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ec8 + 0x2fd46b8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ecc + 0x2fd46c4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ed0 + 0x2fd46d0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ed4 + 0x2fd46dc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ed8 + 0x2fd46e8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4edc + 0x2fd46f4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ee0 + 0x2fd4700));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ee4 + 0x2fd470c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4ee8 + 0x2fd4718));
    func_0x01438628(*(undefined4 *)(_UNK_02fd4eec + 0x2fd4724));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1560,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1560,0);
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
  piVar8 = *(int **)(_UNK_02fd4ef0 + 0x2fd4780);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02fd4ef4 + 0x2fd479c);
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
  if (*(int *)(**(int **)(_UNK_02fd4ef8 + 0x2fd47c8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x02fd5440();
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  if (*(int *)(iVar2 + 0xc) < 1) {
    iVar2 = FUN_02fd18c4(param_1,0);
    if (iVar2 == 0) {
      if (*(int *)(**(int **)(_UNK_02fd4f10 + 0x2fd4bf8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd4f14 + 0x2fd4c14));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar9 = *(undefined4 **)(_UNK_02fd4f18 + 0x2fd4c38);
      iVar2 = func_0x036c7bec(iVar2,*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x38c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02fd4f1c + 0x2fd4c68));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02fd4f20 + 0x2fd4c80));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_02fd4f24 + 0x2fd4c98));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if (-1 < (int)uVar1) {
        uVar12 = 0;
        puVar15 = *(undefined4 **)(_UNK_02fd4f28 + 0x2fd4cc8);
        puVar11 = *(undefined4 **)(_UNK_02fd4f2c + 0x2fd4cd0);
        do {
          if (*(int *)(**(int **)(_UNK_02fd4f30 + 0x2fd4cd8) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd4f34 + 0x2fd4cf4));
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x036c7bec(iVar5,*puVar9);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = *(int *)(iVar5 + 0x38c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar15);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar11);
          if (*(int *)(**(int **)(_UNK_02fd4f38 + 0x2fd4d74) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x02fd4f74(iVar5);
          if (iVar3 != 0) {
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
              FUN_026cf058(iVar5,1,0);
              if (*(int *)(**(int **)(_UNK_02fd4f3c + 0x2fd4dd4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd4f40 + 0x2fd4df0));
              piVar8 = *(int **)(_UNK_02fd4f44 + 0x2fd4e04);
              iVar3 = *piVar8;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar8;
              }
              uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9ac);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar7 = func_0x02b0c90c(iVar5,uVar7,0,0);
              if (*(int *)(**(int **)(_UNK_02fd4f48 + 0x2fd4e50) + 0x74) == 0) {
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
      iVar2 = FUN_02fd18c4(param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_02fd4f4c + 0x2fd4a18) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar9 = *(undefined4 **)(_UNK_02fd4f50 + 0x2fd4a34);
      iVar2 = func_0x04e4a028(*puVar9);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      puVar15 = *(undefined4 **)(_UNK_02fd4f54 + 0x2fd4a58);
      iVar2 = func_0x036c7bec(iVar2,*puVar15);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x38c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_02fd4f58 + 0x2fd4a88));
      iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02fd4f5c + 0x2fd4aa0));
      func_0x04cfd2f0(iVar2,uVar7,**(undefined4 **)(_UNK_02fd4f60 + 0x2fd4ab8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar1 = *(int *)(iVar2 + 0xc) - 1;
      if ((int)uVar1 < 0) {
        return 0;
      }
      puVar11 = *(undefined4 **)(_UNK_02fd4f64 + 0x2fd4ae4);
      puVar14 = *(undefined4 **)(_UNK_02fd4f68 + 0x2fd4aec);
      do {
        if (*(int *)(**(int **)(_UNK_02fd4f6c + 0x2fd4af4) + 0x74) == 0) {
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
        iVar5 = *(int *)(iVar5 + 0x38c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x04cfd760(iVar2,uVar1,*puVar11);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x03b73d40(iVar5,uVar7,*puVar14);
        if (*(int *)(**(int **)(_UNK_02fd4f70 + 0x2fd4b88) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x02fd4f74(iVar5);
        if (iVar3 != 0) {
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          if ((*(char *)(iVar5 + 8) != '\0') && (*(char *)(iVar5 + 0x40) == '\0')) {
            FUN_026cf058(iVar5,1,0);
          }
        }
        uVar1 = uVar1 - 1;
      } while (uVar1 < 0x80000000);
    }
    return 0;
  }
  piVar8 = *(int **)(_UNK_02fd4efc + 0x2fd4804);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar9 = *(undefined4 **)(_UNK_02fd4f00 + 0x2fd4820);
  iVar5 = func_0x04e4a028(*puVar9);
  piVar13 = *(int **)(_UNK_02fd4f04 + 0x2fd4834);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    func_0x014387a4();
    iVar3 = *piVar13;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9ac);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar7 = func_0x02b0fd48(iVar5,uVar7,0);
  piVar10 = *(int **)(_UNK_02fd4f08 + 0x2fd487c);
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
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x9ac);
  piVar8 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02fd4f0c + 0x2fd48f0),1);
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

