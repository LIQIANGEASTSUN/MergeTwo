
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be46ac(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02be5000 + 0x2be46cc);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be5004 + 0x2be46e4));
    func_0x01438628(*(undefined4 *)(_UNK_02be5008 + 0x2be46f0));
    func_0x01438628(*(undefined4 *)(_UNK_02be500c + 0x2be46fc));
    func_0x01438628(*(undefined4 *)(_UNK_02be5010 + 0x2be4708));
    func_0x01438628(*(undefined4 *)(_UNK_02be5014 + 0x2be4714));
    func_0x01438628(*(undefined4 *)(_UNK_02be5018 + 0x2be4720));
    func_0x01438628(*(undefined4 *)(_UNK_02be501c + 0x2be472c));
    func_0x01438628(*(undefined4 *)(_UNK_02be5020 + 0x2be4738));
    func_0x01438628(*(undefined4 *)(_UNK_02be5024 + 0x2be4744));
    func_0x01438628(*(undefined4 *)(_UNK_02be5028 + 0x2be4750));
    func_0x01438628(*(undefined4 *)(_UNK_02be502c + 0x2be475c));
    func_0x01438628(*(undefined4 *)(_UNK_02be5030 + 0x2be4768));
    func_0x01438628(*(undefined4 *)(_UNK_02be5034 + 0x2be4774));
    func_0x01438628(*(undefined4 *)(_UNK_02be5038 + 0x2be4780));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1b34,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be503c + 0x2be47fc));
    func_0x046c19b0(iVar1,**(undefined4 **)(_UNK_02be5040 + 0x2be4810));
    iVar2 = FUN_02baeec8(param_1);
    if (iVar2 == 0) {
      if (param_2 != 0) {
        iVar2 = 0;
        puVar8 = *(undefined4 **)(_UNK_02be5044 + 0x2be4840);
        while( true ) {
          iVar3 = FUN_02baddd0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar2) break;
          iVar3 = FUN_02baddd0(param_1);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x03b780b0(iVar3,iVar2,*puVar8);
          iVar3 = FUN_02baf28c(param_1,uVar4);
          if (iVar3 != 0) {
            if (param_5 == 0) {
              if (*(int *)(**(int **)(_UNK_02be5048 + 0x2be48d4) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be504c + 0x2be48f0));
              iVar5 = FUN_02baddd0(param_1);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x03b780b0(iVar5,iVar2,*puVar8);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar4 = *(undefined4 *)(iVar5 + 8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x0204ff34(iVar3,uVar4,0);
              if (iVar3 == 0) goto LAB_02be4b08;
            }
            iVar3 = FUN_02baddd0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar4 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x046c26fc(iVar1,uVar4,**(undefined4 **)(_UNK_02be5050 + 0x2be49d0));
            if (iVar3 == 0) {
              iVar3 = FUN_02baddd0(param_1);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = *(int *)(iVar3 + 0x10);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar8);
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              uVar4 = *(undefined4 *)(iVar3 + 8);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x046c24b0(iVar1,uVar4,0,**(undefined4 **)(_UNK_02be5054 + 0x2be4a4c));
            }
            iVar3 = FUN_02baddd0(param_1);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x03b780b0(iVar3,iVar2,*puVar8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar4 = *(undefined4 *)(iVar3 + 8);
            if (iVar1 == 0) {
              func_0x014388e4();
              iVar3 = func_0x046c23f8(0,uVar4,**(undefined4 **)(_UNK_02be505c + 0x2be4adc));
              func_0x014388e4();
            }
            else {
              iVar3 = func_0x046c23f8(iVar1,uVar4,**(undefined4 **)(_UNK_02be5058 + 0x2be4ab8));
            }
            func_0x046c2488(iVar1,uVar4,iVar3 + 1,**(undefined4 **)(_UNK_02be5060 + 0x2be4b00));
          }
LAB_02be4b08:
          iVar2 = iVar2 + 1;
        }
      }
      if (param_3 != 0) {
        iVar2 = FUN_02baddd0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x1c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_48,iVar2,**(undefined4 **)(_UNK_02be5064 + 0x2be4b58));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_02be5068 + 0x2be4b78);
        puVar9 = *(undefined4 **)(_UNK_02be506c + 0x2be4b80);
        puVar7 = *(undefined4 **)(_UNK_02be5070 + 0x2be4b88);
LAB_02be4b84:
        iVar3 = func_0x04878f14(&uStack_38,*puVar8);
        iVar2 = iStack_2c;
        if (iVar3 != 0) {
          if (param_5 == 0) goto LAB_02be4bb8;
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          goto LAB_02be4c1c;
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02be50a0 + 0x2be4ccc));
      }
      if (param_4 != 0) {
        iVar2 = FUN_02baddd0(param_1);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x14);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        func_0x0152da0c(&uStack_48,iVar2,**(undefined4 **)(_UNK_02be5088 + 0x2be4d1c));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        iStack_2c = iStack_3c;
        puVar8 = *(undefined4 **)(_UNK_02be508c + 0x2be4d3c);
        puVar9 = *(undefined4 **)(_UNK_02be5090 + 0x2be4d44);
        puVar10 = *(undefined4 **)(_UNK_02be5094 + 0x2be4d4c);
        puVar7 = *(undefined4 **)(_UNK_02be5098 + 0x2be4d54);
LAB_02be4d50:
        iVar3 = func_0x04878f14(&uStack_38,*puVar8);
        iVar2 = iStack_2c;
        if (iVar3 != 0) {
          if (param_5 == 0) goto LAB_02be4d84;
          if (iStack_2c == 0) {
            func_0x014388e4();
          }
          goto LAB_02be4de8;
        }
        func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02be509c + 0x2be4e90));
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x1b34,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028b10c8(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return iVar1;
LAB_02be4d84:
  if (*(int *)(**(int **)(_UNK_02be50a8 + 0x2be4d90) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be50ac + 0x2be4dac));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar2 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x0204ff34(iVar3,uVar4,0);
  if (iVar3 != 0) {
LAB_02be4de8:
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046c26fc(iVar1,uVar4,*puVar9);
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(iVar2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x046c24b0(iVar1,uVar4,0,**(undefined4 **)(_UNK_02be50b0 + 0x2be4e2c));
    }
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046c23f8(iVar1,uVar4,*puVar10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046c2488(iVar1,uVar4,iVar2 + 1,*puVar7);
  }
  goto LAB_02be4d50;
LAB_02be4bb8:
  if (*(int *)(**(int **)(_UNK_02be5074 + 0x2be4bc4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02be5078 + 0x2be4be0));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar4 = *(undefined4 *)(iVar2 + 8);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  iVar3 = func_0x0204ff34(iVar3,uVar4,0);
  if (iVar3 != 0) {
LAB_02be4c1c:
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046c26fc(iVar1,uVar4,**(undefined4 **)(_UNK_02be507c + 0x2be4c38));
    if (iVar3 == 0) {
      uVar4 = *(undefined4 *)(iVar2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x046c24b0(iVar1,uVar4,0,**(undefined4 **)(_UNK_02be5080 + 0x2be4c68));
    }
    uVar4 = *(undefined4 *)(iVar2 + 8);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x046c23f8(iVar1,uVar4,*puVar9);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x046c2488(iVar1,uVar4,iVar2 + 1,*puVar7);
  }
  goto LAB_02be4b84;
}

