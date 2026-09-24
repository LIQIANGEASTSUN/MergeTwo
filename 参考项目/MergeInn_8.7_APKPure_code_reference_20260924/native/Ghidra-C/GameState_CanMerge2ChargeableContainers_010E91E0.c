// Tool: Ghidra 12.1.2 with no global analysis; native pseudocode, not original C#
// Source candidate: GameState.CanMerge2ChargeableContainers 0x10E91E0; GameState::CanMerge2ChargeableContainers()
// Image base: 0x10000; Ghidra address: 010f91e0; native size hint: 0x53C


undefined4 GameState_CanMerge2ChargeableContainers_010E91E0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(iRam010f96c4 + 0x10f9200);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f96c8 + 0x10f9214));
    func_0x00f6b160(*(undefined4 *)(iRam010f96cc + 0x10f9220));
    func_0x00f6b160(*(undefined4 *)(iRam010f96d0 + 0x10f922c));
    func_0x00f6b160(*(undefined4 *)(iRam010f96d4 + 0x10f9238));
    func_0x00f6b160(*(undefined4 *)(iRam010f96d8 + 0x10f9244));
    func_0x00f6b160(*(undefined4 *)(iRam010f96dc + 0x10f9250));
    func_0x00f6b160(*(undefined4 *)(iRam010f96e0 + 0x10f925c));
    func_0x00f6b160(*(undefined4 *)(iRam010f96e4 + 0x10f9268));
    func_0x00f6b160(*(undefined4 *)(iRam010f96e8 + 0x10f9274));
    *pcVar3 = '\x01';
  }
  iVar1 = **(int **)(iRam010f96ec + 0x10f9294);
  piVar5 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_2 + 0xb8)) &&
       (piVar5 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
      piVar5 = (int *)0x0;
    }
  }
  piVar6 = (int *)0x0;
  if (param_3 != (int *)0x0) {
    if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_3 + 0xb8)) &&
       (piVar6 = param_3,
       *(int *)(*(int *)(*param_3 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
      piVar6 = (int *)0x0;
    }
  }
  piVar7 = *(int **)(iRam010f96f0 + 0x10f9304);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x020081fc(piVar5,0);
  if (iVar1 != 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar1 = func_0x020081fc(piVar6,0);
    if (iVar1 != 0) {
      if (piVar5 == (int *)0x0) {
        func_0x00f6b3d0();
      }
      iVar1 = piVar5[0x32];
      if (iVar1 == 0) {
        func_0x00f6b3d0();
      }
      iVar1 = func_0x01113c58(iVar1,0);
      if (iVar1 == 0) {
        if (piVar6 == (int *)0x0) {
          func_0x00f6b3d0();
        }
        iVar1 = piVar6[0x32];
        if (iVar1 == 0) {
          func_0x00f6b3d0();
        }
        iVar1 = func_0x01113c58(iVar1,0);
        if (iVar1 == 0) {
          piVar7 = *(int **)(iRam010f9704 + 0x10f9544);
          uVar10 = *(undefined4 *)(param_1 + 0x40);
          iVar1 = *piVar7;
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x00f6b294();
            iVar1 = *piVar7;
          }
          puVar2 = *(undefined4 **)(iVar1 + 0x5c);
          iVar8 = puVar2[0xb];
          if (iVar8 == 0) {
            if (*(int *)(iVar1 + 0x74) == 0) {
              func_0x00f6b294();
              puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
            }
            uVar9 = *puVar2;
            iVar8 = func_0x00f6b3c4(**(undefined4 **)(iRam010f9708 + 0x10f9590));
            func_0x02943e34(iVar8,uVar9,**(undefined4 **)(iRam010f970c + 0x10f95b0),0);
            *(int *)(*(int *)(*piVar7 + 0x5c) + 0x2c) = iVar8;
          }
          iVar1 = func_0x0198329c(uVar10,iVar8,**(undefined4 **)(iRam010f9710 + 0x10f95d4));
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          iVar8 = piVar5[0x32];
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar8 == 0) {
            func_0x00f6b3d0();
          }
          iVar8 = func_0x01113db4(iVar8,0);
          iVar4 = piVar6[0x32];
          if (iVar4 == 0) {
            func_0x00f6b3d0();
          }
          iVar4 = func_0x01113db4(iVar4,0);
          if (iVar4 + iVar8 <= iVar1) {
            return 1;
          }
          if ((iVar8 < 1) && (iVar4 < 1)) {
            return 0;
          }
          if (*(int *)(**(int **)(iRam010f9714 + 0x10f965c) + 0x74) == 0) {
            func_0x00f6b294();
          }
          iVar1 = func_0x010fdb10(0);
          if (*(int *)(**(int **)(iRam010f9718 + 0x10f9684) + 0x74) == 0) {
            func_0x00f6b294();
          }
          func_0x01071364(&uStack_2c,0);
          if (iVar1 == 0) {
            func_0x00f6b3d0();
          }
          uVar10 = 0;
          goto LAB_010f9518;
        }
      }
    }
  }
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x00f6b294();
  }
  iVar1 = func_0x020081fc(piVar5,0);
  if (iVar1 == 0) {
LAB_010f9408:
    if (*(int *)(*piVar7 + 0x74) == 0) {
      func_0x00f6b294();
    }
    iVar1 = func_0x020081fc(piVar6,0);
    if (iVar1 == 0) {
      return 0;
    }
    if (piVar6 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    iVar1 = piVar6[0x32];
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    iVar1 = func_0x01113c58(iVar1,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (piVar5 == (int *)0x0) {
      func_0x00f6b3d0();
    }
    iVar1 = piVar5[0x32];
    if (iVar1 == 0) {
      func_0x00f6b3d0();
    }
    iVar1 = func_0x01113c58(iVar1,0);
    if (iVar1 == 0) goto LAB_010f9408;
  }
  piVar5 = *(int **)(iRam010f96f4 + 0x10f9474);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x00f6b294();
  }
  pcVar3 = (char *)(iRam010f96f8 + 0x10f9490);
  if (*pcVar3 == '\0') {
    func_0x00f6b160(*(undefined4 *)(iRam010f96fc + 0x10f94a4));
    *pcVar3 = '\x01';
  }
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x00f6b294();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (*(int *)(**(int **)(iRam010f9700 + 0x10f94d0) + 0x74) == 0) {
    func_0x00f6b294(**(int **)(iRam010f9700 + 0x10f94d0));
  }
  func_0x01071364(&uStack_2c,0);
  if (iVar1 == 0) {
    func_0x00f6b3d0();
  }
  uVar10 = 0x23;
LAB_010f9518:
  func_0x0137e9e0(iVar1,uStack_2c,uStack_28,uStack_24,uVar10,0);
  return 0;
}

