
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bf5408(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bf5df4 + 0x2bf5428);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bf5df8 + 0x2bf543c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5dfc + 0x2bf5448));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e00 + 0x2bf5454));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e04 + 0x2bf5460));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e08 + 0x2bf546c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e0c + 0x2bf5478));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e10 + 0x2bf5484));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e14 + 0x2bf5490));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e18 + 0x2bf549c));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e1c + 0x2bf54a8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e20 + 0x2bf54b4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e24 + 0x2bf54c0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e28 + 0x2bf54cc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e2c + 0x2bf54d8));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e30 + 0x2bf54e4));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e34 + 0x2bf54f0));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e38 + 0x2bf54fc));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e3c + 0x2bf5508));
    func_0x01438628(*(undefined4 *)(_UNK_02bf5e40 + 0x2bf5514));
    *pcVar5 = '\x01';
  }
  uStack_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x5e12,0);
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(uint *)(iVar1 + 0xc) <= param_2) {
        func_0x014388e8();
      }
      piVar9 = *(int **)(_UNK_02bf5e44 + 0x2bf55b4);
      iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e48 + 0x2bf55d8));
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = FUN_02bd577c(iVar2,param_2,param_3,uVar6,0);
      if (iVar2 == 0) {
        if (*(int *)(*piVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e4c + 0x2bf5634));
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = FUN_02bd5c68(iVar2,param_2,uVar6,0);
        if (iVar2 == 0) {
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar1 + 0xc);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x11c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          FUN_026f7770(iVar2,0,0);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e50 + 0x2bf56c8));
          uVar6 = *(undefined4 *)(param_1 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = FUN_02bd6808(iVar2,param_2,uVar6,0);
          if (0 < iVar2) {
            do {
              if (*(int *)(**(int **)(_UNK_02bf5e54 + 0x2bf5720) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e58 + 0x2bf573c));
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uStack_28 = func_0x02c4a5b4(iVar3,param_3,0);
              if (*(int *)(*piVar9 + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e5c + 0x2bf578c));
              uVar6 = *(undefined4 *)(param_1 + 0x10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iStack_2c = FUN_02bde7fc(iVar3,param_2,uVar6,0);
              if (iStack_2c == -1) {
                if (*(int *)(*piVar9 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e60 + 0x2bf5b24));
                uVar6 = uStack_28;
                uVar8 = *(undefined4 *)(param_1 + 0x10);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                FUN_02bd560c(iVar3,param_2,uVar6,param_3,uVar8,0);
                uVar6 = func_0x01524ffc(&uStack_28,0);
                uVar6 = func_0x014e9568(**(undefined4 **)(_UNK_02bf5e64 + 0x2bf5b84),uVar6,0);
                iVar7 = **(int **)(_UNK_02bf5e68 + 0x2bf5b98);
                iVar3 = *(int *)(iVar7 + 0x1c);
                if (iVar3 == 0) {
                  func_0x014909d8(iVar7);
                  iVar3 = *(int *)(iVar7 + 0x1c);
                }
                iVar3 = *(int *)(iVar3 + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x0149097c();
                }
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x0149097c();
                }
                uVar8 = **(undefined4 **)(iVar3 + 0x5c);
                if (*(int *)(**(int **)(_UNK_02bf5e6c + 0x2bf5bf8) + 0x74) == 0) {
                  func_0x014387a4(**(int **)(_UNK_02bf5e6c + 0x2bf5bf8));
                }
                func_0x026794a8(uVar6,uVar8,0);
              }
              else {
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uVar6 = func_0x02c3f4b4(iVar1,0);
                func_0x02bf5ea8(param_1,uVar6,uStack_28,0xffffffff,0,1,
                                **(undefined4 **)(_UNK_02bf5e70 + 0x2bf57f8));
                iVar3 = func_0x014386f0(**(undefined4 **)(_UNK_02bf5e74 + 0x2bf5828),6);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar6 = **(undefined4 **)(_UNK_02bf5e78 + 0x2bf5848);
                if (*(int *)(iVar3 + 0xc) == 0) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x10) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x10),uVar6);
                uVar6 = func_0x01524ffc(&uStack_28,0);
                if (*(uint *)(iVar3 + 0xc) < 2) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x14) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x14),uVar6);
                uVar6 = **(undefined4 **)(_UNK_02bf5e7c + 0x2bf58b4);
                if (*(uint *)(iVar3 + 0xc) < 3) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x18) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x18),uVar6);
                uVar6 = func_0x01524ffc(&iStack_2c,0);
                if (*(uint *)(iVar3 + 0xc) < 4) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x1c) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x1c),uVar6);
                uVar6 = **(undefined4 **)(_UNK_02bf5e80 + 0x2bf5918);
                if (*(uint *)(iVar3 + 0xc) < 5) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x20) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x20),uVar6);
                if (iVar1 == 0) {
                  func_0x014388e4();
                }
                uStack_30 = func_0x02c3f4b4(iVar1,0);
                uVar6 = func_0x01524ffc(&uStack_30,0);
                if (*(uint *)(iVar3 + 0xc) < 6) {
                  func_0x014388e8();
                }
                *(undefined4 *)(iVar3 + 0x24) = uVar6;
                func_0x014385cc((undefined4 *)(iVar3 + 0x24),uVar6);
                uVar6 = func_0x024eeeb8(iVar3,0);
                iVar7 = **(int **)(_UNK_02bf5e84 + 0x2bf5998);
                iVar3 = *(int *)(iVar7 + 0x1c);
                if (iVar3 == 0) {
                  func_0x014909d8(iVar7);
                  iVar3 = *(int *)(iVar7 + 0x1c);
                }
                iVar3 = *(int *)(iVar3 + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x0149097c();
                }
                if (*(int *)(iVar3 + 0x74) == 0) {
                  func_0x014387a4();
                }
                iVar3 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
                if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
                  iVar3 = func_0x0149097c();
                }
                uVar8 = **(undefined4 **)(iVar3 + 0x5c);
                if (*(int *)(**(int **)(_UNK_02bf5e88 + 0x2bf5a04) + 0x74) == 0) {
                  func_0x014387a4(**(int **)(_UNK_02bf5e88 + 0x2bf5a04));
                }
                func_0x026794a8(uVar6,uVar8,0);
                iVar3 = *(int *)(param_1 + 0x44);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                if (*(uint *)(iVar3 + 0xc) <= param_2) {
                  func_0x014388e8();
                }
                iVar3 = *(int *)(iVar3 + param_2 * 4 + 0x10);
                if (iVar3 != 0) {
                  if (iVar3 == 0) {
                    func_0x014388e4();
                  }
                  iVar3 = *(int *)(iVar3 + 0xc);
                  if (iVar3 != 0) {
                    if (iVar3 == 0) {
                      func_0x014388e4();
                    }
                    func_0x02c230dc(iVar3,**(undefined4 **)(_UNK_02bf5e8c + 0x2bf5abc),1,0);
                  }
                }
                func_0x02bf5f2c(param_1,param_2,iStack_2c,uStack_28,0,3,1,0,0);
              }
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          func_0x02bf6abc(param_1,param_2);
          iVar2 = FUN_02be9188(param_1);
          if ((0 < iVar2) && (uVar4 = FUN_02be9188(param_1), uVar4 == param_2)) {
            if (*(int *)(**(int **)(_UNK_02bf5e90 + 0x2bf5c64) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bf5e94 + 0x2bf5c80));
            piVar9 = *(int **)(_UNK_02bf5e98 + 0x2bf5c94);
            iVar3 = *piVar9;
            if (*(int *)(iVar3 + 0x74) == 0) {
              func_0x014387a4();
              iVar3 = *piVar9;
            }
            uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x14);
            piVar9 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bf5e9c + 0x2bf5cb8),2);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            uStack_34 = func_0x02c3f4b4(iVar1,0);
            uStack_38 = param_2;
            iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_02bf5ea0 + 0x2bf5cf0),&uStack_38);
            if (piVar9 == (int *)0x0) {
              func_0x014388e4();
            }
            if ((iVar1 != 0) &&
               (iVar3 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)) {
              uVar8 = func_0x01438904();
              func_0x01438790(uVar8,0);
            }
            if (piVar9[3] == 0) {
              func_0x014388e8();
            }
            piVar9[4] = iVar1;
            func_0x014385cc(piVar9 + 4,iVar1);
            uStack_3c = *(undefined4 *)(param_1 + 0x10);
            iVar1 = func_0x014387ac(**(undefined4 **)(_UNK_02bf5ea4 + 0x2bf5d70),&uStack_3c);
            if ((iVar1 != 0) &&
               (iVar3 = func_0x014387a8(iVar1,*(undefined4 *)(*piVar9 + 0x20)), iVar3 == 0)) {
              uVar8 = func_0x01438904();
              func_0x01438790(uVar8,0);
            }
            if ((uint)piVar9[3] < 2) {
              func_0x014388e8();
            }
            piVar9[5] = iVar1;
            func_0x014385cc(piVar9 + 5,iVar1);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar2,uVar6,piVar9,0);
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e12,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x0286b0b0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

