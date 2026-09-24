
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02f9a5e8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [2];
  undefined4 uStack_20;
  
  pcVar10 = (char *)(_UNK_02f9a7bc + 0x2f9a608);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9a7c0 + 0x2f9a61c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9a7c4 + 0x2f9a628));
    func_0x01438628(*(undefined4 *)(_UNK_02f9a7c8 + 0x2f9a634));
    *pcVar10 = '\x01';
  }
  iVar5 = func_0x02953fd4(0x6f6b,0);
  if (iVar5 != 0) {
    iVar5 = func_0x029540a4(0x6f6b,0);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    iVar5 = func_0x028691b4(iVar5,param_1,param_2,param_3);
    return iVar5;
  }
  if (*(int *)(**(int **)(_UNK_02f9a7cc + 0x2f9a69c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9a7d0 + 0x2f9a6b8));
  uVar6 = (**(code **)(*param_1 + 0x1a0))(param_1,*(undefined4 *)(*param_1 + 0x1a4));
  piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02f9a7d4 + 0x2f9a6e8),2);
  if (piVar7 == (int *)0x0) {
    func_0x014388e4();
  }
  if ((param_2 != 0) &&
     (iVar8 = func_0x014387a8(param_2,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
    uVar9 = func_0x01438904();
    func_0x01438790(uVar9,0);
  }
  if (piVar7[3] == 0) {
    func_0x014388e8();
  }
  piVar7[4] = param_2;
  func_0x014385cc(piVar7 + 4,param_2);
  if ((param_3 != 0) &&
     (iVar8 = func_0x014387a8(param_3,*(undefined4 *)(*piVar7 + 0x20)), iVar8 == 0)) {
    uVar9 = func_0x01438904();
    func_0x01438790(uVar9,0);
  }
  if ((uint)piVar7[3] < 2) {
    func_0x014388e8();
  }
  piVar7[5] = param_3;
  func_0x014385cc(piVar7 + 5,param_3);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  iVar8 = func_0x02953fd4(0x1d9,0,piVar7,0);
  if (iVar8 != 0) {
    iVar8 = func_0x029540a4(0x1d9,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    iVar5 = func_0x0286ef30(iVar8,iVar5,uVar6,piVar7);
    return iVar5;
  }
  pcVar10 = (char *)(iRam02b0d1bc + 0x2b0c9ac);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c0 + 0x2b0c9c0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c4 + 0x2b0c9cc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1c8 + 0x2b0c9d8));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1cc + 0x2b0c9e4));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d0 + 0x2b0c9f0));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d4 + 0x2b0c9fc));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1d8 + 0x2b0ca08));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1dc + 0x2b0ca14));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e0 + 0x2b0ca20));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e4 + 0x2b0ca2c));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1e8 + 0x2b0ca38));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1ec + 0x2b0ca44));
    func_0x01438628(*(undefined4 *)(_UNK_02b0d1f0 + 0x2b0ca50));
    *pcVar10 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar8 = func_0x02953fd4(0x185,0);
  if (iVar8 != 0) {
    iVar8 = func_0x029540a4(0x185,0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0286ef30(iVar8,iVar5,uVar6,piVar7,0);
    return iVar5;
  }
  iVar8 = *(int *)(iVar5 + 0x2c);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = func_0x04784bcc(iVar8,uVar6,**(undefined4 **)(_UNK_02b0d1f4 + 0x2b0cad4));
  if (iVar8 == 0) {
    uVar6 = func_0x024eee28(**(undefined4 **)(_UNK_02b0d1fc + 0x2b0cc70),uVar6,
                            **(undefined4 **)(_UNK_02b0d1f8 + 0x2b0cc64),0);
    iVar8 = **(int **)(_UNK_02b0d200 + 0x2b0cc84);
    iVar5 = *(int *)(iVar8 + 0x1c);
    if (iVar5 == 0) {
      func_0x014909d8(iVar8);
      iVar5 = *(int *)(iVar8 + 0x1c);
    }
    iVar5 = *(int *)(iVar5 + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    uVar9 = **(undefined4 **)(iVar5 + 0x5c);
    if (*(int *)(**(int **)(_UNK_02b0d204 + 0x2b0cce4) + 0x74) == 0) {
      func_0x014387a4(**(int **)(_UNK_02b0d204 + 0x2b0cce4));
    }
    func_0x026795f8(uVar6,uVar9,0);
    return 0;
  }
  iVar8 = *(int *)(iVar5 + 0x2c);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar1 = func_0x0478480c(&iStack_38,iVar8,uVar6,**(undefined4 **)(_UNK_02b0d208 + 0x2b0cb08));
  iVar8 = *(int *)(iVar5 + 0x10);
  if (iStack_38 == 1) {
    uVar1 = (uint)*(byte *)(iVar5 + 0x20);
  }
  if (iStack_38 == 1 && uVar1 == 0) {
    *(undefined1 *)(iVar5 + 0x20) = 1;
  }
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  iVar8 = func_0x0475561c(iVar8,uVar6,aiStack_28,**(undefined4 **)(_UNK_02b0d20c + 0x2b0cb54));
  if (iVar8 == 0) {
    iVar8 = func_0x02b1cc10(0);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02b1da0c(iVar8,uVar6,iStack_38,3,uStack_30,0);
    aiStack_28[0] = iVar8;
    if (*(int *)(**(int **)(_UNK_02b0d210 + 0x2b0cbb4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x024ef144(iVar8,0,0);
    iVar8 = aiStack_28[0];
    if (iVar2 == 0) {
      uVar6 = func_0x014e9568(**(undefined4 **)(_UNK_02b0d22c + 0x2b0cd2c),uVar6,0);
      iVar8 = **(int **)(_UNK_02b0d230 + 0x2b0cd40);
      iVar5 = *(int *)(iVar8 + 0x1c);
      if (iVar5 == 0) {
        func_0x014909d8(iVar8);
        iVar5 = *(int *)(iVar8 + 0x1c);
      }
      iVar5 = *(int *)(iVar5 + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
      if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
        iVar5 = func_0x0149097c();
      }
      uVar9 = **(undefined4 **)(iVar5 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02b0d234 + 0x2b0cda0) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02b0d234 + 0x2b0cda0));
      }
      func_0x026795f8(uVar6,uVar9,0);
      return aiStack_28[0];
    }
    iVar2 = *(int *)(iVar5 + 0x10);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    func_0x04753a0c(iVar2,uVar6,iVar8,**(undefined4 **)(_UNK_02b0d214 + 0x2b0cc08));
    iVar8 = aiStack_28[0];
    if (aiStack_28[0] == 0) {
      func_0x014388e4();
    }
    FUN_02b20500(iVar8,uVar6,0);
    if (aiStack_28[0] == 0) {
      func_0x014388e4();
      iRam00000020 = iStack_38;
      if (aiStack_28[0] == 0) {
        uVar12 = func_0x014388e4();
        uVar6 = (undefined4)uVar12;
        if ((int)((ulonglong)uVar12 >> 0x20) != 1) {
LAB_02b0d1b0:
          func_0x014e7cd4(uVar6);
          func_0x010acc44();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar11 = (undefined4 *)func_0x014e9498(uVar6);
        uVar6 = func_0x01438638(*(undefined4 *)(_UNK_02b0d23c + 0x2b0d0ac));
        iVar8 = func_0x01438d6c(uVar6,*(undefined4 *)*puVar11);
        if (iVar8 == 0) {
          puVar4 = (undefined4 *)func_0x014e9578(4);
          iVar5 = _UNK_02b0d248;
          *puVar4 = *puVar11;
          uVar6 = func_0x014e9588(puVar4,iVar5 + 0x2b0d1a4,0);
          func_0x014e9558();
          goto LAB_02b0d1b0;
        }
        piVar3 = (int *)*puVar11;
        func_0x014e9558();
        if (piVar3 == (int *)0x0) {
          func_0x014388e4();
        }
        uVar6 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
        iVar8 = func_0x01438638(*(undefined4 *)(_UNK_02b0d240 + 0x2b0d0f8));
        iVar2 = *(int *)(iVar8 + 0x1c);
        if (iVar2 == 0) {
          func_0x014909d8(iVar8);
          iVar2 = *(int *)(iVar8 + 0x1c);
        }
        iVar2 = *(int *)(iVar2 + 8);
        if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
          iVar2 = func_0x0149097c();
        }
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar8 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
        if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
          iVar8 = func_0x0149097c();
        }
        uVar9 = **(undefined4 **)(iVar8 + 0x5c);
        iVar8 = func_0x01438638(*(undefined4 *)(_UNK_02b0d244 + 0x2b0d164));
        if (*(int *)(iVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(uVar6,uVar9,0);
        goto LAB_02b0cf5c;
      }
    }
    else {
      *(int *)(aiStack_28[0] + 0x20) = iStack_38;
    }
    *(undefined4 *)(aiStack_28[0] + 0x24) = uStack_34;
    func_0x02b0d454(iVar5,aiStack_28[0],iStack_38,uStack_34,uStack_30,uStack_2c);
  }
  if (iStack_38 != 2) {
    iVar8 = *(int *)(iVar5 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x0475561c(iVar8,uVar6,aiStack_28,**(undefined4 **)(_UNK_02b0d218 + 0x2b0ce2c));
    iVar8 = aiStack_28[0];
    if (iVar2 == 0) {
      iVar2 = *(int *)(iVar5 + 0x14);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar8 = func_0x03b67d0c(iVar2,iVar8,**(undefined4 **)(_UNK_02b0d21c + 0x2b0ce60));
      if (iVar8 == 0) {
        if (iStack_38 == 0) {
          iVar8 = *(int *)(iVar5 + 0x14);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar8 + 0xc)) {
            iVar8 = *(int *)(iVar5 + 0x14);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x03b680f4(iVar8,**(undefined4 **)(_UNK_02b0d220 + 0x2b0d00c));
            if (*(int *)(**(int **)(_UNK_02b0d224 + 0x2b0d024) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(iVar8,0,0);
            if (iVar2 != 0) {
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              FUN_02b212e4(iVar8,1,0,0);
            }
          }
        }
        iVar8 = aiStack_28[0];
        iVar2 = *(int *)(iVar5 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x03b681a8(iVar2,iVar8,**(undefined4 **)(_UNK_02b0d228 + 0x2b0cf54));
      }
      else {
        iVar8 = *(int *)(iVar5 + 0x14);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        if (0 < *(int *)(iVar8 + 0xc)) {
          puVar11 = *(undefined4 **)(_UNK_02b0d238 + 0x2b0ce98);
          while( true ) {
            iVar8 = *(int *)(iVar5 + 0x14);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            piVar3 = (int *)func_0x03b680f4(iVar8,*puVar11);
            iVar8 = aiStack_28[0];
            if (piVar3 == (int *)0x0) {
              func_0x014388e4();
            }
            iVar8 = (**(code **)(*piVar3 + 0xc0))(piVar3,iVar8,*(undefined4 *)(*piVar3 + 0xc4));
            if (iVar8 != 0) break;
            iVar8 = *(int *)(iVar5 + 0x14);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            iVar8 = func_0x03b680f4(iVar8,*puVar11);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            FUN_02b212e4(iVar8,1,0,0);
          }
        }
      }
    }
  }
LAB_02b0cf5c:
  iVar8 = aiStack_28[0];
  if (aiStack_28[0] == 0) {
    func_0x014388e4();
  }
  iVar8 = func_0x014e94d8(iVar8,0);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  func_0x014e94e8(iVar8,1,0);
  func_0x02b0d808(iVar5,aiStack_28[0]);
  iVar5 = aiStack_28[0];
  if (aiStack_28[0] == 0) {
    func_0x014388e4();
  }
  FUN_02b20ab0(iVar5,piVar7,0);
  return aiStack_28[0];
}

