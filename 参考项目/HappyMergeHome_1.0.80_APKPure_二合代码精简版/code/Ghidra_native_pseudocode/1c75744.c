
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c85744(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  int **ppiStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  
  pcVar9 = (char *)(_UNK_01c85d18 + 0x1c85764);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01c85d1c + 0x1c85784));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d20 + 0x1c85790));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d24 + 0x1c8579c));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d28 + 0x1c857a8));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d2c + 0x1c857b4));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d30 + 0x1c857c0));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d34 + 0x1c857cc));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d38 + 0x1c857d8));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d3c + 0x1c857e4));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d40 + 0x1c857f0));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d44 + 0x1c857fc));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d48 + 0x1c85808));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d4c + 0x1c85814));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d50 + 0x1c85820));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d54 + 0x1c8582c));
    func_0x01438628(*(undefined4 *)(_UNK_01c85d58 + 0x1c85838));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5de,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01c85d5c + 0x1c858a8));
    func_0x01c8824c(iVar1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    uVar2 = func_0x014385cc((undefined4 *)(iVar1 + 8),param_1);
    if (0 < param_2) {
      iVar3 = FUN_01c733a0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026aeaa4(iVar3,*(int *)(iVar3 + 0x3c) + param_2,0);
      iVar3 = FUN_01c812f0(param_1);
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = FUN_01c733a0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = (uint)*(byte *)(iVar3 + 0x20);
        if (uVar2 == 0) {
          iVar3 = FUN_01c733a0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          piVar6 = *(int **)(_UNK_01c85d60 + 0x1c85968);
          piVar7 = *(int **)(iVar3 + 0x10);
          iVar3 = *piVar6;
          if (*(int *)(iVar3 + 0x74) == 0) {
            func_0x014387a4();
            piVar6 = *(int **)(_UNK_01c85d64 + 0x1c85990);
            iVar3 = *piVar6;
          }
          iVar10 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x18);
          if (iVar10 == 0) {
            piStack_28 = piVar7;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x014387a4();
              iVar3 = *piVar6;
            }
            iStack_2c = **(undefined4 **)(iVar3 + 0x5c);
            iVar10 = func_0x014388d4(**(undefined4 **)(_UNK_01c85d68 + 0x1c859cc));
            func_0x03a062d0(iVar10,iStack_2c,**(undefined4 **)(_UNK_01c85d6c + 0x1c859ec),0);
            piVar7 = (int *)(*(int *)(**(int **)(_UNK_01c85d70 + 0x1c85a08) + 0x5c) + 0x18);
            *piVar7 = iVar10;
            func_0x014385cc(piVar7,iVar10);
            piVar7 = piStack_28;
          }
          if (piVar7 == (int *)0x0) {
            piStack_28 = piVar7;
            func_0x014388e4();
            piVar7 = piStack_28;
          }
          iVar3 = func_0x024f0618(piVar7,iVar10,**(undefined4 **)(_UNK_01c85d74 + 0x1c85a3c));
          piVar7 = (int *)(iVar1 + 0xc);
          *piVar7 = iVar3;
          func_0x014385cc(piVar7);
          iVar3 = *piVar7;
          uVar2 = 0;
          if (iVar3 != 0) {
            func_0x026b03d0(iVar3,*(undefined4 *)(iVar3 + 0x1c),0);
            iVar3 = *piVar7;
            piStack_28 = piVar7;
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x026b048c(iVar3,*(int *)(iVar3 + 0x18) + param_2,0);
            iStack_2c = *piStack_28;
            if (*(int *)(**(int **)(_UNK_01c85d78 + 0x1c85aa4) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01c85d7c + 0x1c85acc));
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar12 = func_0x026ffbe0(iVar3,0);
            uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
            if (iStack_2c == 0) {
              uStack_30 = uVar4;
              func_0x014388e4();
              uVar4 = uStack_30;
            }
            uStack_40 = 0;
            func_0x026b0548(iStack_2c,0,(int)uVar12,uVar4);
            if (param_6 == 0) {
              FUN_01c84820(param_1);
              FUN_01c84c48(param_1);
              if (*(int *)(**(int **)(_UNK_01c85d88 + 0x1c85b94) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01c85d8c + 0x1c85bb0));
              piVar7 = *(int **)(_UNK_01c85d90 + 0x1c85bc4);
              iVar3 = *piVar7;
              if (*(int *)(iVar3 + 0x74) == 0) {
                func_0x014387a4();
                iVar3 = *piVar7;
              }
              uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x2c8);
              piVar7 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_01c85d94 + 0x1c85be8),1);
              iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01c85d98 + 0x1c85c04));
              func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01c85d9c + 0x1c85c18));
              iVar10 = *piStack_28;
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar8 = *(int *)(iVar3 + 8);
              uVar2 = *(uint *)(iVar3 + 0xc);
              piVar6 = *(int **)(_UNK_01c85da0 + 0x1c85c54);
              *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
              iVar11 = *piVar6;
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              if (uVar2 < *(uint *)(iVar8 + 0xc)) {
                *(uint *)(iVar3 + 0xc) = uVar2 + 1;
                piVar6 = (int *)(iVar8 + uVar2 * 4 + 0x10);
                *piVar6 = iVar10;
                func_0x014385cc(piVar6,iVar10);
              }
              else {
                func_0x0152874c(iVar3,iVar10,
                                *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
              }
              if (piVar7 == (int *)0x0) {
                func_0x014388e4();
              }
              iVar10 = func_0x014387a8(iVar3,*(undefined4 *)(*piVar7 + 0x20));
              if (iVar10 == 0) {
                uVar5 = func_0x01438904();
                func_0x01438790(uVar5,0);
              }
              if (piVar7[3] == 0) {
                func_0x014388e8();
              }
              piVar7[4] = iVar3;
              func_0x014385cc(piVar7 + 4,iVar3);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              pcVar9 = (char *)(_UNK_029903f0 + 0x29901d4);
              if (*pcVar9 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar4,piVar7,0);
                func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
                func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
                func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
                *pcVar9 = '\x01';
              }
              piStack_28 = (int *)0x0;
              iStack_2c = 0;
              iVar3 = func_0x02953fd4(0x226,0);
              if (iVar3 == 0) {
                iVar3 = *(int *)(iVar1 + 0x14);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                iVar3 = func_0x04753c80(iVar3,uVar4,**(undefined4 **)(_UNK_02990404 + 0x2990298));
                uVar2 = 0;
                if (iVar3 != 0) {
                  iVar3 = *(int *)(iVar1 + 0x14);
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = func_0x0475399c(iVar3,uVar4,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
                  if (iVar3 != 0) {
                    iVar3 = *(int *)(iVar1 + 0x10);
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    iVar3 = func_0x024f2f10(iVar3,0);
                    if (iVar3 == 0) {
                      iVar3 = *(int *)(iVar1 + 0x10);
                      if (iVar3 == 0) {
                        func_0x014388e4();
                      }
                      iVar3 = func_0x024f2f20(iVar3,200,0);
                      if (iVar3 == 0) {
                        return 0;
                      }
                    }
                    ppiStack_34 = &piStack_28;
                    puStack_38 = &uStack_30;
                    puStack_3c = &stack0xffffffdc;
                    uStack_40 = 0;
                    uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
                    func_0x0298fd74(uVar5,uVar4,piVar7);
                    iVar1 = *(int *)(iVar1 + 0x18);
                    if (iVar1 == 0) {
                      func_0x014388e4();
                    }
                    func_0x03a39760(iVar1,uVar5,**(undefined4 **)(_UNK_02990410 + 0x299038c));
                    func_0x010b8c68(&uStack_40);
                    uVar2 = 1;
                  }
                }
              }
              else {
                iVar3 = func_0x029540a4(0x226,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar2 = func_0x02871898(iVar3,iVar1,uVar4,piVar7,0);
              }
              return uVar2;
            }
            uVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01c85d80 + 0x1c85b34));
            func_0x0152e3ec(uVar4,iVar1,**(undefined4 **)(_UNK_01c85d84 + 0x1c85b50),0);
            uStack_40 = param_5;
            puStack_3c = (undefined1 *)uVar4;
            uVar2 = func_0x01c860bc(param_1,param_2,param_3,param_4);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5de,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_3c = (undefined1 *)param_5;
    puStack_38 = (undefined4 *)param_6;
    ppiStack_34 = (int **)0x0;
    uStack_40 = param_4;
    uVar2 = func_0x02871e44(iVar1,param_1,param_2,param_3);
  }
  return uVar2;
}

